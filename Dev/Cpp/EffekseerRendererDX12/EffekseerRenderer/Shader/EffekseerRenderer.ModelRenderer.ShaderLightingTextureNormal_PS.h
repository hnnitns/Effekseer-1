#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc /Zpc /Tps_4_0 /D __EFFEKSEER_BUILD_VERSION16__=1 /EPS /Fh
//    Shader/EffekseerRenderer.ModelRenderer.ShaderLightingTextureNormal_PS.h
//    Shader/model_renderer_lighting_texture_normal_PS.fx
//
//
// Buffer Definitions: 
//
// cbuffer PS_ConstanBuffer
// {
//
//   float4 fLightDirection;            // Offset:    0 Size:    16
//   float4 fLightColor;                // Offset:   16 Size:    16
//   float4 fLightAmbient;              // Offset:   32 Size:    16
//   float4 fFlipbookParameter;         // Offset:   48 Size:    16
//   float4 fUVDistortionParameter;     // Offset:   64 Size:    16
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// g_colorSampler                    sampler      NA          NA    0        1
// g_normalSampler                   sampler      NA          NA    1        1
// g_alphaSampler                    sampler      NA          NA    2        1
// g_uvDistortionSampler             sampler      NA          NA    3        1
// g_colorTexture                    texture  float4          2d    0        1
// g_normalTexture                   texture  float4          2d    1        1
// g_alphaTexture                    texture  float4          2d    2        1
// g_uvDistortionTexture             texture  float4          2d    3        1
// PS_ConstanBuffer                  cbuffer      NA          NA    1        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_POSITION              0   xyzw        0      POS  float       
// TEXCOORD                 0   xy          1     NONE  float   xy  
// TEXCOORD                 4     zw        1     NONE  float     zw
// TEXCOORD                 1   xyz         2     NONE  float   xyz 
// TEXCOORD                 2   xyz         3     NONE  float   xyz 
// TEXCOORD                 3   xyz         4     NONE  float   xyz 
// TEXCOORD                 5   xy          5     NONE  float   xy  
// TEXCOORD                 6     z         5     NONE  float     z 
// TEXCOORD                 7   xy          6     NONE  float   xy  
// TEXCOORD                 8     z         6     NONE  float     z 
// COLOR                    0   xyzw        7     NONE  float   xyzw
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_Target                0   xyzw        0   TARGET  float   xyzw
//
ps_4_0
dcl_constantbuffer cb1[5], immediateIndexed
dcl_sampler s0, mode_default
dcl_sampler s1, mode_default
dcl_sampler s2, mode_default
dcl_sampler s3, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_resource_texture2d (float,float,float,float) t1
dcl_resource_texture2d (float,float,float,float) t2
dcl_resource_texture2d (float,float,float,float) t3
dcl_input_ps linear v1.xy
dcl_input_ps linear v1.zw
dcl_input_ps linear v2.xyz
dcl_input_ps linear v3.xyz
dcl_input_ps linear v4.xyz
dcl_input_ps linear v5.xy
dcl_input_ps linear v5.z
dcl_input_ps linear v6.xy
dcl_input_ps linear v6.z
dcl_input_ps linear v7.xyzw
dcl_output o0.xyzw
dcl_temps 4
sample r0.xyzw, v5.xyxx, t3.xyzw, s3
mad r0.xy, r0.xyxx, l(2.000000, 2.000000, 0.000000, 0.000000), l(-1.000000, -1.000000, 0.000000, 0.000000)
mad r1.xyzw, r0.xyxy, cb1[4].xxxx, v1.xyzw
sample r2.xyzw, r1.xyxx, t0.xyzw, s0
mul r2.xyzw, r2.xyzw, v7.xyzw
lt r0.z, l(0.000000), cb1[3].x
if_nz r0.z
  mad r0.xy, r0.xyxx, cb1[4].xxxx, v6.xyxx
  sample r0.xyzw, r0.xyxx, t0.xyzw, s0
  eq r3.x, cb1[3].y, l(1.000000)
  mad r0.xyzw, r0.xyzw, v7.xyzw, -r2.xyzw
  mad r0.xyzw, v5.zzzz, r0.xyzw, r2.xyzw
  movc r2.xyzw, r3.xxxx, r0.xyzw, r2.xyzw
endif 
sample r0.xyzw, r1.zwzz, t2.xyzw, s2
mul r0.x, r0.w, r2.w
ge r0.y, v6.z, r0.x
discard r0.y
eq r0.y, r0.x, l(0.000000)
discard r0.y
sample r1.xyzw, r1.xyxx, t1.xyzw, s1
add r0.yzw, r1.xxyz, l(0.000000, -0.500000, -0.500000, -0.500000)
add r0.yzw, r0.yyzw, r0.yyzw
mul r1.xyz, r0.zzzz, v3.xyzx
mad r1.xyz, r0.yyyy, v4.xyzx, r1.xyzx
mad r0.yzw, r0.wwww, v2.xxyz, r1.xxyz
dp3 r1.x, r0.yzwy, r0.yzwy
rsq r1.x, r1.x
mul r0.yzw, r0.yyzw, r1.xxxx
dp3 r0.y, cb1[0].xyzx, r0.yzwy
max r0.y, r0.y, l(0.000000)
mad r0.yzw, cb1[1].xxyz, r0.yyyy, cb1[2].xxyz
mul o0.xyz, r0.yzwy, r2.xyzx
mov o0.w, r0.x
ret 
// Approximately 35 instruction slots used
#endif

const BYTE g_PS[] =
{
     68,  88,  66,  67, 182, 174, 
    223,  22,  14, 115, 175,  14, 
    122,  28, 152, 182, 140, 193, 
    136, 199,   1,   0,   0,   0, 
     84,  10,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
     60,   3,   0,   0, 112,   4, 
      0,   0, 164,   4,   0,   0, 
    216,   9,   0,   0,  82,  68, 
     69,  70,   0,   3,   0,   0, 
      1,   0,   0,   0, 216,   1, 
      0,   0,   9,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
    255, 255,  16,   1,   0,   0, 
    204,   2,   0,   0,  60,   1, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     75,   1,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,  91,   1,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 106,   1, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    128,   1,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      4,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  13,   0, 
      0,   0, 143,   1,   0,   0, 
      2,   0,   0,   0,   5,   0, 
      0,   0,   4,   0,   0,   0, 
    255, 255, 255, 255,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     13,   0,   0,   0, 159,   1, 
      0,   0,   2,   0,   0,   0, 
      5,   0,   0,   0,   4,   0, 
      0,   0, 255, 255, 255, 255, 
      2,   0,   0,   0,   1,   0, 
      0,   0,  13,   0,   0,   0, 
    174,   1,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      4,   0,   0,   0, 255, 255, 
    255, 255,   3,   0,   0,   0, 
      1,   0,   0,   0,  13,   0, 
      0,   0, 196,   1,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 103,  95, 
     99, 111, 108, 111, 114,  83, 
     97, 109, 112, 108, 101, 114, 
      0, 103,  95, 110, 111, 114, 
    109,  97, 108,  83,  97, 109, 
    112, 108, 101, 114,   0, 103, 
     95,  97, 108, 112, 104,  97, 
     83,  97, 109, 112, 108, 101, 
    114,   0, 103,  95, 117, 118, 
     68, 105, 115, 116, 111, 114, 
    116, 105, 111, 110,  83,  97, 
    109, 112, 108, 101, 114,   0, 
    103,  95,  99, 111, 108, 111, 
    114,  84, 101, 120, 116, 117, 
    114, 101,   0, 103,  95, 110, 
    111, 114, 109,  97, 108,  84, 
    101, 120, 116, 117, 114, 101, 
      0, 103,  95,  97, 108, 112, 
    104,  97,  84, 101, 120, 116, 
    117, 114, 101,   0, 103,  95, 
    117, 118,  68, 105, 115, 116, 
    111, 114, 116, 105, 111, 110, 
     84, 101, 120, 116, 117, 114, 
    101,   0,  80,  83,  95,  67, 
    111, 110, 115, 116,  97, 110, 
     66, 117, 102, 102, 101, 114, 
      0, 171, 171, 171, 196,   1, 
      0,   0,   5,   0,   0,   0, 
    240,   1,   0,   0,  80,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 104,   2, 
      0,   0,   0,   0,   0,   0, 
     16,   0,   0,   0,   2,   0, 
      0,   0, 120,   2,   0,   0, 
      0,   0,   0,   0, 136,   2, 
      0,   0,  16,   0,   0,   0, 
     16,   0,   0,   0,   2,   0, 
      0,   0, 120,   2,   0,   0, 
      0,   0,   0,   0, 148,   2, 
      0,   0,  32,   0,   0,   0, 
     16,   0,   0,   0,   2,   0, 
      0,   0, 120,   2,   0,   0, 
      0,   0,   0,   0, 162,   2, 
      0,   0,  48,   0,   0,   0, 
     16,   0,   0,   0,   2,   0, 
      0,   0, 120,   2,   0,   0, 
      0,   0,   0,   0, 181,   2, 
      0,   0,  64,   0,   0,   0, 
     16,   0,   0,   0,   2,   0, 
      0,   0, 120,   2,   0,   0, 
      0,   0,   0,   0, 102,  76, 
    105, 103, 104, 116,  68, 105, 
    114, 101,  99, 116, 105, 111, 
    110,   0,   1,   0,   3,   0, 
      1,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    102,  76, 105, 103, 104, 116, 
     67, 111, 108, 111, 114,   0, 
    102,  76, 105, 103, 104, 116, 
     65, 109,  98, 105, 101, 110, 
    116,   0, 102,  70, 108, 105, 
    112,  98, 111, 111, 107,  80, 
     97, 114,  97, 109, 101, 116, 
    101, 114,   0, 102,  85,  86, 
     68, 105, 115, 116, 111, 114, 
    116, 105, 111, 110,  80,  97, 
    114,  97, 109, 101, 116, 101, 
    114,   0,  77, 105,  99, 114, 
    111, 115, 111, 102, 116,  32, 
     40,  82,  41,  32,  72,  76, 
     83,  76,  32,  83, 104,  97, 
    100, 101, 114,  32,  67, 111, 
    109, 112, 105, 108, 101, 114, 
     32,  57,  46,  50,  57,  46, 
     57,  53,  50,  46,  51,  49, 
     49,  49,   0, 171, 171, 171, 
     73,  83,  71,  78,  44,   1, 
      0,   0,  11,   0,   0,   0, 
      8,   0,   0,   0,  16,   1, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  28,   1, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   3,   0,   0,  28,   1, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
     12,  12,   0,   0,  28,   1, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
      7,   7,   0,   0,  28,   1, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   3,   0,   0,   0, 
      7,   7,   0,   0,  28,   1, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   4,   0,   0,   0, 
      7,   7,   0,   0,  28,   1, 
      0,   0,   5,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   5,   0,   0,   0, 
      3,   3,   0,   0,  28,   1, 
      0,   0,   6,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   5,   0,   0,   0, 
      4,   4,   0,   0,  28,   1, 
      0,   0,   7,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   6,   0,   0,   0, 
      3,   3,   0,   0,  28,   1, 
      0,   0,   8,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   6,   0,   0,   0, 
      4,   4,   0,   0,  37,   1, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   7,   0,   0,   0, 
     15,  15,   0,   0,  83,  86, 
     95,  80,  79,  83,  73,  84, 
     73,  79,  78,   0,  84,  69, 
     88,  67,  79,  79,  82,  68, 
      0,  67,  79,  76,  79,  82, 
      0, 171,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  97, 114, 
    103, 101, 116,   0, 171, 171, 
     83,  72,  68,  82,  44,   5, 
      0,   0,  64,   0,   0,   0, 
     75,   1,   0,   0,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      1,   0,   0,   0,   5,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   1,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   2,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   3,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     88,  24,   0,   4,   0, 112, 
     16,   0,   1,   0,   0,   0, 
     85,  85,   0,   0,  88,  24, 
      0,   4,   0, 112,  16,   0, 
      2,   0,   0,   0,  85,  85, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   3,   0, 
      0,   0,  85,  85,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   1,   0,   0,   0, 
     98,  16,   0,   3, 194,  16, 
     16,   0,   1,   0,   0,   0, 
     98,  16,   0,   3, 114,  16, 
     16,   0,   2,   0,   0,   0, 
     98,  16,   0,   3, 114,  16, 
     16,   0,   3,   0,   0,   0, 
     98,  16,   0,   3, 114,  16, 
     16,   0,   4,   0,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   5,   0,   0,   0, 
     98,  16,   0,   3,  66,  16, 
     16,   0,   5,   0,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   6,   0,   0,   0, 
     98,  16,   0,   3,  66,  16, 
     16,   0,   6,   0,   0,   0, 
     98,  16,   0,   3, 242,  16, 
     16,   0,   7,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
    104,   0,   0,   2,   4,   0, 
      0,   0,  69,   0,   0,   9, 
    242,   0,  16,   0,   0,   0, 
      0,   0,  70,  16,  16,   0, 
      5,   0,   0,   0,  70, 126, 
     16,   0,   3,   0,   0,   0, 
      0,  96,  16,   0,   3,   0, 
      0,   0,  50,   0,   0,  15, 
     50,   0,  16,   0,   0,   0, 
      0,   0,  70,   0,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,  64, 
      0,   0,   0,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    128, 191,   0,   0, 128, 191, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  50,   0,   0,  10, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70,   4,  16,   0, 
      0,   0,   0,   0,   6, 128, 
     32,   0,   1,   0,   0,   0, 
      4,   0,   0,   0,  70,  30, 
     16,   0,   1,   0,   0,   0, 
     69,   0,   0,   9, 242,   0, 
     16,   0,   2,   0,   0,   0, 
     70,   0,  16,   0,   1,   0, 
      0,   0,  70, 126,  16,   0, 
      0,   0,   0,   0,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,   7, 242,   0, 
     16,   0,   2,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  70,  30,  16,   0, 
      7,   0,   0,   0,  49,   0, 
      0,   8,  66,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     10, 128,  32,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
     31,   0,   4,   3,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  10,  50,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   0,  16,   0,   0,   0, 
      0,   0,   6, 128,  32,   0, 
      1,   0,   0,   0,   4,   0, 
      0,   0,  70,  16,  16,   0, 
      6,   0,   0,   0,  69,   0, 
      0,   9, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  24,   0, 
      0,   8,  18,   0,  16,   0, 
      3,   0,   0,   0,  26, 128, 
     32,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     50,   0,   0,  10, 242,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  70,  30,  16,   0, 
      7,   0,   0,   0,  70,  14, 
     16, 128,  65,   0,   0,   0, 
      2,   0,   0,   0,  50,   0, 
      0,   9, 242,   0,  16,   0, 
      0,   0,   0,   0, 166,  26, 
     16,   0,   5,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  55,   0, 
      0,   9, 242,   0,  16,   0, 
      2,   0,   0,   0,   6,   0, 
     16,   0,   3,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  21,   0, 
      0,   1,  69,   0,   0,   9, 
    242,   0,  16,   0,   0,   0, 
      0,   0, 230,  10,  16,   0, 
      1,   0,   0,   0,  70, 126, 
     16,   0,   2,   0,   0,   0, 
      0,  96,  16,   0,   2,   0, 
      0,   0,  56,   0,   0,   7, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   2,   0,   0,   0, 
     29,   0,   0,   7,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     42,  16,  16,   0,   6,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  13,   0, 
      4,   3,  26,   0,  16,   0, 
      0,   0,   0,   0,  24,   0, 
      0,   7,  34,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  13,   0,   4,   3, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  69,   0,   0,   9, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70,   0,  16,   0, 
      1,   0,   0,   0,  70, 126, 
     16,   0,   1,   0,   0,   0, 
      0,  96,  16,   0,   1,   0, 
      0,   0,   0,   0,   0,  10, 
    226,   0,  16,   0,   0,   0, 
      0,   0,   6,   9,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0, 191,   0,   0, 
      0, 191,   0,   0,   0, 191, 
      0,   0,   0,   7, 226,   0, 
     16,   0,   0,   0,   0,   0, 
     86,  14,  16,   0,   0,   0, 
      0,   0,  86,  14,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      1,   0,   0,   0, 166,  10, 
     16,   0,   0,   0,   0,   0, 
     70,  18,  16,   0,   3,   0, 
      0,   0,  50,   0,   0,   9, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  86,   5,  16,   0, 
      0,   0,   0,   0,  70,  18, 
     16,   0,   4,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,   9, 
    226,   0,  16,   0,   0,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,   6,  25, 
     16,   0,   2,   0,   0,   0, 
      6,   9,  16,   0,   1,   0, 
      0,   0,  16,   0,   0,   7, 
     18,   0,  16,   0,   1,   0, 
      0,   0, 150,   7,  16,   0, 
      0,   0,   0,   0, 150,   7, 
     16,   0,   0,   0,   0,   0, 
     68,   0,   0,   5,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  56,   0,   0,   7, 
    226,   0,  16,   0,   0,   0, 
      0,   0,  86,  14,  16,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   1,   0,   0,   0, 
     16,   0,   0,   8,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    150,   7,  16,   0,   0,   0, 
      0,   0,  52,   0,   0,   7, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     50,   0,   0,  11, 226,   0, 
     16,   0,   0,   0,   0,   0, 
      6, 137,  32,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     86,   5,  16,   0,   0,   0, 
      0,   0,   6, 137,  32,   0, 
      1,   0,   0,   0,   2,   0, 
      0,   0,  56,   0,   0,   7, 
    114,  32,  16,   0,   0,   0, 
      0,   0, 150,   7,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
     54,   0,   0,   5, 130,  32, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     83,  84,  65,  84, 116,   0, 
      0,   0,  35,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,  11,   0,   0,   0, 
     15,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   5,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0
};
