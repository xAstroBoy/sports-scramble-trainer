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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BB_BallLauncher.BB_BallLauncher_C
// 0x0329 (FullSize[0x0859] - InheritedSize[0x0530])
class ABB_BallLauncher_C : public ALauncher_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             PreCalcTarget;                                             // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_RaiseHead_Height_B0F60DFC4C988DDC9560F99941A70F73; // 0x0548(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_RaiseHead__Direction_B0F60DFC4C988DDC9560F99941A70F73; // 0x054C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8HXL[0x3];                                     // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_RaiseHead;                                        // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Spawn_Scale_A956A90F4ECF98678E5F5382C930B110;              // 0x0558(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Spawn__Direction_A956A90F4ECF98678E5F5382C930B110;         // 0x055C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NZYF[0x3];                                     // 0x055D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Spawn;                                                     // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Movement_Alpha_E6EC23524D3A43D138BAB2908B9490F2;  // 0x0568(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Movement__Direction_E6EC23524D3A43D138BAB2908B9490F2; // 0x056C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_901Q[0x3];                                     // 0x056D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Movement;                                         // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Pitch_Alpha_A7AB6E4A4776B9E742A4A8AB2FE8ABBC;     // 0x0578(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Pitch__Direction_A7AB6E4A4776B9E742A4A8AB2FE8ABBC; // 0x057C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HS85[0x3];                                     // 0x057D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Pitch;                                            // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Rotation_Alpha_A45B177F4A92BE21928D0C911E21850B;  // 0x0588(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Rotation__Direction_A45B177F4A92BE21928D0C911E21850B; // 0x058C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AIMS[0x3];                                     // 0x058D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Rotation;                                         // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Height_Alpha_0A786567482F9524F46FCFA5887FC703;    // 0x0598(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Height__Direction_0A786567482F9524F46FCFA5887FC703; // 0x059C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RT38[0x3];                                     // 0x059D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Height;                                           // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_ScaleUp_Scale_0B0323FD42903E615714A7992434F8D8;   // 0x05A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_ScaleUp__Direction_0B0323FD42903E615714A7992434F8D8; // 0x05AC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_19UN[0x3];                                     // 0x05AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_ScaleUp;                                          // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InitialScale;                                              // 0x05B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Closing;                                                   // 0x05C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XXBX[0x3];                                     // 0x05C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartHeight;                                               // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndHeight;                                                 // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartRotation;                                             // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndRotation;                                               // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartPitch;                                                // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndPitch;                                                  // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartPositionY;                                            // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndPositionY;                                              // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TelegraphDelay;                                            // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LinkedMovementDelay;                                       // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WKL4[0x8];                                     // 0x05F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScramTrajectory                            trajectory;                                                // 0x0600(0x01F0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              InitialHeight;                                             // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7UUL[0x4];                                     // 0x07F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBallLauncher_AnimBP_C*                      AnimBp;                                                    // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    Material;                                                  // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                LightOffColor;                                             // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                LightOnColor;                                              // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlaySpawnAnimation;                                        // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_YX01[0x7];                                     // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    FinishedSpawnSequence;                                     // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               MovingL;                                                   // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V2LE[0x3];                                     // 0x0841(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RandomSpeed;                                               // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetRegionRightMargin;                                   // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetRegionLeftMargin;                                    // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetRegionTopMargin;                                     // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetRegionBottomMargin;                                  // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enabled;                                                   // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_BallLauncher.BB_BallLauncher_C");
		return ptr;
	}



	void RemoveGameElement(bool* Removed);
	void Initialize();
	void SimpleSetup(float InitialHeight, const struct FVector& InitialRotation, float BallSpeed, const struct FVector& LaunchSpin, const struct FVector& BounceSpin, TEnumAsByte<LauncherAimingPreset_ELauncherAimingPreset> AimPreset, bool IgnoreHeightChange);
	void SetLaunchLocation(float Height, const struct FRotator& Rotation, float PositionY, float Time);
	void UserConstructionScript();
	void Timeline_Height__FinishedFunc();
	void Timeline_Height__UpdateFunc();
	void Timeline_Rotation__FinishedFunc();
	void Timeline_Rotation__UpdateFunc();
	void Timeline_Pitch__FinishedFunc();
	void Timeline_Pitch__UpdateFunc();
	void Timeline_Movement__FinishedFunc();
	void Timeline_Movement__UpdateFunc();
	void Timeline_ScaleUp__FinishedFunc();
	void Timeline_ScaleUp__UpdateFunc();
	void Spawn__FinishedFunc();
	void Spawn__UpdateFunc();
	void Timeline_RaiseHead__FinishedFunc();
	void Timeline_RaiseHead__UpdateFunc();
	void RandomLaunch(float SpeedMin, float SpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time);
	void FireSquence(float BallSpeedMin, float BallSpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time);
	void LaunchSequenceUsingSpeed(float BallSpeedMin, float BallSpeedMax, float MinSpeedChange, float MoveYMin, float MoveYMax, float MinMoveDistance, float MinHeight, float MaxHeight, float CollapseSpeed, float MovementSpeed, float RaiseSpeed);
	void QuickRecalc();
	void SimpleFire();
	void RandomLaunchWithTelegraph(float SpeedMin, float SpeedMax, float MoveYMin, float MoveYMax, float MinHeight, float MaxHeight, float Time, float MinimumSpeedChange);
	void ChangeHeight(float NewHeight, float Rate);
	void ChangeRotation(float NewRotation, float Rate);
	void ChangePitch(float NewPitch, float Rate);
	void ChangePosition(float NewPositionY, float Rate);
	void ScaleUp();
	void ScaleDown();
	void ReceiveBeginPlay();
	void Telegraph();
	void PlaySpawn();
	void RaiseHead();
	void ExecuteUbergraph_BB_BallLauncher(int EntryPoint);
	void FinishedSpawnSequence__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
