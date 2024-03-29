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
	 * BlueprintGeneratedClass ScramGameMode_BP.ScramGameMode_BP_C
	 * Size -> 0x0039 (FullSize[0x0451] - InheritedSize[0x0418])
	 */
	class AScramGameMode_BP_C : public AScramGameMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             NewPlayerJoin;                                           // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ClientPlayerExit;                                        // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UScramGameInstance_C*                                GameInstnace;                                            // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScramSport                                                SelectedSport;                                           // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ServerForceUpdateDormancy();
		void UserConstructionScript();
		void K2_OnLogout(class AController* ExitingController);
		void ReceiveBeginPlay();
		void StartOnlineMatchOfType(EScramSport SportType);
		void ClientSportPreferencesReceived();
		void K2_PostLogin(class APlayerController* NewPlayer);
		void SpawnOnlineGameHandler();
		void ExecuteUbergraph_ScramGameMode_BP(int32_t EntryPoint);
		void ClientPlayerExit__DelegateSignature(class AController* ExitingPlayer, bool IsSpectator);
		void NewPlayerJoin__DelegateSignature(class APlayerController* NewPlayer, bool IsSpectator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
