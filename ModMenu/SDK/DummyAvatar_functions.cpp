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

// Function DummyAvatar.DummyAvatar_C.SetLook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAvatarLook             AvatarLook                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ADummyAvatar_C::SetLook(const struct FAvatarLook& AvatarLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyAvatar.DummyAvatar_C.SetLook");

	ADummyAvatar_C_SetLook_Params params;
	params.AvatarLook = AvatarLook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DummyAvatar.DummyAvatar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ADummyAvatar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyAvatar.DummyAvatar_C.UserConstructionScript");

	ADummyAvatar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DummyAvatar.DummyAvatar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADummyAvatar_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyAvatar.DummyAvatar_C.ReceiveBeginPlay");

	ADummyAvatar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DummyAvatar.DummyAvatar_C.ExecuteUbergraph_DummyAvatar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADummyAvatar_C::ExecuteUbergraph_DummyAvatar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyAvatar.DummyAvatar_C.ExecuteUbergraph_DummyAvatar");

	ADummyAvatar_C_ExecuteUbergraph_DummyAvatar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
