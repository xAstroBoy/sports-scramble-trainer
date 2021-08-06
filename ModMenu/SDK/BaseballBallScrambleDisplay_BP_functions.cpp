// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballBallScrambleDisplay_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.UserConstructionScript");

	ABaseballBallScrambleDisplay_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseballBallScrambleDisplay_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ReceiveBeginPlay");

	ABaseballBallScrambleDisplay_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.SetIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallScrambleDisplay_BP_C::SetIcon(int Index, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.SetIcon");

	ABaseballBallScrambleDisplay_BP_C_SetIcon_Params params;
	params.Index = Index;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.GoAway
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballBallScrambleDisplay_BP_C::GoAway()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.GoAway");

	ABaseballBallScrambleDisplay_BP_C_GoAway_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.FindIcon_From_BBClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BBBallClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            IconIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallScrambleDisplay_BP_C::FindIcon_From_BBClass(class UClass* BBBallClass, int IconIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.FindIcon_From_BBClass");

	ABaseballBallScrambleDisplay_BP_C_FindIcon_From_BBClass_Params params;
	params.BBBallClass = BBBallClass;
	params.IconIndex = IconIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ExecuteUbergraph_BaseballBallScrambleDisplay_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballBallScrambleDisplay_BP_C::ExecuteUbergraph_BaseballBallScrambleDisplay_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ExecuteUbergraph_BaseballBallScrambleDisplay_BP");

	ABaseballBallScrambleDisplay_BP_C_ExecuteUbergraph_BaseballBallScrambleDisplay_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
