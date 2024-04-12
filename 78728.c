 WebGLContext::CompileShader(WebGLShader *shader) if ( IsContextLost ( ) )  if ( ! ValidateObject ( "compileShader" , shader ) )  if ( ! mShaderValidation )  if ( ! shader -> NeedsTranslation ( ) )  ShShaderOutput targetShaderSourceLanguage = gl -> IsGLES ( ) ? SH_ESSL_OUTPUT : SH_GLSL_OUTPUT ; ShBuiltInResources resources ; memset ( & resources , 0 , sizeof ( ShBuiltInResources ) ); resources . MaxVertexAttribs = mGLMaxVertexAttribs; resources . MaxVertexUniformVectors = mGLMaxVertexUniformVectors; resources . MaxVaryingVectors = mGLMaxVaryingVectors; resources . MaxVertexTextureImageUnits = mGLMaxVertexTextureImageUnits; resources . MaxCombinedTextureImageUnits = mGLMaxTextureUnits; resources . MaxTextureImageUnits = mGLMaxTextureImageUnits; resources . MaxFragmentUniformVectors = mGLMaxFragmentUniformVectors; resources . MaxDrawBuffers = mGLMaxDrawBuffers; if ( IsExtensionEnabled ( WebGLExtensionID :: EXT_frag_depth ) )  resources . EXT_frag_depth = 1; if ( IsExtensionEnabled ( WebGLExtensionID :: OES_standard_derivatives ) )  resources . OES_standard_derivatives = 1; if ( IsExtensionEnabled ( WebGLExtensionID :: WEBGL_draw_buffers ) )  resources . EXT_draw_buffers = 1; if ( IsExtensionEnabled ( WebGLExtensionID :: EXT_shader_texture_lod ) )  resources . EXT_shader_texture_lod = 1; resources . FragmentPrecisionHigh = mDisableFragHighP ? 0 : 1; resources . HashFunction = WebGLProgram :: IdentifierHashFunction; if ( gl -> WorkAroundDriverBugs ( ) )  if ( gl -> Vendor ( ) == gl :: GLVendor :: NVIDIA )  resources . MaxExpressionComplexity = 1000; StripComments stripComments ( shader -> Source ( ) ) ; const nsAString & cleanSource = Substring ( stripComments . result ( ) . Elements ( ) , stripComments . length ( ) ) ; if ( ! ValidateGLSLString ( cleanSource , "compileShader" ) )  NS_LossyConvertUTF16toASCII sourceCString ( cleanSource ) ; if ( gl -> WorkAroundDriverBugs ( ) )  const uint32_t maxSourceLength = 0x3ffff ; if ( sourceCString . Length ( ) > maxSourceLength )  const char * s = sourceCString . get ( ) ; static const char * bypassPrefixSearch = "#version proto-200" ; static const char * bypassANGLEPrefix [ 2 ] = "precision mediump "#define gl_VertexID "#define gl_InstanceID 0\n" , const bool bypassANGLE = IsWebGL2 ( ) && ( strstr ( s , bypassPrefixSearch ) != 0 ) ; nsTArray < char > bypassANGLEShaderCode ; if ( bypassANGLE )  const int bypassStage = ( shader -> ShaderType ( ) == LOCAL_GL_FRAGMENT_SHADER ) ? 1 : 0 ; const char * originalShader = strstr ( s , bypassPrefixSearch ) + strlen ( bypassPrefixSearch ) ; strcpy ( bypassANGLEShaderCode . Elements ( ) , bypassANGLEPrefix [ bypassStage ] ); strcat ( bypassANGLEShaderCode . Elements ( ) , originalShader ); angleShaderCode = bypassANGLEShaderCode . Elements ( ); compiler = ShConstructCompiler ( shader -> ShaderType ( ) , SH_WEBGL_SPEC , targetShaderSourceLanguage , & resources ); int compileOptions = SH_VARIABLES | SH_ENFORCE_PACKING_RESTRICTIONS | SH_INIT_VARYINGS_WITHOUT_STATIC_USE | SH_OBJECT_CODE | SH_LIMIT_CALL_STACK_DEPTH ; if ( resources . MaxExpressionComplexity > 0 )  compileOptions |= SH_LIMIT_EXPRESSION_COMPLEXITY; compileOptions |= SH_CLAMP_INDIRECT_ARRAY_BOUNDS; if ( gl -> WorkAroundDriverBugs ( ) )  if ( gl -> Vendor ( ) == gl :: GLVendor :: ATI )  compileOptions |= SH_EMULATE_BUILT_IN_FUNCTIONS; if ( gl -> Vendor ( ) == gl :: GLVendor :: Intel )  compileOptions |= SH_EMULATE_BUILT_IN_FUNCTIONS; if ( gl -> Vendor ( ) == gl :: GLVendor :: NVIDIA )  compileOptions |= SH_UNROLL_FOR_LOOP_WITH_SAMPLER_ARRAY_INDEX; compileOptions |= SH_UNFOLD_SHORT_CIRCUIT; if ( ! ShCompile ( compiler , & angleShaderCode , 1 , compileOptions ) )  size_t num_uniforms = 0 ; nsAutoArrayPtr < char > mapped_name ( new char [ mapped_max_length + 1 ] ) ; for (size_t i = 0; i < num_uniforms; i++) char mappedNameLength = strlen ( mapped_name ) ; char mappedNameLastChar = mappedNameLength > 1 ? mapped_name [ mappedNameLength - 1 ] : 0 ; shader -> mUniformInfos . AppendElement ( WebGLUniformInfo ( size , mappedNameLastChar == ']' , type ) ); 