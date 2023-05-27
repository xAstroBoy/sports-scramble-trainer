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
	 * BlueprintGeneratedClass DummyAvatar.DummyAvatar_C
	 * Size -> 0x0049 (FullSize[0x0371] - InheritedSize[0x0328])
	 */
	class ADummyAvatar_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FAvatarLook                                         AvatarLook;                                              // 0x0340(0x0020) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
		bool                                                       Happy;                                                   // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       JustIdle;                                                // 0x0361(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       UseAnimBp;                                               // 0x0362(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_WCAI[0x5];                                   // 0x0363(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDummyAvatarAnimBp_C*                                AnimBP;                                                  // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NeutralTeamColor;                                        // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SetLook(const struct FAvatarLook& AvatarLook);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_DummyAvatar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
