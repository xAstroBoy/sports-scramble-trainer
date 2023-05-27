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
	 * BlueprintGeneratedClass Menu_Message_SevereError.Menu_Message_SevereError_C
	 * Size -> 0x0031 (FullSize[0x0359] - InheritedSize[0x0328])
	 */
	class AMenu_Message_SevereError_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh_Backing;                                      // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCanvasRenderTarget2D*                               TextRenderTarget;                                        // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           NewVar_1;                                                // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasInitialized;                                          // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EnableMenuInput(bool* InputEnabled);
		void DisableMenuInput(bool* InputDisabled);
		void RemoveSubMenu(bool* Removed);
		void HideSubMenu(bool* MenuHidden);
		void RestoreSubMenu(bool* MenuShown);
		void Initialize();
		void UpdateMaterial(class UCanvas* Canvas, float Width, float Height);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void UpdateTargetCanvas(class UCanvas* Canvas, int32_t Width, int32_t Height);
		void ExecuteUbergraph_Menu_Message_SevereError(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
