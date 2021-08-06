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

// Function Tennis_Gameplay.Tennis_Gameplay_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennis_Gameplay_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tennis_Gameplay.Tennis_Gameplay_C.ReceiveEndPlay");

	ATennis_Gameplay_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tennis_Gameplay.Tennis_Gameplay_C.SpawnMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewGeoLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennis_Gameplay_C::SpawnMenu(const struct FName& NewGeoLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tennis_Gameplay.Tennis_Gameplay_C.SpawnMenu");

	ATennis_Gameplay_C_SpawnMenu_Params params;
	params.NewGeoLevel = NewGeoLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tennis_Gameplay.Tennis_Gameplay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATennis_Gameplay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tennis_Gameplay.Tennis_Gameplay_C.ReceiveBeginPlay");

	ATennis_Gameplay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tennis_Gameplay.Tennis_Gameplay_C.ExecuteUbergraph_Tennis_Gameplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennis_Gameplay_C::ExecuteUbergraph_Tennis_Gameplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tennis_Gameplay.Tennis_Gameplay_C.ExecuteUbergraph_Tennis_Gameplay");

	ATennis_Gameplay_C_ExecuteUbergraph_Tennis_Gameplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
