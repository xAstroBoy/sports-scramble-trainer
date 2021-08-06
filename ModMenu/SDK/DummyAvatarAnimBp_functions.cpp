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

// Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.AnimNotify_AvatarEnteredLoop
// (BlueprintCallable, BlueprintEvent)
void UDummyAvatarAnimBp_C::AnimNotify_AvatarEnteredLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.AnimNotify_AvatarEnteredLoop");

	UDummyAvatarAnimBp_C_AnimNotify_AvatarEnteredLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.PlayLook
// (BlueprintCallable, BlueprintEvent)
void UDummyAvatarAnimBp_C::PlayLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.PlayLook");

	UDummyAvatarAnimBp_C_PlayLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.ExecuteUbergraph_DummyAvatarAnimBp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDummyAvatarAnimBp_C::ExecuteUbergraph_DummyAvatarAnimBp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.ExecuteUbergraph_DummyAvatarAnimBp");

	UDummyAvatarAnimBp_C_ExecuteUbergraph_DummyAvatarAnimBp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
