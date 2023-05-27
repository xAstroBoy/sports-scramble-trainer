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
	 * BlueprintGeneratedClass BB_Mitt.BB_Mitt_C
	 * Size -> 0x0041 (FullSize[0x0BF1] - InheritedSize[0x0BB0])
	 */
	class ABB_Mitt_C : public ABaseballMitt
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0BB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     PuffLocation;                                            // 0x0BB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0BC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class USoundBase*>                                  CatchSounds;                                             // 0x0BC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UMaterialInstance*                                   Material;                                                // 0x0BD8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BallCaught;                                              // 0x0BE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsHomeTeam;                                              // 0x0BF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_Material();
		void ApplyMaterial();
		void SetMaterial(class UMaterialInstance* NewMaterial);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BallCatch(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ASyncScrambleLoad();
		void SetColors(bool HomeTeam);
		void NetSetColors(bool HomeTeam);
		void DestroyPrimitive(bool playOut, float Delay);
		void NetResetColor();
		void ExecuteUbergraph_BB_Mitt(int32_t EntryPoint);
		void BallCaught__DelegateSignature(class UScramEventBasePayload* Payload);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
