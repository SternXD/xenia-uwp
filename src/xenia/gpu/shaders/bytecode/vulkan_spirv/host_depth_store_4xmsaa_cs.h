// Generated with `xb buildshaders`.
#if 0
; SPIR-V
; Version: 1.0
; Generator: Khronos Glslang Reference Front End; 10
; Bound: 24815
; Schema: 0
               OpCapability Shader
          %1 = OpExtInstImport "GLSL.std.450"
               OpMemoryModel Logical GLSL450
               OpEntryPoint GLCompute %5663 "main" %gl_GlobalInvocationID
               OpExecutionMode %5663 LocalSize 8 8 1
               OpMemberDecorate %_struct_990 0 Offset 0
               OpMemberDecorate %_struct_990 1 Offset 4
               OpDecorate %_struct_990 Block
               OpDecorate %gl_GlobalInvocationID BuiltIn GlobalInvocationId
               OpDecorate %_runtimearr_v4uint ArrayStride 16
               OpMemberDecorate %_struct_1972 0 NonReadable
               OpMemberDecorate %_struct_1972 0 Offset 0
               OpDecorate %_struct_1972 BufferBlock
               OpDecorate %4790 DescriptorSet 0
               OpDecorate %4790 Binding 0
               OpDecorate %3709 DescriptorSet 1
               OpDecorate %3709 Binding 0
               OpDecorate %gl_WorkGroupSize BuiltIn WorkgroupSize
       %void = OpTypeVoid
       %1282 = OpTypeFunction %void
       %uint = OpTypeInt 32 0
     %v2uint = OpTypeVector %uint 2
       %bool = OpTypeBool
     %uint_2 = OpConstant %uint 2
     %uint_1 = OpConstant %uint 1
       %1837 = OpConstantComposite %v2uint %uint_2 %uint_1
     %v2bool = OpTypeVector %bool 2
     %uint_0 = OpConstant %uint 0
       %1807 = OpConstantComposite %v2uint %uint_0 %uint_0
       %1828 = OpConstantComposite %v2uint %uint_1 %uint_1
       %1816 = OpConstantComposite %v2uint %uint_1 %uint_0
    %uint_80 = OpConstant %uint 80
    %uint_16 = OpConstant %uint 16
       %2719 = OpConstantComposite %v2uint %uint_80 %uint_16
        %int = OpTypeInt 32 1
    %uint_10 = OpConstant %uint 10
       %1927 = OpConstantComposite %v2uint %uint_0 %uint_10
  %uint_1023 = OpConstant %uint 1023
     %uint_3 = OpConstant %uint 3
    %uint_20 = OpConstant %uint 20
    %uint_13 = OpConstant %uint 13
       %2053 = OpConstantComposite %v2uint %uint_10 %uint_13
     %uint_7 = OpConstant %uint 7
%_struct_990 = OpTypeStruct %uint %uint
%_ptr_PushConstant__struct_990 = OpTypePointer PushConstant %_struct_990
       %4495 = OpVariable %_ptr_PushConstant__struct_990 PushConstant
      %int_0 = OpConstant %int 0
%_ptr_PushConstant_uint = OpTypePointer PushConstant %uint
      %int_1 = OpConstant %int 1
     %v3uint = OpTypeVector %uint 3
%_ptr_Input_v3uint = OpTypePointer Input %v3uint
%gl_GlobalInvocationID = OpVariable %_ptr_Input_v3uint Input
%_ptr_Input_uint = OpTypePointer Input %uint
      %v2int = OpTypeVector %int 2
     %v4uint = OpTypeVector %uint 4
%_runtimearr_v4uint = OpTypeRuntimeArray %v4uint
%_struct_1972 = OpTypeStruct %_runtimearr_v4uint
%_ptr_Uniform__struct_1972 = OpTypePointer Uniform %_struct_1972
       %4790 = OpVariable %_ptr_Uniform__struct_1972 Uniform
      %float = OpTypeFloat 32
        %182 = OpTypeImage %float 2D 0 0 1 1 Unknown
%_ptr_UniformConstant_182 = OpTypePointer UniformConstant %182
       %3709 = OpVariable %_ptr_UniformConstant_182 UniformConstant
    %v4float = OpTypeVector %float 4
       %1824 = OpConstantComposite %v2int %int_1 %int_0
%_ptr_Uniform_v4uint = OpTypePointer Uniform %v4uint
      %int_2 = OpConstant %int 2
       %1833 = OpConstantComposite %v2int %int_2 %int_0
      %int_3 = OpConstant %int 3
       %1842 = OpConstantComposite %v2int %int_3 %int_0
     %uint_8 = OpConstant %uint 8
%gl_WorkGroupSize = OpConstantComposite %v3uint %uint_8 %uint_8 %uint_1
       %1954 = OpConstantComposite %v2uint %uint_7 %uint_7
       %2213 = OpConstantComposite %v2uint %uint_1023 %uint_1023
       %1870 = OpConstantComposite %v2uint %uint_3 %uint_3
       %5663 = OpFunction %void None %1282
      %15110 = OpLabel
               OpSelectionMerge %19578 None
               OpSwitch %uint_0 %11880
      %11880 = OpLabel
      %22245 = OpAccessChain %_ptr_PushConstant_uint %4495 %int_0
      %15627 = OpLoad %uint %22245
      %20439 = OpAccessChain %_ptr_PushConstant_uint %4495 %int_1
      %22340 = OpLoad %uint %20439
      %10293 = OpCompositeConstruct %v2uint %22340 %22340
      %24330 = OpShiftRightLogical %v2uint %10293 %2053
       %6551 = OpBitwiseAnd %v2uint %24330 %1954
      %21183 = OpAccessChain %_ptr_Input_uint %gl_GlobalInvocationID %uint_0
      %23517 = OpLoad %uint %21183
      %23384 = OpShiftRightLogical %uint %23517 %uint_1
       %7355 = OpShiftRightLogical %uint %15627 %uint_20
      %16946 = OpBitwiseAnd %uint %7355 %uint_1023
       %8846 = OpIAdd %uint %16946 %uint_1
      %11841 = OpCompositeExtract %uint %6551 0
      %17907 = OpIMul %uint %8846 %11841
       %7287 = OpUGreaterThanEqual %bool %23384 %17907
               OpSelectionMerge %16345 DontFlatten
               OpBranchConditional %7287 %21992 %16345
      %21992 = OpLabel
               OpBranch %19578
      %16345 = OpLabel
      %10771 = OpCompositeConstruct %v2uint %15627 %15627
      %13581 = OpShiftRightLogical %v2uint %10771 %1927
      %23379 = OpBitwiseAnd %v2uint %13581 %2213
      %16245 = OpShiftLeftLogical %v2uint %23379 %1870
      %20127 = OpIMul %v2uint %16245 %6551
      %19539 = OpShiftLeftLogical %uint %23517 %uint_2
      %17126 = OpAccessChain %_ptr_Input_uint %gl_GlobalInvocationID %uint_1
      %22160 = OpLoad %uint %17126
      %22686 = OpShiftRightLogical %uint %22160 %uint_1
       %6471 = OpCompositeConstruct %v2uint %19539 %22686
       %8058 = OpIAdd %v2uint %20127 %6471
       %8432 = OpBitcast %v2int %8058
       %7291 = OpBitcast %v2uint %8432
      %22610 = OpShiftLeftLogical %v2uint %7291 %1828
       %8742 = OpLoad %v3uint %gl_GlobalInvocationID
      %16994 = OpVectorShuffle %v2uint %8742 %8742 0 1
      %24648 = OpBitwiseAnd %v2uint %16994 %1828
      %15693 = OpBitwiseOr %v2uint %22610 %24648
      %23331 = OpBitwiseAnd %uint %22340 %uint_1023
      %17642 = OpUGreaterThanEqual %v2bool %1807 %1837
      %17737 = OpSelect %v2uint %17642 %1828 %1807
      %10430 = OpShiftLeftLogical %v2uint %15693 %17737
      %16475 = OpShiftRightLogical %v2uint %1807 %1816
      %13071 = OpBitwiseAnd %v2uint %16475 %1828
      %20272 = OpIAdd %v2uint %10430 %13071
      %21145 = OpIMul %v2uint %2719 %6551
      %14725 = OpShiftRightLogical %v2uint %21145 %1807
      %19799 = OpUDiv %v2uint %20272 %14725
      %20390 = OpCompositeExtract %uint %19799 1
      %11046 = OpIMul %uint %20390 %23331
      %24741 = OpCompositeExtract %uint %19799 0
      %20806 = OpIAdd %uint %11046 %24741
      %13527 = OpIMul %v2uint %19799 %14725
      %20715 = OpISub %v2uint %20272 %13527
       %7303 = OpCompositeExtract %uint %21145 0
      %22882 = OpCompositeExtract %uint %21145 1
      %13170 = OpIMul %uint %7303 %22882
      %14551 = OpIMul %uint %20806 %13170
       %6805 = OpCompositeExtract %uint %20715 1
      %23526 = OpCompositeExtract %uint %14725 0
      %22886 = OpIMul %uint %6805 %23526
       %6886 = OpCompositeExtract %uint %20715 0
       %9696 = OpIAdd %uint %22886 %6886
      %19199 = OpShiftLeftLogical %uint %9696 %uint_0
       %8815 = OpIAdd %uint %14551 %19199
      %22761 = OpShiftRightLogical %uint %8815 %uint_2
      %10583 = OpBitwiseAnd %uint %22160 %uint_1
      %16337 = OpShiftLeftLogical %uint %10583 %uint_1
      %21075 = OpBitcast %int %16337
       %8163 = OpIAdd %int %21075 %int_1
      %22164 = OpLoad %182 %3709
       %9165 = OpImageFetch %v4float %22164 %8432 Sample %21075
      %17307 = OpCompositeExtract %float %9165 0
       %6654 = OpImageFetch %v4float %22164 %8432 Sample %8163
      %15080 = OpCompositeExtract %float %6654 0
      %19035 = OpIAdd %v2int %8432 %1824
      %20275 = OpImageFetch %v4float %22164 %19035 Sample %21075
      %22915 = OpCompositeExtract %float %20275 0
      %24813 = OpImageFetch %v4float %22164 %19035 Sample %8163
      %23935 = OpCompositeExtract %float %24813 0
       %6487 = OpCompositeConstruct %v4float %17307 %15080 %22915 %23935
      %20366 = OpBitcast %v4uint %6487
      %12860 = OpAccessChain %_ptr_Uniform_v4uint %4790 %int_0 %22761
               OpStore %12860 %20366
      %20256 = OpIAdd %uint %22761 %uint_1
       %8574 = OpIAdd %v2int %8432 %1833
      %10053 = OpImageFetch %v4float %22164 %8574 Sample %21075
      %22916 = OpCompositeExtract %float %10053 0
       %6655 = OpImageFetch %v4float %22164 %8574 Sample %8163
      %15081 = OpCompositeExtract %float %6655 0
      %19036 = OpIAdd %v2int %8432 %1842
      %20276 = OpImageFetch %v4float %22164 %19036 Sample %21075
      %22917 = OpCompositeExtract %float %20276 0
      %24814 = OpImageFetch %v4float %22164 %19036 Sample %8163
      %23936 = OpCompositeExtract %float %24814 0
       %6488 = OpCompositeConstruct %v4float %22916 %15081 %22917 %23936
      %20367 = OpBitcast %v4uint %6488
      %15159 = OpAccessChain %_ptr_Uniform_v4uint %4790 %int_0 %20256
               OpStore %15159 %20367
               OpBranch %19578
      %19578 = OpLabel
               OpReturn
               OpFunctionEnd
#endif

const uint32_t host_depth_store_4xmsaa_cs[] = {
    0x07230203, 0x00010000, 0x0008000A, 0x000060EF, 0x00000000, 0x00020011,
    0x00000001, 0x0006000B, 0x00000001, 0x4C534C47, 0x6474732E, 0x3035342E,
    0x00000000, 0x0003000E, 0x00000000, 0x00000001, 0x0006000F, 0x00000005,
    0x0000161F, 0x6E69616D, 0x00000000, 0x00000F48, 0x00060010, 0x0000161F,
    0x00000011, 0x00000008, 0x00000008, 0x00000001, 0x00050048, 0x000003DE,
    0x00000000, 0x00000023, 0x00000000, 0x00050048, 0x000003DE, 0x00000001,
    0x00000023, 0x00000004, 0x00030047, 0x000003DE, 0x00000002, 0x00040047,
    0x00000F48, 0x0000000B, 0x0000001C, 0x00040047, 0x000007DC, 0x00000006,
    0x00000010, 0x00040048, 0x000007B4, 0x00000000, 0x00000019, 0x00050048,
    0x000007B4, 0x00000000, 0x00000023, 0x00000000, 0x00030047, 0x000007B4,
    0x00000003, 0x00040047, 0x000012B6, 0x00000022, 0x00000000, 0x00040047,
    0x000012B6, 0x00000021, 0x00000000, 0x00040047, 0x00000E7D, 0x00000022,
    0x00000001, 0x00040047, 0x00000E7D, 0x00000021, 0x00000000, 0x00040047,
    0x00000AC7, 0x0000000B, 0x00000019, 0x00020013, 0x00000008, 0x00030021,
    0x00000502, 0x00000008, 0x00040015, 0x0000000B, 0x00000020, 0x00000000,
    0x00040017, 0x00000011, 0x0000000B, 0x00000002, 0x00020014, 0x00000009,
    0x0004002B, 0x0000000B, 0x00000A10, 0x00000002, 0x0004002B, 0x0000000B,
    0x00000A0D, 0x00000001, 0x0005002C, 0x00000011, 0x0000072D, 0x00000A10,
    0x00000A0D, 0x00040017, 0x0000000F, 0x00000009, 0x00000002, 0x0004002B,
    0x0000000B, 0x00000A0A, 0x00000000, 0x0005002C, 0x00000011, 0x0000070F,
    0x00000A0A, 0x00000A0A, 0x0005002C, 0x00000011, 0x00000724, 0x00000A0D,
    0x00000A0D, 0x0005002C, 0x00000011, 0x00000718, 0x00000A0D, 0x00000A0A,
    0x0004002B, 0x0000000B, 0x00000AFA, 0x00000050, 0x0004002B, 0x0000000B,
    0x00000A3A, 0x00000010, 0x0005002C, 0x00000011, 0x00000A9F, 0x00000AFA,
    0x00000A3A, 0x00040015, 0x0000000C, 0x00000020, 0x00000001, 0x0004002B,
    0x0000000B, 0x00000A28, 0x0000000A, 0x0005002C, 0x00000011, 0x00000787,
    0x00000A0A, 0x00000A28, 0x0004002B, 0x0000000B, 0x00000A44, 0x000003FF,
    0x0004002B, 0x0000000B, 0x00000A13, 0x00000003, 0x0004002B, 0x0000000B,
    0x00000A46, 0x00000014, 0x0004002B, 0x0000000B, 0x00000A31, 0x0000000D,
    0x0005002C, 0x00000011, 0x00000805, 0x00000A28, 0x00000A31, 0x0004002B,
    0x0000000B, 0x00000A1F, 0x00000007, 0x0004001E, 0x000003DE, 0x0000000B,
    0x0000000B, 0x00040020, 0x0000065B, 0x00000009, 0x000003DE, 0x0004003B,
    0x0000065B, 0x0000118F, 0x00000009, 0x0004002B, 0x0000000C, 0x00000A0B,
    0x00000000, 0x00040020, 0x00000288, 0x00000009, 0x0000000B, 0x0004002B,
    0x0000000C, 0x00000A0E, 0x00000001, 0x00040017, 0x00000014, 0x0000000B,
    0x00000003, 0x00040020, 0x00000291, 0x00000001, 0x00000014, 0x0004003B,
    0x00000291, 0x00000F48, 0x00000001, 0x00040020, 0x00000289, 0x00000001,
    0x0000000B, 0x00040017, 0x00000012, 0x0000000C, 0x00000002, 0x00040017,
    0x00000017, 0x0000000B, 0x00000004, 0x0003001D, 0x000007DC, 0x00000017,
    0x0003001E, 0x000007B4, 0x000007DC, 0x00040020, 0x00000A32, 0x00000002,
    0x000007B4, 0x0004003B, 0x00000A32, 0x000012B6, 0x00000002, 0x00030016,
    0x0000000D, 0x00000020, 0x00090019, 0x000000B6, 0x0000000D, 0x00000001,
    0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00040020,
    0x00000333, 0x00000000, 0x000000B6, 0x0004003B, 0x00000333, 0x00000E7D,
    0x00000000, 0x00040017, 0x0000001D, 0x0000000D, 0x00000004, 0x0005002C,
    0x00000012, 0x00000720, 0x00000A0E, 0x00000A0B, 0x00040020, 0x00000294,
    0x00000002, 0x00000017, 0x0004002B, 0x0000000C, 0x00000A11, 0x00000002,
    0x0005002C, 0x00000012, 0x00000729, 0x00000A11, 0x00000A0B, 0x0004002B,
    0x0000000C, 0x00000A14, 0x00000003, 0x0005002C, 0x00000012, 0x00000732,
    0x00000A14, 0x00000A0B, 0x0004002B, 0x0000000B, 0x00000A22, 0x00000008,
    0x0006002C, 0x00000014, 0x00000AC7, 0x00000A22, 0x00000A22, 0x00000A0D,
    0x0005002C, 0x00000011, 0x000007A2, 0x00000A1F, 0x00000A1F, 0x0005002C,
    0x00000011, 0x000008A5, 0x00000A44, 0x00000A44, 0x0005002C, 0x00000011,
    0x0000074E, 0x00000A13, 0x00000A13, 0x00050036, 0x00000008, 0x0000161F,
    0x00000000, 0x00000502, 0x000200F8, 0x00003B06, 0x000300F7, 0x00004C7A,
    0x00000000, 0x000300FB, 0x00000A0A, 0x00002E68, 0x000200F8, 0x00002E68,
    0x00050041, 0x00000288, 0x000056E5, 0x0000118F, 0x00000A0B, 0x0004003D,
    0x0000000B, 0x00003D0B, 0x000056E5, 0x00050041, 0x00000288, 0x00004FD7,
    0x0000118F, 0x00000A0E, 0x0004003D, 0x0000000B, 0x00005744, 0x00004FD7,
    0x00050050, 0x00000011, 0x00002835, 0x00005744, 0x00005744, 0x000500C2,
    0x00000011, 0x00005F0A, 0x00002835, 0x00000805, 0x000500C7, 0x00000011,
    0x00001997, 0x00005F0A, 0x000007A2, 0x00050041, 0x00000289, 0x000052BF,
    0x00000F48, 0x00000A0A, 0x0004003D, 0x0000000B, 0x00005BDD, 0x000052BF,
    0x000500C2, 0x0000000B, 0x00005B58, 0x00005BDD, 0x00000A0D, 0x000500C2,
    0x0000000B, 0x00001CBB, 0x00003D0B, 0x00000A46, 0x000500C7, 0x0000000B,
    0x00004232, 0x00001CBB, 0x00000A44, 0x00050080, 0x0000000B, 0x0000228E,
    0x00004232, 0x00000A0D, 0x00050051, 0x0000000B, 0x00002E41, 0x00001997,
    0x00000000, 0x00050084, 0x0000000B, 0x000045F3, 0x0000228E, 0x00002E41,
    0x000500AE, 0x00000009, 0x00001C77, 0x00005B58, 0x000045F3, 0x000300F7,
    0x00003FD9, 0x00000002, 0x000400FA, 0x00001C77, 0x000055E8, 0x00003FD9,
    0x000200F8, 0x000055E8, 0x000200F9, 0x00004C7A, 0x000200F8, 0x00003FD9,
    0x00050050, 0x00000011, 0x00002A13, 0x00003D0B, 0x00003D0B, 0x000500C2,
    0x00000011, 0x0000350D, 0x00002A13, 0x00000787, 0x000500C7, 0x00000011,
    0x00005B53, 0x0000350D, 0x000008A5, 0x000500C4, 0x00000011, 0x00003F75,
    0x00005B53, 0x0000074E, 0x00050084, 0x00000011, 0x00004E9F, 0x00003F75,
    0x00001997, 0x000500C4, 0x0000000B, 0x00004C53, 0x00005BDD, 0x00000A10,
    0x00050041, 0x00000289, 0x000042E6, 0x00000F48, 0x00000A0D, 0x0004003D,
    0x0000000B, 0x00005690, 0x000042E6, 0x000500C2, 0x0000000B, 0x0000589E,
    0x00005690, 0x00000A0D, 0x00050050, 0x00000011, 0x00001947, 0x00004C53,
    0x0000589E, 0x00050080, 0x00000011, 0x00001F7A, 0x00004E9F, 0x00001947,
    0x0004007C, 0x00000012, 0x000020F0, 0x00001F7A, 0x0004007C, 0x00000011,
    0x00001C7B, 0x000020F0, 0x000500C4, 0x00000011, 0x00005852, 0x00001C7B,
    0x00000724, 0x0004003D, 0x00000014, 0x00002226, 0x00000F48, 0x0007004F,
    0x00000011, 0x00004262, 0x00002226, 0x00002226, 0x00000000, 0x00000001,
    0x000500C7, 0x00000011, 0x00006048, 0x00004262, 0x00000724, 0x000500C5,
    0x00000011, 0x00003D4D, 0x00005852, 0x00006048, 0x000500C7, 0x0000000B,
    0x00005B23, 0x00005744, 0x00000A44, 0x000500AE, 0x0000000F, 0x000044EA,
    0x0000070F, 0x0000072D, 0x000600A9, 0x00000011, 0x00004549, 0x000044EA,
    0x00000724, 0x0000070F, 0x000500C4, 0x00000011, 0x000028BE, 0x00003D4D,
    0x00004549, 0x000500C2, 0x00000011, 0x0000405B, 0x0000070F, 0x00000718,
    0x000500C7, 0x00000011, 0x0000330F, 0x0000405B, 0x00000724, 0x00050080,
    0x00000011, 0x00004F30, 0x000028BE, 0x0000330F, 0x00050084, 0x00000011,
    0x00005299, 0x00000A9F, 0x00001997, 0x000500C2, 0x00000011, 0x00003985,
    0x00005299, 0x0000070F, 0x00050086, 0x00000011, 0x00004D57, 0x00004F30,
    0x00003985, 0x00050051, 0x0000000B, 0x00004FA6, 0x00004D57, 0x00000001,
    0x00050084, 0x0000000B, 0x00002B26, 0x00004FA6, 0x00005B23, 0x00050051,
    0x0000000B, 0x000060A5, 0x00004D57, 0x00000000, 0x00050080, 0x0000000B,
    0x00005146, 0x00002B26, 0x000060A5, 0x00050084, 0x00000011, 0x000034D7,
    0x00004D57, 0x00003985, 0x00050082, 0x00000011, 0x000050EB, 0x00004F30,
    0x000034D7, 0x00050051, 0x0000000B, 0x00001C87, 0x00005299, 0x00000000,
    0x00050051, 0x0000000B, 0x00005962, 0x00005299, 0x00000001, 0x00050084,
    0x0000000B, 0x00003372, 0x00001C87, 0x00005962, 0x00050084, 0x0000000B,
    0x000038D7, 0x00005146, 0x00003372, 0x00050051, 0x0000000B, 0x00001A95,
    0x000050EB, 0x00000001, 0x00050051, 0x0000000B, 0x00005BE6, 0x00003985,
    0x00000000, 0x00050084, 0x0000000B, 0x00005966, 0x00001A95, 0x00005BE6,
    0x00050051, 0x0000000B, 0x00001AE6, 0x000050EB, 0x00000000, 0x00050080,
    0x0000000B, 0x000025E0, 0x00005966, 0x00001AE6, 0x000500C4, 0x0000000B,
    0x00004AFF, 0x000025E0, 0x00000A0A, 0x00050080, 0x0000000B, 0x0000226F,
    0x000038D7, 0x00004AFF, 0x000500C2, 0x0000000B, 0x000058E9, 0x0000226F,
    0x00000A10, 0x000500C7, 0x0000000B, 0x00002957, 0x00005690, 0x00000A0D,
    0x000500C4, 0x0000000B, 0x00003FD1, 0x00002957, 0x00000A0D, 0x0004007C,
    0x0000000C, 0x00005253, 0x00003FD1, 0x00050080, 0x0000000C, 0x00001FE3,
    0x00005253, 0x00000A0E, 0x0004003D, 0x000000B6, 0x00005694, 0x00000E7D,
    0x0007005F, 0x0000001D, 0x000023CD, 0x00005694, 0x000020F0, 0x00000040,
    0x00005253, 0x00050051, 0x0000000D, 0x0000439B, 0x000023CD, 0x00000000,
    0x0007005F, 0x0000001D, 0x000019FE, 0x00005694, 0x000020F0, 0x00000040,
    0x00001FE3, 0x00050051, 0x0000000D, 0x00003AE8, 0x000019FE, 0x00000000,
    0x00050080, 0x00000012, 0x00004A5B, 0x000020F0, 0x00000720, 0x0007005F,
    0x0000001D, 0x00004F33, 0x00005694, 0x00004A5B, 0x00000040, 0x00005253,
    0x00050051, 0x0000000D, 0x00005983, 0x00004F33, 0x00000000, 0x0007005F,
    0x0000001D, 0x000060ED, 0x00005694, 0x00004A5B, 0x00000040, 0x00001FE3,
    0x00050051, 0x0000000D, 0x00005D7F, 0x000060ED, 0x00000000, 0x00070050,
    0x0000001D, 0x00001957, 0x0000439B, 0x00003AE8, 0x00005983, 0x00005D7F,
    0x0004007C, 0x00000017, 0x00004F8E, 0x00001957, 0x00060041, 0x00000294,
    0x0000323C, 0x000012B6, 0x00000A0B, 0x000058E9, 0x0003003E, 0x0000323C,
    0x00004F8E, 0x00050080, 0x0000000B, 0x00004F20, 0x000058E9, 0x00000A0D,
    0x00050080, 0x00000012, 0x0000217E, 0x000020F0, 0x00000729, 0x0007005F,
    0x0000001D, 0x00002745, 0x00005694, 0x0000217E, 0x00000040, 0x00005253,
    0x00050051, 0x0000000D, 0x00005984, 0x00002745, 0x00000000, 0x0007005F,
    0x0000001D, 0x000019FF, 0x00005694, 0x0000217E, 0x00000040, 0x00001FE3,
    0x00050051, 0x0000000D, 0x00003AE9, 0x000019FF, 0x00000000, 0x00050080,
    0x00000012, 0x00004A5C, 0x000020F0, 0x00000732, 0x0007005F, 0x0000001D,
    0x00004F34, 0x00005694, 0x00004A5C, 0x00000040, 0x00005253, 0x00050051,
    0x0000000D, 0x00005985, 0x00004F34, 0x00000000, 0x0007005F, 0x0000001D,
    0x000060EE, 0x00005694, 0x00004A5C, 0x00000040, 0x00001FE3, 0x00050051,
    0x0000000D, 0x00005D80, 0x000060EE, 0x00000000, 0x00070050, 0x0000001D,
    0x00001958, 0x00005984, 0x00003AE9, 0x00005985, 0x00005D80, 0x0004007C,
    0x00000017, 0x00004F8F, 0x00001958, 0x00060041, 0x00000294, 0x00003B37,
    0x000012B6, 0x00000A0B, 0x00004F20, 0x0003003E, 0x00003B37, 0x00004F8F,
    0x000200F9, 0x00004C7A, 0x000200F8, 0x00004C7A, 0x000100FD, 0x00010038,
};
