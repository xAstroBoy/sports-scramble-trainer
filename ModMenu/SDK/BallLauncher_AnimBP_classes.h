#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass BallLauncher_AnimBP.BallLauncher_AnimBP_C
	 * Size -> 0x19BE (FullSize[0x1D16] - InheritedSize[0x0358])
	 */
	class UBallLauncher_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_LVWH[0x8];                                   // 0x0358(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_144B779F4C62E9695CECEFB210243684;     // 0x0368(0x0040)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2C3D5149404C67AFF848069B34EB7BAC; // 0x03A8(0x0138)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_26A77F5640C00B7D02B467872C04156C; // 0x04E0(0x0040)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_A936E4DA42F84CE056223699A98419A6; // 0x0520(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2C938A874AECB75B5C16D88F68118849; // 0x0658(0x0138)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FD8FE8B84D17F62BF3F9399FF627153B; // 0x0790(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B83BA5E941AC7B96F8DC29ACB3831BD3; // 0x07D8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_D7B45709483806EBFABA00B4EA36FF19; // 0x0820(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_029B269044D453521D6C67B53857C9DE; // 0x0868(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_103A8E7F4935197DC36FB4A782023565; // 0x08B0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10E54F744757AAB3804C5B8F38CA55A6; // 0x08F8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_64886E6C4526BDCFA11C6B9C863CCF56; // 0x0940(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8EA434774E820D34105986B16BDA05D7; // 0x0988(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_174EE5374716C5C6685D27BD0DD86798; // 0x09D0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_A1C1B62E4B0EC98F795EFD8EB5FB30BC; // 0x0A18(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B7E558F846C0F743FF5C908355C46AE2; // 0x0A60(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7E6C66B64667CBF63B33208AD7B8CA13; // 0x0AA8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39C169D9419A3043D8AA9C8C31C7ED55; // 0x0AF0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_CAABB5C848994831CA24DDA87156468C; // 0x0B38(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2D4EF69C4E25A2581B240BA8FF7EF848; // 0x0B80(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E0BEFF084E42D549B8573B8F2F765D6D; // 0x0BC8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_001EF99A426C26FC9C4D189410B20E23; // 0x0C10(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_62515C12498705E358443BB9F4967AF8; // 0x0CB0(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FAA61A82412C37E6CB474E9F8D115E96; // 0x0CF0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_D40297724EEE02729AEB39B2A216C74D; // 0x0D90(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B5716BB845730B1D74E43A9613CC927E; // 0x0DD0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_63DDFBAF415827AC86878BA81F2D48C6; // 0x0E70(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FA24AC7943FC0CE897DB598CB5704CB3; // 0x0EB0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4F4AB41D482E297F28B3D993CC94BF20; // 0x0F50(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D43B2C874AA721B32F17E597EC9EDDB8; // 0x0F90(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6AEF1669443253DCB0B7AE999ACF030C; // 0x1030(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_BCBDDC1441110D283A05DFB58669C552; // 0x1070(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7B711FB14D46AC573423FBBFB13BCE5D; // 0x1110(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CBA88CFE4863E1BB8C8F5B9FC1E8CD66; // 0x1150(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16F695554A2AE00A2CDE009ECD8B34D4; // 0x11F0(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5E5C9E5444D87652472AA3B07E580B19; // 0x1230(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_DE61EE094B315F2F0786038B07A1880E; // 0x12D0(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DE0184884F393EEB453DC599EB9C4FF6; // 0x1310(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_A20285D64F2245D59E19CAA78B7972F0; // 0x13B0(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5E8C885E47AEA3871B49C69178EC0388; // 0x13F0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9649A4234B44A97FF6D36692F23F0F93; // 0x1490(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B17E1FDA4D990DFDB316DF9E47C06359; // 0x14D0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3EB9A5A64925A7E5E719D5BC3FA9E6A9; // 0x1570(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2C9A65754656807FBB2676BB332C6ED2; // 0x15B0(0x00E0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_31441C3A4312DA4FD81F5CB8A951679C; // 0x1690(0x0040)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_61C569E84444D023183245918B9A09E4; // 0x16D0(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_F154AC014A6A528B2EA5F38EB85B1875; // 0x1808(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8A0CCEBB4F3A6B7CA4EE7C90EBDC199A; // 0x1940(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_54E8D5CA452F6F9236100098AEF062EF; // 0x1A78(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_F48CA86841360EDFC84B14A4BEFF24D9; // 0x1BB0(0x0138)
		float                                                      LaunchHeightOffset;                                      // 0x1CE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LaunchRotationOffset;                                    // 0x1CEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LaunchPitchOffset;                                       // 0x1CF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlaySpawn;                                               // 0x1CF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayFire;                                                // 0x1CF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LZ2U[0x2];                                   // 0x1CF6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SpawnAnimComplete;                                       // 0x1CF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      ScaleOverride;                                           // 0x1D08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayMoveL;                                               // 0x1D0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayMoveR;                                               // 0x1D0D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IYMH[0x2];                                   // 0x1D0E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WheelRotationOffset;                                     // 0x1D10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayMoveF;                                               // 0x1D14(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayMoveB;                                               // 0x1D15(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BallLauncher_AnimBP_AnimGraphNode_ModifyBone_61C569E84444D023183245918B9A09E4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BallLauncher_AnimBP_AnimGraphNode_ModifyBone_F154AC014A6A528B2EA5F38EB85B1875();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BallLauncher_AnimBP_AnimGraphNode_ModifyBone_8A0CCEBB4F3A6B7CA4EE7C90EBDC199A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BallLauncher_AnimBP_AnimGraphNode_ModifyBone_54E8D5CA452F6F9236100098AEF062EF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BallLauncher_AnimBP_AnimGraphNode_ModifyBone_F48CA86841360EDFC84B14A4BEFF24D9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BallLauncher_AnimBP_AnimGraphNode_ModifyBone_2C938A874AECB75B5C16D88F68118849();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BallLauncher_AnimBP_AnimGraphNode_ModifyBone_A936E4DA42F84CE056223699A98419A6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BallLauncher_AnimBP_AnimGraphNode_ModifyBone_2C3D5149404C67AFF848069B34EB7BAC();
		void AnimNotify_BL_EnteredFire();
		void AnimNotify_BL_EnteredSpawn();
		void AnimNotify_BL_SpawnComplete();
		void ExecuteUbergraph_BallLauncher_AnimBP(int32_t EntryPoint);
		void SpawnAnimComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
