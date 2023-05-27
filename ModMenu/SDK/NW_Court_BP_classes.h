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
	 * BlueprintGeneratedClass NW_Court_BP.NW_Court_BP_C
	 * Size -> 0x0130 (FullSize[0x0458] - InheritedSize[0x0328])
	 */
	class ANW_Court_BP_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Cube_ForeSwipeB;                                         // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube_ForeSwipeA;                                         // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube_SideSwipe_RB;                                       // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube_SideSwipe_RA;                                       // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube_SideSwipe_LB;                                       // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube_SideSwipe_LA;                                       // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube_MidCourtSwipeB;                                     // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube_MidCourtSwipeA;                                     // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     TN_CourtReveal_BigSwipe_Cue;                             // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube_SFX_BigSwipe;                                       // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                NW_Court_Center;                                         // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Court_Lines_SFX_Move_ForeSwipe_3A1A8714410263DB0EC1D7910E1198AB; // 0x0390(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Court_Lines_SFX_Move_SideSwipes_3A1A8714410263DB0EC1D7910E1198AB; // 0x039C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Court_Lines_SFX_Move_MidSwipe_3A1A8714410263DB0EC1D7910E1198AB; // 0x03A8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Court_Lines_SFX_Move_BigSwipe_3A1A8714410263DB0EC1D7910E1198AB; // 0x03B4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Court_Lines_Solid_Sweep_Brightness_3A1A8714410263DB0EC1D7910E1198AB; // 0x03C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Court_Lines_Court_Panel_Reveal_3A1A8714410263DB0EC1D7910E1198AB; // 0x03C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Court_Lines_Line_Ring_Size_Curve_Grow_3A1A8714410263DB0EC1D7910E1198AB; // 0x03C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Court_Lines__Direction_3A1A8714410263DB0EC1D7910E1198AB; // 0x03CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5KLR[0x3];                                   // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CourtLines;                                              // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            LineRingRevealSize;                                      // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            CourtReveal;                                             // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CourtRevealComplete;                                     // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CourtHideComplete;                                       // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       CourtSpawnRevealed;                                      // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_85RM[0x3];                                   // 0x0409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x040C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CubeMove_01;                                             // 0x0410(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CubeMove_02;                                             // 0x041C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CubeMove_03;                                             // 0x0428(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CubeMove_04;                                             // 0x0434(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CubeMove_05;                                             // 0x0440(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CubeMove_06;                                             // 0x044C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void CourtLines__FinishedFunc();
		void CourtLines__UpdateFunc();
		void CourtLines__SFX_Event_ForeSwipe__EventFunc();
		void CourtLines__SFX_Event_SideSwipes__EventFunc();
		void CourtLines__SFX_Event_MidSwipe__EventFunc();
		void CourtLines__SFX_Event_BigSwipe__EventFunc();
		void InpActEvt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Three_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_One_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ShowCourt();
		void HideCourt();
		void InstantShowCourt();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_NW_Court_BP(int32_t EntryPoint);
		void CourtHideComplete__DelegateSignature();
		void CourtRevealComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
