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

// Function PlatformMaterialSwapComp.PlatformMaterialSwapComp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UPlatformMaterialSwapComp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformMaterialSwapComp.PlatformMaterialSwapComp_C.ReceiveBeginPlay");

	UPlatformMaterialSwapComp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlatformMaterialSwapComp.PlatformMaterialSwapComp_C.ExecuteUbergraph_PlatformMaterialSwapComp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlatformMaterialSwapComp_C::ExecuteUbergraph_PlatformMaterialSwapComp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformMaterialSwapComp.PlatformMaterialSwapComp_C.ExecuteUbergraph_PlatformMaterialSwapComp");

	UPlatformMaterialSwapComp_C_ExecuteUbergraph_PlatformMaterialSwapComp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
