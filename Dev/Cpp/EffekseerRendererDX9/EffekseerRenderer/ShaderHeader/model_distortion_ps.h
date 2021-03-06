#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tps_3_0 /Emain /Fh ShaderHeader/model_distortion_ps.h
//    Shader/model_distortion_ps.fx
//
//
// Parameters:
//
//   sampler2D Sampler_g_backSampler;
//   sampler2D Sampler_g_sampler;
//   float4 _73_g_scale;
//   float4 _73_mUVInversedBack;
//
//
// Registers:
//
//   Name                  Reg   Size
//   --------------------- ----- ----
//   _73_g_scale           c0       1
//   _73_mUVInversedBack   c1       1
//   Sampler_g_sampler     s0       1
//   Sampler_g_backSampler s1       1
//

    ps_3_0
    def c2, -1, -0, 2, 1
    def c3, 0.5, 1, 0, 0
    dcl_texcoord_centroid v0.xy
    dcl_texcoord2 v1.xyw
    dcl_texcoord3 v2.xyw
    dcl_texcoord4 v3.xyw
    dcl_texcoord5_centroid v4.xyw
    dcl_2d s0
    dcl_2d s1
    texld r0, v0, s0
    mul r0.z, r0.w, v4.w
    cmp r1, -r0_abs.z, c2.x, c2.y
    texkill r1
    rcp r0.w, v3.w
    mul r1.xy, r0.w, v3
    rcp r0.w, v2.w
    rcp r1.z, v1.w
    mad r0.xy, r0, c2.z, c2.x
    mul r0.xy, r0, v4
    mul r0.xy, r0, c0.x
    mad r1.zw, v1.xyxy, r1.z, -r1.xyxy
    mad r1.zw, r1, r0.x, r1.xyxy
    mad r0.xw, v2.xyzy, r0.w, -r1.xyzy
    mad r0.xy, r0.xwzw, r0.y, r1.zwzw
    add r0.xy, r0, c2.w
    mul r1.x, r0.x, c3.x
    mad r0.x, r0.y, -c3.x, c3.y
    mad r1.z, c1.y, r0.x, c1.x
    texld r1, r1.xzzw, s1
    mov oC0.xyz, r1
    mov oC0.w, r0.z

// approximately 22 instruction slots used (2 texture, 20 arithmetic)
#endif

const BYTE g_ps30_main[] =
{
      0,   3, 255, 255, 254, 255, 
     73,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 239,   0, 
      0,   0,   0,   3, 255, 255, 
      4,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
    232,   0,   0,   0, 108,   0, 
      0,   0,   3,   0,   1,   0, 
      1,   0,   6,   0, 132,   0, 
      0,   0,   0,   0,   0,   0, 
    148,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   2,   0, 
    168,   0,   0,   0,   0,   0, 
      0,   0, 184,   0,   0,   0, 
      2,   0,   0,   0,   1,   0, 
      2,   0, 196,   0,   0,   0, 
      0,   0,   0,   0, 212,   0, 
      0,   0,   2,   0,   1,   0, 
      1,   0,   6,   0, 196,   0, 
      0,   0,   0,   0,   0,   0, 
     83,  97, 109, 112, 108, 101, 
    114,  95, 103,  95,  98,  97, 
     99, 107,  83,  97, 109, 112, 
    108, 101, 114,   0, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  83,  97, 
    109, 112, 108, 101, 114,  95, 
    103,  95, 115,  97, 109, 112, 
    108, 101, 114,   0, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  95,  55, 
     51,  95, 103,  95, 115,  99, 
     97, 108, 101,   0,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  95,  55,  51,  95, 
    109,  85,  86,  73, 110, 118, 
    101, 114, 115, 101, 100,  66, 
     97,  99, 107,   0, 112, 115, 
     95,  51,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  57,  46,  57,  53,  50, 
     46,  51,  49,  49,  49,   0, 
     81,   0,   0,   5,   2,   0, 
     15, 160,   0,   0, 128, 191, 
      0,   0,   0, 128,   0,   0, 
      0,  64,   0,   0, 128,  63, 
     81,   0,   0,   5,   3,   0, 
     15, 160,   0,   0,   0,  63, 
      0,   0, 128,  63,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   0,   0,  67, 144, 
     31,   0,   0,   2,   5,   0, 
      2, 128,   1,   0,  11, 144, 
     31,   0,   0,   2,   5,   0, 
      3, 128,   2,   0,  11, 144, 
     31,   0,   0,   2,   5,   0, 
      4, 128,   3,   0,  11, 144, 
     31,   0,   0,   2,   5,   0, 
      5, 128,   4,   0,  75, 144, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   0,   8,  15, 160, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   1,   8,  15, 160, 
     66,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 144, 
      0,   8, 228, 160,   5,   0, 
      0,   3,   0,   0,   4, 128, 
      0,   0, 255, 128,   4,   0, 
    255, 144,  88,   0,   0,   4, 
      1,   0,  15, 128,   0,   0, 
    170, 140,   2,   0,   0, 160, 
      2,   0,  85, 160,  65,   0, 
      0,   1,   1,   0,  15, 128, 
      6,   0,   0,   2,   0,   0, 
      8, 128,   3,   0, 255, 144, 
      5,   0,   0,   3,   1,   0, 
      3, 128,   0,   0, 255, 128, 
      3,   0, 228, 144,   6,   0, 
      0,   2,   0,   0,   8, 128, 
      2,   0, 255, 144,   6,   0, 
      0,   2,   1,   0,   4, 128, 
      1,   0, 255, 144,   4,   0, 
      0,   4,   0,   0,   3, 128, 
      0,   0, 228, 128,   2,   0, 
    170, 160,   2,   0,   0, 160, 
      5,   0,   0,   3,   0,   0, 
      3, 128,   0,   0, 228, 128, 
      4,   0, 228, 144,   5,   0, 
      0,   3,   0,   0,   3, 128, 
      0,   0, 228, 128,   0,   0, 
      0, 160,   4,   0,   0,   4, 
      1,   0,  12, 128,   1,   0, 
     68, 144,   1,   0, 170, 128, 
      1,   0,  68, 129,   4,   0, 
      0,   4,   1,   0,  12, 128, 
      1,   0, 228, 128,   0,   0, 
      0, 128,   1,   0,  68, 128, 
      4,   0,   0,   4,   0,   0, 
      9, 128,   2,   0, 100, 144, 
      0,   0, 255, 128,   1,   0, 
    100, 129,   4,   0,   0,   4, 
      0,   0,   3, 128,   0,   0, 
    236, 128,   0,   0,  85, 128, 
      1,   0, 238, 128,   2,   0, 
      0,   3,   0,   0,   3, 128, 
      0,   0, 228, 128,   2,   0, 
    255, 160,   5,   0,   0,   3, 
      1,   0,   1, 128,   0,   0, 
      0, 128,   3,   0,   0, 160, 
      4,   0,   0,   4,   0,   0, 
      1, 128,   0,   0,  85, 128, 
      3,   0,   0, 161,   3,   0, 
     85, 160,   4,   0,   0,   4, 
      1,   0,   4, 128,   1,   0, 
     85, 160,   0,   0,   0, 128, 
      1,   0,   0, 160,  66,   0, 
      0,   3,   1,   0,  15, 128, 
      1,   0, 232, 128,   1,   8, 
    228, 160,   1,   0,   0,   2, 
      0,   8,   7, 128,   1,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   8,   8, 128,   0,   0, 
    170, 128, 255, 255,   0,   0
};
