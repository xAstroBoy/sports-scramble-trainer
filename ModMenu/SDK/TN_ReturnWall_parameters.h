#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TN_ReturnWall.TN_ReturnWall_C.FlashScore
struct ATN_ReturnWall_C_FlashScore_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ScoreFlashed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_ReturnWall.TN_ReturnWall_C.HideBallTarget
struct ATN_ReturnWall_C_HideBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_ReturnWall.TN_ReturnWall_C.ShowBallTarget
struct ATN_ReturnWall_C_ShowBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_ReturnWall.TN_ReturnWall_C.RemoveGameElement
struct ATN_ReturnWall_C_RemoveGameElement_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_ReturnWall.TN_ReturnWall_C.AreStreaksContinued
struct ATN_ReturnWall_C_AreStreaksContinued_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.GetFlyTextTransform
struct ATN_ReturnWall_C_GetFlyTextTransform_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ReturnWall.TN_ReturnWall_C.Initialize
struct ATN_ReturnWall_C_Initialize_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.RemoveImpacts
struct ATN_ReturnWall_C_RemoveImpacts_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.CreateImpact
struct ATN_ReturnWall_C_CreateImpact_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ReturnWall.TN_ReturnWall_C.UserConstructionScript
struct ATN_ReturnWall_C_UserConstructionScript_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__FinishedFunc
struct ATN_ReturnWall_C_Timeline_Move__FinishedFunc_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__UpdateFunc
struct ATN_ReturnWall_C_Timeline_Move__UpdateFunc_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__FinishedFunc
struct ATN_ReturnWall_C_Timeline_FirstResize__FinishedFunc_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__UpdateFunc
struct ATN_ReturnWall_C_Timeline_FirstResize__UpdateFunc_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__FinishedFunc
struct ATN_ReturnWall_C_Timeline_SecondResize__FinishedFunc_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__UpdateFunc
struct ATN_ReturnWall_C_Timeline_SecondResize__UpdateFunc_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__FinishedFunc
struct ATN_ReturnWall_C_Timeline_ThirdResize__FinishedFunc_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__UpdateFunc
struct ATN_ReturnWall_C_Timeline_ThirdResize__UpdateFunc_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__FinishedFunc
struct ATN_ReturnWall_C_Timeline_ResetOriginalSize__FinishedFunc_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__UpdateFunc
struct ATN_ReturnWall_C_Timeline_ResetOriginalSize__UpdateFunc_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_B0FBF894492B325F15CF9C8269818093
struct ATN_ReturnWall_C_OnLoaded_B0FBF894492B325F15CF9C8269818093_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_13BD0E934DE2D426979204B30A43C614
struct ATN_ReturnWall_C_OnLoaded_13BD0E934DE2D426979204B30A43C614_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361
struct ATN_ReturnWall_C_OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ReturnWall.TN_ReturnWall_C.RiseUp
struct ATN_ReturnWall_C_RiseUp_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.LowerDown
struct ATN_ReturnWall_C_LowerDown_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.ReceiveBeginPlay
struct ATN_ReturnWall_C_ReceiveBeginPlay_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.TargetHit
struct ATN_ReturnWall_C_TargetHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ReturnWall.TN_ReturnWall_C.ReceiveEndPlay
struct ATN_ReturnWall_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakHits
struct ATN_ReturnWall_C_CalculateStreakHits_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.CalculateCumulativeHits
struct ATN_ReturnWall_C_CalculateCumulativeHits_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.FirstResize
struct ATN_ReturnWall_C_FirstResize_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.SecondResize
struct ATN_ReturnWall_C_SecondResize_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.ThirdResize
struct ATN_ReturnWall_C_ThirdResize_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.ResetOriginalSize
struct ATN_ReturnWall_C_ResetOriginalSize_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakMultiplier
struct ATN_ReturnWall_C_CalculateStreakMultiplier_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.TargetMaterialFlash
struct ATN_ReturnWall_C_TargetMaterialFlash_Params
{
};

// Function TN_ReturnWall.TN_ReturnWall_C.ExecuteUbergraph_TN_ReturnWall
struct ATN_ReturnWall_C_ExecuteUbergraph_TN_ReturnWall_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ReturnWall.TN_ReturnWall_C.ReturnWallHit__DelegateSignature
struct ATN_ReturnWall_C_ReturnWallHit__DelegateSignature_Params
{
	int                                                CurrentStreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
