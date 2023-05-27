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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function IntroSetup.IntroSetup_C.SpawnCompleteButton
	 */
	struct AIntroSetup_C_SpawnCompleteButton_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.SpawnAvatarMenu
	 */
	struct AIntroSetup_C_SpawnAvatarMenu_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.PlayVoiceSelectionMade
	 */
	struct AIntroSetup_C_PlayVoiceSelectionMade_Params
	{
	public:
		int32_t                                                    Choice;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.PlayVoiceMenuOpen
	 */
	struct AIntroSetup_C_PlayVoiceMenuOpen_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.UpdateChoice
	 */
	struct AIntroSetup_C_UpdateChoice_Params
	{
	public:
		int32_t                                                    Choice;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Progress;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.SpawnButtons
	 */
	struct AIntroSetup_C_SpawnButtons_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.SpawnHeader
	 */
	struct AIntroSetup_C_SpawnHeader_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.MenuVisibility
	 */
	struct AIntroSetup_C_MenuVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.Initialize
	 */
	struct AIntroSetup_C_Initialize_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.UserConstructionScript
	 */
	struct AIntroSetup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.Timeline_MenuScale__FinishedFunc
	 */
	struct AIntroSetup_C_Timeline_MenuScale__FinishedFunc_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.Timeline_MenuScale__UpdateFunc
	 */
	struct AIntroSetup_C_Timeline_MenuScale__UpdateFunc_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.OnLoaded_4E178D054C9768A0BCED61AFD58B3A39
	 */
	struct AIntroSetup_C_OnLoaded_4E178D054C9768A0BCED61AFD58B3A39_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.OnLoaded_F8A0EDC54CC06C1740724DA97E25564D
	 */
	struct AIntroSetup_C_OnLoaded_F8A0EDC54CC06C1740724DA97E25564D_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.OnLoaded_C7DDB53445A29D84A5023A87AE6CAEED
	 */
	struct AIntroSetup_C_OnLoaded_C7DDB53445A29D84A5023A87AE6CAEED_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.OnLoaded_4B3D2FC944CA225C28B5E499FEB8B58C
	 */
	struct AIntroSetup_C_OnLoaded_4B3D2FC944CA225C28B5E499FEB8B58C_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.OnLoaded_717C72CD421866AB659C9E89CE31CF32
	 */
	struct AIntroSetup_C_OnLoaded_717C72CD421866AB659C9E89CE31CF32_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.OnLoaded_02601EDC4E2E53F7E5E534B8DC7B379A
	 */
	struct AIntroSetup_C_OnLoaded_02601EDC4E2E53F7E5E534B8DC7B379A_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.OnLoaded_F557699F4197EA203F7A65B0CB8DE6DC
	 */
	struct AIntroSetup_C_OnLoaded_F557699F4197EA203F7A65B0CB8DE6DC_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.ReceiveBeginPlay
	 */
	struct AIntroSetup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.SelectionMade
	 */
	struct AIntroSetup_C_SelectionMade_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.CloseMenu
	 */
	struct AIntroSetup_C_CloseMenu_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.ReceiveTick
	 */
	struct AIntroSetup_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.ButtonSwapped
	 */
	struct AIntroSetup_C_ButtonSwapped_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.OpenMenu
	 */
	struct AIntroSetup_C_OpenMenu_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.HeaderDestroyed
	 */
	struct AIntroSetup_C_HeaderDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.DelayedChoiceEffect
	 */
	struct AIntroSetup_C_DelayedChoiceEffect_Params
	{
	public:
		int32_t                                                    Choice;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Progress;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.PlayDelayedVoice
	 */
	struct AIntroSetup_C_PlayDelayedVoice_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.CompleteButtonSwapped
	 */
	struct AIntroSetup_C_CompleteButtonSwapped_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.AvatarSetupAnimComplete
	 */
	struct AIntroSetup_C_AvatarSetupAnimComplete_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.AsyncPlayMenuOpen
	 */
	struct AIntroSetup_C_AsyncPlayMenuOpen_Params
	{	};

	/**
	 * Function IntroSetup.IntroSetup_C.AsyncPlaySelectionMade
	 */
	struct AIntroSetup_C_AsyncPlaySelectionMade_Params
	{
	public:
		int32_t                                                    Choice;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IntroSetup.IntroSetup_C.ExecuteUbergraph_IntroSetup
	 */
	struct AIntroSetup_C_ExecuteUbergraph_IntroSetup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_05I9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IntroSetup.IntroSetup_C.ChoiceMade__DelegateSignature
	 */
	struct AIntroSetup_C_ChoiceMade__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
