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
	 * BlueprintGeneratedClass BB_Strikezone.BB_Strikezone_C
	 * Size -> 0x0048 (FullSize[0x04C8] - InheritedSize[0x0480])
	 */
	class ABB_Strikezone_C : public AScramStrikeZone
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                StrikeQuad;                                              // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender;                                              // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             StrikeDetected;                                          // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BallDetected;                                            // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ShrinkOnSpawn;                                           // 0x04B8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       CatcherPresent;                                          // 0x04B9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_N9YE[0x6];                                   // 0x04BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_StrikezoneQuad_C*                                Strike_Quad_Actor;                                       // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Initialize();
		void GrowQuad();
		void ShrinkQuad();
		void ShowDebugText(const class FString& String, float Duration);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void UpdateStrikeZoneVisibility(bool Hide);
		void UpdateQuadVisibility(bool TL, bool TR, bool BL, bool BR);
		void PitchingTargetHit(EBaseballScrambleTargetLocations TargetLocation);
		void StrikezoneEventReceived(class ABaseballBall* Ball, EScramStrikeResult Result);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BB_Strikezone(int32_t EntryPoint);
		void BallDetected__DelegateSignature();
		void StrikeDetected__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
