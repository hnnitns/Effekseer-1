#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tvs_3_0 /EVS /D __EFFEKSEER_BUILD_VERSION16__=1 /Fh
//    Shader/EffekseerRenderer.ModelRenderer.ShaderDistortion_VS.h
//    Shader/model_renderer_distortion_VS.fx
//
//
// Parameters:
//
//   float4 fAlphaUV[20];
//   float4 fFlipbookIndexAndNextRate[20];
//   float4 fFlipbookParameter;
//   float4 fModelAlphaThreshold[20];
//   float4 fModelColor[20];
//   float4 fUV[20];
//   float4x4 mCameraProj;
//   float4x4 mModel[20];
//   float4 mUVInversed;
//
//
// Registers:
//
//   Name                      Reg   Size
//   ------------------------- ----- ----
//   mCameraProj               c0       4
//   mModel                    c4      80
//   fUV                       c84     20
//   fAlphaUV                  c104    20
//   fFlipbookParameter        c124     1
//   fFlipbookIndexAndNextRate c125    20
//   fModelAlphaThreshold      c145    20
//   fModelColor               c165    20
//   mUVInversed               c188     1
//

    vs_3_0
    def c185, 4, 0, 1, -1
    def c186, -2, 4, 0, 0
    dcl_position v0
    dcl_normal v1
    dcl_normal1 v2
    dcl_normal2 v3
    dcl_texcoord v4
    dcl_blendindices v5
    dcl_position o0
    dcl_texcoord o1.xy
    dcl_texcoord1 o2
    dcl_texcoord2 o3
    dcl_texcoord3 o4
    dcl_texcoord4 o5
    dcl_color o6
    dcl_texcoord5 o7.xy
    dcl_texcoord6 o8.x
    dcl_texcoord7 o9.xy
    dcl_texcoord8 o10.x
    mul r0.x, c185.x, v5.x
    mova a0.x, r0.x
    mova a0.y, v5.x
    mov r0.xyz, v0
    add r1.xyz, r0, v1
    add r2.xyz, r0, v2
    add r0.xyz, r0, v3
    mul r3, v0.y, c5[a0.x]
    mad r3, c4[a0.x], v0.x, r3
    mad r3, c6[a0.x], v0.z, r3
    add r3, r3, c7[a0.x]
    mul r4, r1.y, c5[a0.x]
    mad r4, c4[a0.x], r1.x, r4
    mad r1, c6[a0.x], r1.z, r4
    add r1, r1, c7[a0.x]
    mul r4, r2.y, c5[a0.x]
    mad r4, c4[a0.x], r2.x, r4
    mad r2, c6[a0.x], r2.z, r4
    add r2, r2, c7[a0.x]
    mul r4, r0.y, c5[a0.x]
    mad r4, c4[a0.x], r0.x, r4
    mad r0, c6[a0.x], r0.z, r4
    add r0, r0, c7[a0.x]
    add r4, -r3, r1
    dp4 r4.x, r4, r4
    rsq r4.x, r4.x
    lrp r5, r4.x, r1, r3
    add r1, -r3, r2
    dp4 r1.x, r1, r1
    rsq r1.x, r1.x
    lrp r4, r1.x, r2, r3
    add r1, -r3, r0
    dp4 r1.x, r1, r1
    rsq r1.x, r1.x
    lrp r2, r1.x, r0, r3
    mul r0, r3.y, c1
    mad r0, c0, r3.x, r0
    mad r0, c2, r3.z, r0
    mad r0, c3, r3.w, r0
    mad r1.xy, v4, c84[a0.y].zwzw, c84[a0.y]
    mad o7.x, v4.x, c104[a0.y].z, c104[a0.y].x
    mad r1.w, v4.y, c104[a0.y].w, c104[a0.y].y
    mul r3, r5.y, c1
    mad r3, c0, r5.x, r3
    mad r3, c2, r5.z, r3
    mad o2, c3, r5.w, r3
    mul r3, r4.y, c1
    mad r3, c0, r4.x, r3
    mad r3, c2, r4.z, r3
    mad o3, c3, r4.w, r3
    mul r3, r2.y, c1
    mad r3, c0, r2.x, r3
    mad r3, c2, r2.z, r3
    mad o4, c3, r2.w, r3
    mad r1.z, c188.y, r1.y, c188.x
    mad o7.y, c188.y, r1.w, c188.x
    mov r2, c124
    if_lt c185.y, r2.x
      frc r1.y, c125[a0.y].x
      add r3.x, -r1.y, c125[a0.y].x
      add r1.w, r3.x, c185.z
      mul r2.x, c124.w, c124.z
      abs r3.w, c124.y
      if_ge -r3.w, r3.w
        sge r3.w, r1.w, r2.x
        mad r4.x, r2.z, r2.w, c185.w
        add r3.y, r3.x, c185.z
        lrp r5.xy, r3.w, r4.x, r3
      else
        add r3.y, r2.y, c185.w
        if_ge -r3_abs.y, r3_abs.y
          mul r3.y, r2.x, r3.x
          sge r3.y, r3.y, -r3.y
          lrp r4.x, r3.y, r2.x, -r2.x
          rcp r3.y, r4.x
          mul r3.y, r3.y, r3.x
          frc r3.y, r3.y
          mul r5.x, r3.y, r4.x
          mul r3.y, r1.w, r2.x
          sge r3.y, r3.y, -r3.y
          lrp r4.x, r3.y, r2.x, -r2.x
          rcp r3.y, r4.x
          mul r3.y, r1.w, r3.y
          frc r3.y, r3.y
          mul r5.y, r3.y, r4.x
        else
          add r2.y, r2.y, c186.x
          rcp r3.y, r2.x
          mul r3.w, r3.y, r3.x
          frc r4.x, r3.w
          add r3.w, r3.w, -r4.x
          add r4.x, r3.w, r3.w
          sge r4.x, r4.x, -r4.x
          mad r4.x, r4.x, c186.y, c186.x
          rcp r4.y, r4.x
          mul r3.w, r3.w, r4.y
          frc r3.w, r3.w
          mad r3.w, r4.x, r3.w, c185.w
          sge r3.w, -r3_abs.w, r3_abs.w
          mul r4.x, r2.x, r3.x
          sge r4.x, r4.x, -r4.x
          lrp r5.z, r4.x, r2.x, -r2.x
          rcp r4.x, r5.z
          mul r4.x, r3.x, r4.x
          frc r4.x, r4.x
          mul r4.y, r4.x, r5.z
          mad r2.z, r2.z, r2.w, c185.w
          frc r2.w, r4.y
          add r2.w, -r2.w, r4.y
          add r2.w, -r2.w, r2.z
          mad r2.w, r5.z, -r4.x, r2.w
          mad r4.x, r3.w, r2.w, r4.y
          mul r2.w, r1.w, r3.y
          frc r3.y, r2.w
          add r2.w, r2.w, -r3.y
          add r3.y, r2.w, r2.w
          sge r3.y, r3.y, -r3.y
          mad r3.y, r3.y, c186.y, c186.x
          rcp r3.w, r3.y
          mul r2.w, r2.w, r3.w
          frc r2.w, r2.w
          mad r2.w, r3.y, r2.w, c185.w
          sge r2.yw, -r2_abs, r2_abs
          mul r3.y, r1.w, r2.x
          sge r3.y, r3.y, -r3.y
          lrp r4.z, r3.y, r2.x, -r2.x
          rcp r2.x, r4.z
          mul r1.w, r1.w, r2.x
          frc r1.w, r1.w
          mul r2.x, r1.w, r4.z
          frc r3.y, r2.x
          add r3.y, r2.x, -r3.y
          add r2.z, r2.z, -r3.y
          mad r1.w, r4.z, -r1.w, r2.z
          mad r4.y, r2.w, r1.w, r2.x
          add r3.z, r3.x, c185.z
          lrp r5.xy, r2.y, r4, r3.xzzw
        endif
      endif
      frc r1.w, r5.x
      add r2.x, r5.x, -r1.w
      slt r2.y, r5.x, -r5.x
      slt r1.w, -r1.w, r1.w
      mad r1.w, r2.y, r1.w, r2.x
      frc r2.x, c124.z
      add r2.y, -r2.x, c124.z
      slt r2.z, c124.z, -c124.z
      slt r2.x, -r2.x, r2.x
      mad r2.x, r2.z, r2.x, r2.y
      mul r2.y, r1.w, r2.x
      sge r2.y, r2.y, -r2.y
      lrp r3.x, r2.y, r2.x, -r2.x
      rcp r2.y, r3.x
      mul r2.y, r1.w, r2.y
      frc r2.y, r2.y
      mul r2.y, r2.y, r3.x
      frc r2.z, r2.y
      add r2.w, r2.y, -r2.z
      slt r2.y, r2.y, -r2.y
      slt r2.z, -r2.z, r2.z
      mad r3.x, r2.y, r2.z, r2.w
      rcp r2.y, r2.x
      mul r1.w, r1.w, r2.y
      frc r2.z, r1.w
      add r2.w, r1.w, -r2.z
      slt r1.w, r1.w, -r1.w
      slt r2.z, -r2.z, r2.z
      mad r3.y, r1.w, r2.z, r2.w
      rcp r4.x, c124.z
      rcp r4.y, c124.w
      mad r2.zw, r3.xyxy, -r4.xyxy, r1.xyxz
      mul r2.zw, r2, c124
      frc r1.w, r5.y
      add r3.x, r5.y, -r1.w
      slt r3.y, r5.y, -r5.y
      slt r1.w, -r1.w, r1.w
      mad r1.w, r3.y, r1.w, r3.x
      mul r3.x, r2.x, r1.w
      sge r3.x, r3.x, -r3.x
      lrp r4.z, r3.x, r2.x, -r2.x
      rcp r2.x, r4.z
      mul r2.x, r1.w, r2.x
      frc r2.x, r2.x
      mul r2.x, r2.x, r4.z
      frc r3.x, r2.x
      add r3.y, r2.x, -r3.x
      slt r2.x, r2.x, -r2.x
      slt r3.x, -r3.x, r3.x
      mad r3.x, r2.x, r3.x, r3.y
      mul r1.w, r2.y, r1.w
      frc r2.x, r1.w
      add r2.y, r1.w, -r2.x
      slt r1.w, r1.w, -r1.w
      slt r2.x, -r2.x, r2.x
      mad r3.y, r1.w, r2.x, r2.y
      mul r2.xy, r4, r3
      mad o9.xy, r2.zwzw, r4, r2
      mov o8.x, r1.y
    else
      mov o9.xy, c185.y
      mov o8.x, c185.y
    endif
    mov o0, r0
    mov o1.xy, r1.xzzw
    mov o5, r0
    mov o6, c165[a0.y]
    mov o10.x, c145[a0.y].x

// approximately 213 instruction slots used
#endif

const BYTE g_vs30_VS[] =
{
      0,   3, 254, 255, 254, 255, 
    132,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 219,   1, 
      0,   0,   0,   3, 254, 255, 
      9,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
    212,   1,   0,   0, 208,   0, 
      0,   0,   2,   0, 104,   0, 
     20,   0, 162,   1, 220,   0, 
      0,   0,   0,   0,   0,   0, 
    236,   0,   0,   0,   2,   0, 
    125,   0,  20,   0, 246,   1, 
      8,   1,   0,   0,   0,   0, 
      0,   0,  24,   1,   0,   0, 
      2,   0, 124,   0,   1,   0, 
    242,   1,  44,   1,   0,   0, 
      0,   0,   0,   0,  60,   1, 
      0,   0,   2,   0, 145,   0, 
     20,   0,  70,   2,  84,   1, 
      0,   0,   0,   0,   0,   0, 
    100,   1,   0,   0,   2,   0, 
    165,   0,  20,   0, 150,   2, 
    112,   1,   0,   0,   0,   0, 
      0,   0, 128,   1,   0,   0, 
      2,   0,  84,   0,  20,   0, 
     82,   1, 132,   1,   0,   0, 
      0,   0,   0,   0, 148,   1, 
      0,   0,   2,   0,   0,   0, 
      4,   0,   2,   0, 160,   1, 
      0,   0,   0,   0,   0,   0, 
    176,   1,   0,   0,   2,   0, 
      4,   0,  80,   0,  18,   0, 
    184,   1,   0,   0,   0,   0, 
      0,   0, 200,   1,   0,   0, 
      2,   0, 188,   0,   1,   0, 
    242,   2,  44,   1,   0,   0, 
      0,   0,   0,   0, 102,  65, 
    108, 112, 104,  97,  85,  86, 
      0, 171, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
     20,   0,   0,   0,   0,   0, 
      0,   0, 102,  70, 108, 105, 
    112,  98, 111, 111, 107,  73, 
    110, 100, 101, 120,  65, 110, 
    100,  78, 101, 120, 116,  82, 
     97, 116, 101,   0, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,  20,   0,   0,   0, 
      0,   0,   0,   0, 102,  70, 
    108, 105, 112,  98, 111, 111, 
    107,  80,  97, 114,  97, 109, 
    101, 116, 101, 114,   0, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 102,  77, 
    111, 100, 101, 108,  65, 108, 
    112, 104,  97,  84, 104, 114, 
    101, 115, 104, 111, 108, 100, 
      0, 171, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
     20,   0,   0,   0,   0,   0, 
      0,   0, 102,  77, 111, 100, 
    101, 108,  67, 111, 108, 111, 
    114,   0,   1,   0,   3,   0, 
      1,   0,   4,   0,  20,   0, 
      0,   0,   0,   0,   0,   0, 
    102,  85,  86,   0,   1,   0, 
      3,   0,   1,   0,   4,   0, 
     20,   0,   0,   0,   0,   0, 
      0,   0, 109,  67,  97, 109, 
    101, 114,  97,  80, 114, 111, 
    106,   0,   3,   0,   3,   0, 
      4,   0,   4,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    109,  77, 111, 100, 101, 108, 
      0, 171,   3,   0,   3,   0, 
      4,   0,   4,   0,  20,   0, 
      0,   0,   0,   0,   0,   0, 
    109,  85,  86,  73, 110, 118, 
    101, 114, 115, 101, 100,   0, 
    118, 115,  95,  51,  95,  48, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     57,  46,  50,  57,  46,  57, 
     53,  50,  46,  51,  49,  49, 
     49,   0,  81,   0,   0,   5, 
    185,   0,  15, 160,   0,   0, 
    128,  64,   0,   0,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128, 191,  81,   0,   0,   5, 
    186,   0,  15, 160,   0,   0, 
      0, 192,   0,   0, 128,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
     15, 144,  31,   0,   0,   2, 
      3,   0,   0, 128,   1,   0, 
     15, 144,  31,   0,   0,   2, 
      3,   0,   1, 128,   2,   0, 
     15, 144,  31,   0,   0,   2, 
      3,   0,   2, 128,   3,   0, 
     15, 144,  31,   0,   0,   2, 
      5,   0,   0, 128,   4,   0, 
     15, 144,  31,   0,   0,   2, 
      2,   0,   0, 128,   5,   0, 
     15, 144,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
     15, 224,  31,   0,   0,   2, 
      5,   0,   0, 128,   1,   0, 
      3, 224,  31,   0,   0,   2, 
      5,   0,   1, 128,   2,   0, 
     15, 224,  31,   0,   0,   2, 
      5,   0,   2, 128,   3,   0, 
     15, 224,  31,   0,   0,   2, 
      5,   0,   3, 128,   4,   0, 
     15, 224,  31,   0,   0,   2, 
      5,   0,   4, 128,   5,   0, 
     15, 224,  31,   0,   0,   2, 
     10,   0,   0, 128,   6,   0, 
     15, 224,  31,   0,   0,   2, 
      5,   0,   5, 128,   7,   0, 
      3, 224,  31,   0,   0,   2, 
      5,   0,   6, 128,   8,   0, 
      1, 224,  31,   0,   0,   2, 
      5,   0,   7, 128,   9,   0, 
      3, 224,  31,   0,   0,   2, 
      5,   0,   8, 128,  10,   0, 
      1, 224,   5,   0,   0,   3, 
      0,   0,   1, 128, 185,   0, 
      0, 160,   5,   0,   0, 144, 
     46,   0,   0,   2,   0,   0, 
      1, 176,   0,   0,   0, 128, 
     46,   0,   0,   2,   0,   0, 
      2, 176,   5,   0,   0, 144, 
      1,   0,   0,   2,   0,   0, 
      7, 128,   0,   0, 228, 144, 
      2,   0,   0,   3,   1,   0, 
      7, 128,   0,   0, 228, 128, 
      1,   0, 228, 144,   2,   0, 
      0,   3,   2,   0,   7, 128, 
      0,   0, 228, 128,   2,   0, 
    228, 144,   2,   0,   0,   3, 
      0,   0,   7, 128,   0,   0, 
    228, 128,   3,   0, 228, 144, 
      5,   0,   0,   4,   3,   0, 
     15, 128,   0,   0,  85, 144, 
      5,  32, 228, 160,   0,   0, 
      0, 176,   4,   0,   0,   5, 
      3,   0,  15, 128,   4,  32, 
    228, 160,   0,   0,   0, 176, 
      0,   0,   0, 144,   3,   0, 
    228, 128,   4,   0,   0,   5, 
      3,   0,  15, 128,   6,  32, 
    228, 160,   0,   0,   0, 176, 
      0,   0, 170, 144,   3,   0, 
    228, 128,   2,   0,   0,   4, 
      3,   0,  15, 128,   3,   0, 
    228, 128,   7,  32, 228, 160, 
      0,   0,   0, 176,   5,   0, 
      0,   4,   4,   0,  15, 128, 
      1,   0,  85, 128,   5,  32, 
    228, 160,   0,   0,   0, 176, 
      4,   0,   0,   5,   4,   0, 
     15, 128,   4,  32, 228, 160, 
      0,   0,   0, 176,   1,   0, 
      0, 128,   4,   0, 228, 128, 
      4,   0,   0,   5,   1,   0, 
     15, 128,   6,  32, 228, 160, 
      0,   0,   0, 176,   1,   0, 
    170, 128,   4,   0, 228, 128, 
      2,   0,   0,   4,   1,   0, 
     15, 128,   1,   0, 228, 128, 
      7,  32, 228, 160,   0,   0, 
      0, 176,   5,   0,   0,   4, 
      4,   0,  15, 128,   2,   0, 
     85, 128,   5,  32, 228, 160, 
      0,   0,   0, 176,   4,   0, 
      0,   5,   4,   0,  15, 128, 
      4,  32, 228, 160,   0,   0, 
      0, 176,   2,   0,   0, 128, 
      4,   0, 228, 128,   4,   0, 
      0,   5,   2,   0,  15, 128, 
      6,  32, 228, 160,   0,   0, 
      0, 176,   2,   0, 170, 128, 
      4,   0, 228, 128,   2,   0, 
      0,   4,   2,   0,  15, 128, 
      2,   0, 228, 128,   7,  32, 
    228, 160,   0,   0,   0, 176, 
      5,   0,   0,   4,   4,   0, 
     15, 128,   0,   0,  85, 128, 
      5,  32, 228, 160,   0,   0, 
      0, 176,   4,   0,   0,   5, 
      4,   0,  15, 128,   4,  32, 
    228, 160,   0,   0,   0, 176, 
      0,   0,   0, 128,   4,   0, 
    228, 128,   4,   0,   0,   5, 
      0,   0,  15, 128,   6,  32, 
    228, 160,   0,   0,   0, 176, 
      0,   0, 170, 128,   4,   0, 
    228, 128,   2,   0,   0,   4, 
      0,   0,  15, 128,   0,   0, 
    228, 128,   7,  32, 228, 160, 
      0,   0,   0, 176,   2,   0, 
      0,   3,   4,   0,  15, 128, 
      3,   0, 228, 129,   1,   0, 
    228, 128,   9,   0,   0,   3, 
      4,   0,   1, 128,   4,   0, 
    228, 128,   4,   0, 228, 128, 
      7,   0,   0,   2,   4,   0, 
      1, 128,   4,   0,   0, 128, 
     18,   0,   0,   4,   5,   0, 
     15, 128,   4,   0,   0, 128, 
      1,   0, 228, 128,   3,   0, 
    228, 128,   2,   0,   0,   3, 
      1,   0,  15, 128,   3,   0, 
    228, 129,   2,   0, 228, 128, 
      9,   0,   0,   3,   1,   0, 
      1, 128,   1,   0, 228, 128, 
      1,   0, 228, 128,   7,   0, 
      0,   2,   1,   0,   1, 128, 
      1,   0,   0, 128,  18,   0, 
      0,   4,   4,   0,  15, 128, 
      1,   0,   0, 128,   2,   0, 
    228, 128,   3,   0, 228, 128, 
      2,   0,   0,   3,   1,   0, 
     15, 128,   3,   0, 228, 129, 
      0,   0, 228, 128,   9,   0, 
      0,   3,   1,   0,   1, 128, 
      1,   0, 228, 128,   1,   0, 
    228, 128,   7,   0,   0,   2, 
      1,   0,   1, 128,   1,   0, 
      0, 128,  18,   0,   0,   4, 
      2,   0,  15, 128,   1,   0, 
      0, 128,   0,   0, 228, 128, 
      3,   0, 228, 128,   5,   0, 
      0,   3,   0,   0,  15, 128, 
      3,   0,  85, 128,   1,   0, 
    228, 160,   4,   0,   0,   4, 
      0,   0,  15, 128,   0,   0, 
    228, 160,   3,   0,   0, 128, 
      0,   0, 228, 128,   4,   0, 
      0,   4,   0,   0,  15, 128, 
      2,   0, 228, 160,   3,   0, 
    170, 128,   0,   0, 228, 128, 
      4,   0,   0,   4,   0,   0, 
     15, 128,   3,   0, 228, 160, 
      3,   0, 255, 128,   0,   0, 
    228, 128,   4,   0,   0,   6, 
      1,   0,   3, 128,   4,   0, 
    228, 144,  84,  32, 238, 160, 
      0,   0,  85, 176,  84,  32, 
    228, 160,   0,   0,  85, 176, 
      4,   0,   0,   6,   7,   0, 
      1, 224,   4,   0,   0, 144, 
    104,  32, 170, 160,   0,   0, 
     85, 176, 104,  32,   0, 160, 
      0,   0,  85, 176,   4,   0, 
      0,   6,   1,   0,   8, 128, 
      4,   0,  85, 144, 104,  32, 
    255, 160,   0,   0,  85, 176, 
    104,  32,  85, 160,   0,   0, 
     85, 176,   5,   0,   0,   3, 
      3,   0,  15, 128,   5,   0, 
     85, 128,   1,   0, 228, 160, 
      4,   0,   0,   4,   3,   0, 
     15, 128,   0,   0, 228, 160, 
      5,   0,   0, 128,   3,   0, 
    228, 128,   4,   0,   0,   4, 
      3,   0,  15, 128,   2,   0, 
    228, 160,   5,   0, 170, 128, 
      3,   0, 228, 128,   4,   0, 
      0,   4,   2,   0,  15, 224, 
      3,   0, 228, 160,   5,   0, 
    255, 128,   3,   0, 228, 128, 
      5,   0,   0,   3,   3,   0, 
     15, 128,   4,   0,  85, 128, 
      1,   0, 228, 160,   4,   0, 
      0,   4,   3,   0,  15, 128, 
      0,   0, 228, 160,   4,   0, 
      0, 128,   3,   0, 228, 128, 
      4,   0,   0,   4,   3,   0, 
     15, 128,   2,   0, 228, 160, 
      4,   0, 170, 128,   3,   0, 
    228, 128,   4,   0,   0,   4, 
      3,   0,  15, 224,   3,   0, 
    228, 160,   4,   0, 255, 128, 
      3,   0, 228, 128,   5,   0, 
      0,   3,   3,   0,  15, 128, 
      2,   0,  85, 128,   1,   0, 
    228, 160,   4,   0,   0,   4, 
      3,   0,  15, 128,   0,   0, 
    228, 160,   2,   0,   0, 128, 
      3,   0, 228, 128,   4,   0, 
      0,   4,   3,   0,  15, 128, 
      2,   0, 228, 160,   2,   0, 
    170, 128,   3,   0, 228, 128, 
      4,   0,   0,   4,   4,   0, 
     15, 224,   3,   0, 228, 160, 
      2,   0, 255, 128,   3,   0, 
    228, 128,   4,   0,   0,   4, 
      1,   0,   4, 128, 188,   0, 
     85, 160,   1,   0,  85, 128, 
    188,   0,   0, 160,   4,   0, 
      0,   4,   7,   0,   2, 224, 
    188,   0,  85, 160,   1,   0, 
    255, 128, 188,   0,   0, 160, 
      1,   0,   0,   2,   2,   0, 
     15, 128, 124,   0, 228, 160, 
     41,   0,   4,   2, 185,   0, 
     85, 160,   2,   0,   0, 128, 
     19,   0,   0,   3,   1,   0, 
      2, 128, 125,  32,   0, 160, 
      0,   0,  85, 176,   2,   0, 
      0,   4,   3,   0,   1, 128, 
      1,   0,  85, 129, 125,  32, 
      0, 160,   0,   0,  85, 176, 
      2,   0,   0,   3,   1,   0, 
      8, 128,   3,   0,   0, 128, 
    185,   0, 170, 160,   5,   0, 
      0,   3,   2,   0,   1, 128, 
    124,   0, 255, 160, 124,   0, 
    170, 160,  35,   0,   0,   2, 
      3,   0,   8, 128, 124,   0, 
     85, 160,  41,   0,   3,   2, 
      3,   0, 255, 129,   3,   0, 
    255, 128,  13,   0,   0,   3, 
      3,   0,   8, 128,   1,   0, 
    255, 128,   2,   0,   0, 128, 
      4,   0,   0,   4,   4,   0, 
      1, 128,   2,   0, 170, 128, 
      2,   0, 255, 128, 185,   0, 
    255, 160,   2,   0,   0,   3, 
      3,   0,   2, 128,   3,   0, 
      0, 128, 185,   0, 170, 160, 
     18,   0,   0,   4,   5,   0, 
      3, 128,   3,   0, 255, 128, 
      4,   0,   0, 128,   3,   0, 
    228, 128,  42,   0,   0,   0, 
      2,   0,   0,   3,   3,   0, 
      2, 128,   2,   0,  85, 128, 
    185,   0, 255, 160,  41,   0, 
      3,   2,   3,   0,  85, 140, 
      3,   0,  85, 139,   5,   0, 
      0,   3,   3,   0,   2, 128, 
      2,   0,   0, 128,   3,   0, 
      0, 128,  13,   0,   0,   3, 
      3,   0,   2, 128,   3,   0, 
     85, 128,   3,   0,  85, 129, 
     18,   0,   0,   4,   4,   0, 
      1, 128,   3,   0,  85, 128, 
      2,   0,   0, 128,   2,   0, 
      0, 129,   6,   0,   0,   2, 
      3,   0,   2, 128,   4,   0, 
      0, 128,   5,   0,   0,   3, 
      3,   0,   2, 128,   3,   0, 
     85, 128,   3,   0,   0, 128, 
     19,   0,   0,   2,   3,   0, 
      2, 128,   3,   0,  85, 128, 
      5,   0,   0,   3,   5,   0, 
      1, 128,   3,   0,  85, 128, 
      4,   0,   0, 128,   5,   0, 
      0,   3,   3,   0,   2, 128, 
      1,   0, 255, 128,   2,   0, 
      0, 128,  13,   0,   0,   3, 
      3,   0,   2, 128,   3,   0, 
     85, 128,   3,   0,  85, 129, 
     18,   0,   0,   4,   4,   0, 
      1, 128,   3,   0,  85, 128, 
      2,   0,   0, 128,   2,   0, 
      0, 129,   6,   0,   0,   2, 
      3,   0,   2, 128,   4,   0, 
      0, 128,   5,   0,   0,   3, 
      3,   0,   2, 128,   1,   0, 
    255, 128,   3,   0,  85, 128, 
     19,   0,   0,   2,   3,   0, 
      2, 128,   3,   0,  85, 128, 
      5,   0,   0,   3,   5,   0, 
      2, 128,   3,   0,  85, 128, 
      4,   0,   0, 128,  42,   0, 
      0,   0,   2,   0,   0,   3, 
      2,   0,   2, 128,   2,   0, 
     85, 128, 186,   0,   0, 160, 
      6,   0,   0,   2,   3,   0, 
      2, 128,   2,   0,   0, 128, 
      5,   0,   0,   3,   3,   0, 
      8, 128,   3,   0,  85, 128, 
      3,   0,   0, 128,  19,   0, 
      0,   2,   4,   0,   1, 128, 
      3,   0, 255, 128,   2,   0, 
      0,   3,   3,   0,   8, 128, 
      3,   0, 255, 128,   4,   0, 
      0, 129,   2,   0,   0,   3, 
      4,   0,   1, 128,   3,   0, 
    255, 128,   3,   0, 255, 128, 
     13,   0,   0,   3,   4,   0, 
      1, 128,   4,   0,   0, 128, 
      4,   0,   0, 129,   4,   0, 
      0,   4,   4,   0,   1, 128, 
      4,   0,   0, 128, 186,   0, 
     85, 160, 186,   0,   0, 160, 
      6,   0,   0,   2,   4,   0, 
      2, 128,   4,   0,   0, 128, 
      5,   0,   0,   3,   3,   0, 
      8, 128,   3,   0, 255, 128, 
      4,   0,  85, 128,  19,   0, 
      0,   2,   3,   0,   8, 128, 
      3,   0, 255, 128,   4,   0, 
      0,   4,   3,   0,   8, 128, 
      4,   0,   0, 128,   3,   0, 
    255, 128, 185,   0, 255, 160, 
     13,   0,   0,   3,   3,   0, 
      8, 128,   3,   0, 255, 140, 
      3,   0, 255, 139,   5,   0, 
      0,   3,   4,   0,   1, 128, 
      2,   0,   0, 128,   3,   0, 
      0, 128,  13,   0,   0,   3, 
      4,   0,   1, 128,   4,   0, 
      0, 128,   4,   0,   0, 129, 
     18,   0,   0,   4,   5,   0, 
      4, 128,   4,   0,   0, 128, 
      2,   0,   0, 128,   2,   0, 
      0, 129,   6,   0,   0,   2, 
      4,   0,   1, 128,   5,   0, 
    170, 128,   5,   0,   0,   3, 
      4,   0,   1, 128,   3,   0, 
      0, 128,   4,   0,   0, 128, 
     19,   0,   0,   2,   4,   0, 
      1, 128,   4,   0,   0, 128, 
      5,   0,   0,   3,   4,   0, 
      2, 128,   4,   0,   0, 128, 
      5,   0, 170, 128,   4,   0, 
      0,   4,   2,   0,   4, 128, 
      2,   0, 170, 128,   2,   0, 
    255, 128, 185,   0, 255, 160, 
     19,   0,   0,   2,   2,   0, 
      8, 128,   4,   0,  85, 128, 
      2,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 129, 
      4,   0,  85, 128,   2,   0, 
      0,   3,   2,   0,   8, 128, 
      2,   0, 255, 129,   2,   0, 
    170, 128,   4,   0,   0,   4, 
      2,   0,   8, 128,   5,   0, 
    170, 128,   4,   0,   0, 129, 
      2,   0, 255, 128,   4,   0, 
      0,   4,   4,   0,   1, 128, 
      3,   0, 255, 128,   2,   0, 
    255, 128,   4,   0,  85, 128, 
      5,   0,   0,   3,   2,   0, 
      8, 128,   1,   0, 255, 128, 
      3,   0,  85, 128,  19,   0, 
      0,   2,   3,   0,   2, 128, 
      2,   0, 255, 128,   2,   0, 
      0,   3,   2,   0,   8, 128, 
      2,   0, 255, 128,   3,   0, 
     85, 129,   2,   0,   0,   3, 
      3,   0,   2, 128,   2,   0, 
    255, 128,   2,   0, 255, 128, 
     13,   0,   0,   3,   3,   0, 
      2, 128,   3,   0,  85, 128, 
      3,   0,  85, 129,   4,   0, 
      0,   4,   3,   0,   2, 128, 
      3,   0,  85, 128, 186,   0, 
     85, 160, 186,   0,   0, 160, 
      6,   0,   0,   2,   3,   0, 
      8, 128,   3,   0,  85, 128, 
      5,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 128, 
      3,   0, 255, 128,  19,   0, 
      0,   2,   2,   0,   8, 128, 
      2,   0, 255, 128,   4,   0, 
      0,   4,   2,   0,   8, 128, 
      3,   0,  85, 128,   2,   0, 
    255, 128, 185,   0, 255, 160, 
     13,   0,   0,   3,   2,   0, 
     10, 128,   2,   0, 228, 140, 
      2,   0, 228, 139,   5,   0, 
      0,   3,   3,   0,   2, 128, 
      1,   0, 255, 128,   2,   0, 
      0, 128,  13,   0,   0,   3, 
      3,   0,   2, 128,   3,   0, 
     85, 128,   3,   0,  85, 129, 
     18,   0,   0,   4,   4,   0, 
      4, 128,   3,   0,  85, 128, 
      2,   0,   0, 128,   2,   0, 
      0, 129,   6,   0,   0,   2, 
      2,   0,   1, 128,   4,   0, 
    170, 128,   5,   0,   0,   3, 
      1,   0,   8, 128,   1,   0, 
    255, 128,   2,   0,   0, 128, 
     19,   0,   0,   2,   1,   0, 
      8, 128,   1,   0, 255, 128, 
      5,   0,   0,   3,   2,   0, 
      1, 128,   1,   0, 255, 128, 
      4,   0, 170, 128,  19,   0, 
      0,   2,   3,   0,   2, 128, 
      2,   0,   0, 128,   2,   0, 
      0,   3,   3,   0,   2, 128, 
      2,   0,   0, 128,   3,   0, 
     85, 129,   2,   0,   0,   3, 
      2,   0,   4, 128,   2,   0, 
    170, 128,   3,   0,  85, 129, 
      4,   0,   0,   4,   1,   0, 
      8, 128,   4,   0, 170, 128, 
      1,   0, 255, 129,   2,   0, 
    170, 128,   4,   0,   0,   4, 
      4,   0,   2, 128,   2,   0, 
    255, 128,   1,   0, 255, 128, 
      2,   0,   0, 128,   2,   0, 
      0,   3,   3,   0,   4, 128, 
      3,   0,   0, 128, 185,   0, 
    170, 160,  18,   0,   0,   4, 
      5,   0,   3, 128,   2,   0, 
     85, 128,   4,   0, 228, 128, 
      3,   0, 232, 128,  43,   0, 
      0,   0,  43,   0,   0,   0, 
     19,   0,   0,   2,   1,   0, 
      8, 128,   5,   0,   0, 128, 
      2,   0,   0,   3,   2,   0, 
      1, 128,   5,   0,   0, 128, 
      1,   0, 255, 129,  12,   0, 
      0,   3,   2,   0,   2, 128, 
      5,   0,   0, 128,   5,   0, 
      0, 129,  12,   0,   0,   3, 
      1,   0,   8, 128,   1,   0, 
    255, 129,   1,   0, 255, 128, 
      4,   0,   0,   4,   1,   0, 
      8, 128,   2,   0,  85, 128, 
      1,   0, 255, 128,   2,   0, 
      0, 128,  19,   0,   0,   2, 
      2,   0,   1, 128, 124,   0, 
    170, 160,   2,   0,   0,   3, 
      2,   0,   2, 128,   2,   0, 
      0, 129, 124,   0, 170, 160, 
     12,   0,   0,   3,   2,   0, 
      4, 128, 124,   0, 170, 160, 
    124,   0, 170, 161,  12,   0, 
      0,   3,   2,   0,   1, 128, 
      2,   0,   0, 129,   2,   0, 
      0, 128,   4,   0,   0,   4, 
      2,   0,   1, 128,   2,   0, 
    170, 128,   2,   0,   0, 128, 
      2,   0,  85, 128,   5,   0, 
      0,   3,   2,   0,   2, 128, 
      1,   0, 255, 128,   2,   0, 
      0, 128,  13,   0,   0,   3, 
      2,   0,   2, 128,   2,   0, 
     85, 128,   2,   0,  85, 129, 
     18,   0,   0,   4,   3,   0, 
      1, 128,   2,   0,  85, 128, 
      2,   0,   0, 128,   2,   0, 
      0, 129,   6,   0,   0,   2, 
      2,   0,   2, 128,   3,   0, 
      0, 128,   5,   0,   0,   3, 
      2,   0,   2, 128,   1,   0, 
    255, 128,   2,   0,  85, 128, 
     19,   0,   0,   2,   2,   0, 
      2, 128,   2,   0,  85, 128, 
      5,   0,   0,   3,   2,   0, 
      2, 128,   2,   0,  85, 128, 
      3,   0,   0, 128,  19,   0, 
      0,   2,   2,   0,   4, 128, 
      2,   0,  85, 128,   2,   0, 
      0,   3,   2,   0,   8, 128, 
      2,   0,  85, 128,   2,   0, 
    170, 129,  12,   0,   0,   3, 
      2,   0,   2, 128,   2,   0, 
     85, 128,   2,   0,  85, 129, 
     12,   0,   0,   3,   2,   0, 
      4, 128,   2,   0, 170, 129, 
      2,   0, 170, 128,   4,   0, 
      0,   4,   3,   0,   1, 128, 
      2,   0,  85, 128,   2,   0, 
    170, 128,   2,   0, 255, 128, 
      6,   0,   0,   2,   2,   0, 
      2, 128,   2,   0,   0, 128, 
      5,   0,   0,   3,   1,   0, 
      8, 128,   1,   0, 255, 128, 
      2,   0,  85, 128,  19,   0, 
      0,   2,   2,   0,   4, 128, 
      1,   0, 255, 128,   2,   0, 
      0,   3,   2,   0,   8, 128, 
      1,   0, 255, 128,   2,   0, 
    170, 129,  12,   0,   0,   3, 
      1,   0,   8, 128,   1,   0, 
    255, 128,   1,   0, 255, 129, 
     12,   0,   0,   3,   2,   0, 
      4, 128,   2,   0, 170, 129, 
      2,   0, 170, 128,   4,   0, 
      0,   4,   3,   0,   2, 128, 
      1,   0, 255, 128,   2,   0, 
    170, 128,   2,   0, 255, 128, 
      6,   0,   0,   2,   4,   0, 
      1, 128, 124,   0, 170, 160, 
      6,   0,   0,   2,   4,   0, 
      2, 128, 124,   0, 255, 160, 
      4,   0,   0,   4,   2,   0, 
     12, 128,   3,   0,  68, 128, 
      4,   0,  68, 129,   1,   0, 
    132, 128,   5,   0,   0,   3, 
      2,   0,  12, 128,   2,   0, 
    228, 128, 124,   0, 228, 160, 
     19,   0,   0,   2,   1,   0, 
      8, 128,   5,   0,  85, 128, 
      2,   0,   0,   3,   3,   0, 
      1, 128,   5,   0,  85, 128, 
      1,   0, 255, 129,  12,   0, 
      0,   3,   3,   0,   2, 128, 
      5,   0,  85, 128,   5,   0, 
     85, 129,  12,   0,   0,   3, 
      1,   0,   8, 128,   1,   0, 
    255, 129,   1,   0, 255, 128, 
      4,   0,   0,   4,   1,   0, 
      8, 128,   3,   0,  85, 128, 
      1,   0, 255, 128,   3,   0, 
      0, 128,   5,   0,   0,   3, 
      3,   0,   1, 128,   2,   0, 
      0, 128,   1,   0, 255, 128, 
     13,   0,   0,   3,   3,   0, 
      1, 128,   3,   0,   0, 128, 
      3,   0,   0, 129,  18,   0, 
      0,   4,   4,   0,   4, 128, 
      3,   0,   0, 128,   2,   0, 
      0, 128,   2,   0,   0, 129, 
      6,   0,   0,   2,   2,   0, 
      1, 128,   4,   0, 170, 128, 
      5,   0,   0,   3,   2,   0, 
      1, 128,   1,   0, 255, 128, 
      2,   0,   0, 128,  19,   0, 
      0,   2,   2,   0,   1, 128, 
      2,   0,   0, 128,   5,   0, 
      0,   3,   2,   0,   1, 128, 
      2,   0,   0, 128,   4,   0, 
    170, 128,  19,   0,   0,   2, 
      3,   0,   1, 128,   2,   0, 
      0, 128,   2,   0,   0,   3, 
      3,   0,   2, 128,   2,   0, 
      0, 128,   3,   0,   0, 129, 
     12,   0,   0,   3,   2,   0, 
      1, 128,   2,   0,   0, 128, 
      2,   0,   0, 129,  12,   0, 
      0,   3,   3,   0,   1, 128, 
      3,   0,   0, 129,   3,   0, 
      0, 128,   4,   0,   0,   4, 
      3,   0,   1, 128,   2,   0, 
      0, 128,   3,   0,   0, 128, 
      3,   0,  85, 128,   5,   0, 
      0,   3,   1,   0,   8, 128, 
      2,   0,  85, 128,   1,   0, 
    255, 128,  19,   0,   0,   2, 
      2,   0,   1, 128,   1,   0, 
    255, 128,   2,   0,   0,   3, 
      2,   0,   2, 128,   1,   0, 
    255, 128,   2,   0,   0, 129, 
     12,   0,   0,   3,   1,   0, 
      8, 128,   1,   0, 255, 128, 
      1,   0, 255, 129,  12,   0, 
      0,   3,   2,   0,   1, 128, 
      2,   0,   0, 129,   2,   0, 
      0, 128,   4,   0,   0,   4, 
      3,   0,   2, 128,   1,   0, 
    255, 128,   2,   0,   0, 128, 
      2,   0,  85, 128,   5,   0, 
      0,   3,   2,   0,   3, 128, 
      4,   0, 228, 128,   3,   0, 
    228, 128,   4,   0,   0,   4, 
      9,   0,   3, 224,   2,   0, 
    238, 128,   4,   0, 228, 128, 
      2,   0, 228, 128,   1,   0, 
      0,   2,   8,   0,   1, 224, 
      1,   0,  85, 128,  42,   0, 
      0,   0,   1,   0,   0,   2, 
      9,   0,   3, 224, 185,   0, 
     85, 160,   1,   0,   0,   2, 
      8,   0,   1, 224, 185,   0, 
     85, 160,  43,   0,   0,   0, 
      1,   0,   0,   2,   0,   0, 
     15, 224,   0,   0, 228, 128, 
      1,   0,   0,   2,   1,   0, 
      3, 224,   1,   0, 232, 128, 
      1,   0,   0,   2,   5,   0, 
     15, 224,   0,   0, 228, 128, 
      1,   0,   0,   3,   6,   0, 
     15, 224, 165,  32, 228, 160, 
      0,   0,  85, 176,   1,   0, 
      0,   3,  10,   0,   1, 224, 
    145,  32,   0, 160,   0,   0, 
     85, 176, 255, 255,   0,   0
};
