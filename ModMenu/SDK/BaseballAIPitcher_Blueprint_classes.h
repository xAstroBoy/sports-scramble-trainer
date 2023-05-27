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
	 * BlueprintGeneratedClass BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C
	 * Size -> 0x004A (FullSize[0x06D2] - InheritedSize[0x0688])
	 */
	class ABaseballAIPitcher_Blueprint_C : public AScramBaseballPitcherAI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0688(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Glove;                                                   // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       HomeTeam;                                                // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_RO6S[0x7];                                   // 0x0699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             LookRandomized;                                          // 0x06A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FAvatarLook                                         PresetLook;                                              // 0x06B0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       RandomizeAvatar;                                         // 0x06D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       UseRemotePlayerLook;                                     // 0x06D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SetGloveColor(bool Home);
		void SetLook();
		void RandomizeLook();
		void GetScrambleBallClass(class UClass** Ball);
		void SetTeamColor(bool Home);
		void UserConstructionScript();
		void PlayMittSound(class ABaseballBall* Ball, float BallSpeed);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BaseballAIPitcher_Blueprint(int32_t EntryPoint);
		void LookRandomized__DelegateSignature(const struct FAvatarLook& AvatarLook);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
