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
	 * BlueprintGeneratedClass TrophyUIPassthrough.TrophyUIPassthrough_C
	 * Size -> 0x0024 (FullSize[0x0BAC] - InheritedSize[0x0B88])
	 */
	class ATrophyUIPassthrough_C : public ABP_TrophyGrabbableBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B88(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_TrophyGlove_C*                                   TrophyGlove;                                             // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPressed;                                               // 0x0B98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPointingAt;                                            // 0x0B99(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JW60[0x6];                                   // 0x0B9A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AButton_Standard_C*                                  Button;                                                  // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HapticScale;                                             // 0x0BA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayHaptic();
		void Initialize(class AButton_Standard_C* Button);
		void TriggerPressed(class ABP_TrophyGlove_C* TrophyGlove);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnStopPointingAt();
		void OnStartPointingAt();
		void OnTrophyGrabbed();
		void OnGrabbableActivated();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_TrophyUIPassthrough(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
