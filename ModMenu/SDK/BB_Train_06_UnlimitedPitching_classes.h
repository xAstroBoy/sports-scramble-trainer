﻿#pragma once

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
	 * BlueprintGeneratedClass BB_Train_06_UnlimitedPitching.BB_Train_06_UnlimitedPitching_C
	 * Size -> 0x001A (FullSize[0x063A] - InheritedSize[0x0620])
	 */
	class ABB_Train_06_UnlimitedPitching_C : public ABB_Train_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBaseballPitcherPreferences                         OriginalPitchingPreferences;                             // 0x0628(0x0003) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_WENJ[0x5];                                   // 0x062B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BallClass;                                               // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RandomBall;                                              // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GameStarted;                                             // 0x0639(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetSpecificBall();
		void UpdateBallOptions();
		void BB_TRN_Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ChangeBallClass(class UClass* BB_Ball_Base);
		void CountDownCompleted();
		void ShowCountdown();
		void Unpaused();
		void ExecuteUbergraph_BB_Train_06_UnlimitedPitching(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
