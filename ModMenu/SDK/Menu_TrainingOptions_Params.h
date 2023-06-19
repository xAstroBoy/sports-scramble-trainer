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
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.EnableMenuInput
	 */
	struct AMenu_TrainingOptions_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5MKI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.DisableMenuInput
	 */
	struct AMenu_TrainingOptions_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J6XP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.RemoveSubMenu
	 */
	struct AMenu_TrainingOptions_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.HideSubMenu
	 */
	struct AMenu_TrainingOptions_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.RestoreSubMenu
	 */
	struct AMenu_TrainingOptions_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBbBallMesh
	 */
	struct AMenu_TrainingOptions_C_GetBbBallMesh_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBbInstrumentSkeleton
	 */
	struct AMenu_TrainingOptions_C_GetBbInstrumentSkeleton_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       Skeleton;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Anim;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBbInstrumentMesh
	 */
	struct AMenu_TrainingOptions_C_GetBbInstrumentMesh_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBwBallMesh
	 */
	struct AMenu_TrainingOptions_C_GetBwBallMesh_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetTnInstrumentSkeleton
	 */
	struct AMenu_TrainingOptions_C_GetTnInstrumentSkeleton_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       Skeleton;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Anim;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetTnInstrumentMesh
	 */
	struct AMenu_TrainingOptions_C_GetTnInstrumentMesh_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetTnBallMesh
	 */
	struct AMenu_TrainingOptions_C_GetTnBallMesh_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateLauncherType
	 */
	struct AMenu_TrainingOptions_C_UpdateLauncherType_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBattingTargets
	 */
	struct AMenu_TrainingOptions_C_UpdateBattingTargets_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdatePitchingTargets
	 */
	struct AMenu_TrainingOptions_C_UpdatePitchingTargets_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBatBaseball
	 */
	struct AMenu_TrainingOptions_C_UpdateBatBaseball_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBallBaseball
	 */
	struct AMenu_TrainingOptions_C_UpdateBallBaseball_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Baseball
	 */
	struct AMenu_TrainingOptions_C_Init_Baseball_Params
	{
	public:
		bool                                                       Pitching;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateLane
	 */
	struct AMenu_TrainingOptions_C_UpdateLane_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBallSelectionBowling
	 */
	struct AMenu_TrainingOptions_C_UpdateBallSelectionBowling_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Bowling
	 */
	struct AMenu_TrainingOptions_C_Init_Bowling_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateServeStyle
	 */
	struct AMenu_TrainingOptions_C_UpdateServeStyle_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Serve
	 */
	struct AMenu_TrainingOptions_C_Init_Serve_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotType
	 */
	struct AMenu_TrainingOptions_C_UpdateShotType_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotDirection
	 */
	struct AMenu_TrainingOptions_C_UpdateShotDirection_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateRacketSelectionTennis
	 */
	struct AMenu_TrainingOptions_C_UpdateRacketSelectionTennis_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBallSelectionTennis
	 */
	struct AMenu_TrainingOptions_C_UpdateBallSelectionTennis_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Volley
	 */
	struct AMenu_TrainingOptions_C_Init_Volley_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.SetRed
	 */
	struct AMenu_TrainingOptions_C_SetRed_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.Initialize
	 */
	struct AMenu_TrainingOptions_C_Initialize_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UserConstructionScript
	 */
	struct AMenu_TrainingOptions_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateBallMesh__FinishedFunc
	 */
	struct AMenu_TrainingOptions_C_Timeline_RotateBallMesh__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateBallMesh__UpdateFunc
	 */
	struct AMenu_TrainingOptions_C_Timeline_RotateBallMesh__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateInstrument__FinishedFunc
	 */
	struct AMenu_TrainingOptions_C_Timeline_RotateInstrument__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateInstrument__UpdateFunc
	 */
	struct AMenu_TrainingOptions_C_Timeline_RotateInstrument__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.ReceiveBeginPlay
	 */
	struct AMenu_TrainingOptions_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.ReceiveTick
	 */
	struct AMenu_TrainingOptions_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.ReceiveEndPlay
	 */
	struct AMenu_TrainingOptions_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.ButtonPressed
	 */
	struct AMenu_TrainingOptions_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisBallPrev
	 */
	struct AMenu_TrainingOptions_C_TennisBallPrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisBallNext
	 */
	struct AMenu_TrainingOptions_C_TennisBallNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisRacketPrev
	 */
	struct AMenu_TrainingOptions_C_TennisRacketPrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisRacketNext
	 */
	struct AMenu_TrainingOptions_C_TennisRacketNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotDirPrev
	 */
	struct AMenu_TrainingOptions_C_UpdateShotDirPrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotDirNext
	 */
	struct AMenu_TrainingOptions_C_UpdateShotDirNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotTypePrev
	 */
	struct AMenu_TrainingOptions_C_UpdateShotTypePrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotTypeNext
	 */
	struct AMenu_TrainingOptions_C_UpdateShotTypeNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateServeStylePrev
	 */
	struct AMenu_TrainingOptions_C_UpdateServeStylePrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateServeStyleNext
	 */
	struct AMenu_TrainingOptions_C_UpdateServeStyleNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.LanePrev
	 */
	struct AMenu_TrainingOptions_C_LanePrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.LaneNext
	 */
	struct AMenu_TrainingOptions_C_LaneNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.BowlingBallPrev
	 */
	struct AMenu_TrainingOptions_C_BowlingBallPrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.BowlingBallNext
	 */
	struct AMenu_TrainingOptions_C_BowlingBallNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBallPrev
	 */
	struct AMenu_TrainingOptions_C_BaseballBallPrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBallNext
	 */
	struct AMenu_TrainingOptions_C_BaseballBallNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBatPrev
	 */
	struct AMenu_TrainingOptions_C_BaseballBatPrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBatNext
	 */
	struct AMenu_TrainingOptions_C_BaseballBatNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.PitchTargetPrev
	 */
	struct AMenu_TrainingOptions_C_PitchTargetPrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.PitchTargetNext
	 */
	struct AMenu_TrainingOptions_C_PitchTargetNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingLauncherPrev
	 */
	struct AMenu_TrainingOptions_C_BattingLauncherPrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingLauncherNext
	 */
	struct AMenu_TrainingOptions_C_BattingLauncherNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingTargetPrev
	 */
	struct AMenu_TrainingOptions_C_BattingTargetPrev_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingTargetNext
	 */
	struct AMenu_TrainingOptions_C_BattingTargetNext_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.RotateBallMesh
	 */
	struct AMenu_TrainingOptions_C_RotateBallMesh_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.StopBallMeshRotate
	 */
	struct AMenu_TrainingOptions_C_StopBallMeshRotate_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.FixFuckedUpShit
	 */
	struct AMenu_TrainingOptions_C_FixFuckedUpShit_Params
	{	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.ExecuteUbergraph_Menu_TrainingOptions
	 */
	struct AMenu_TrainingOptions_C_ExecuteUbergraph_Menu_TrainingOptions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_TrainingOptions.Menu_TrainingOptions_C.AssetsLoaded__DelegateSignature
	 */
	struct AMenu_TrainingOptions_C_AssetsLoaded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
