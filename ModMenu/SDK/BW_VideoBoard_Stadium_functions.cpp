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

// Function BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C.PlayDefaultMovie
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Playing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_VideoBoard_Stadium_C::PlayDefaultMovie(bool* Playing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C.PlayDefaultMovie");

	ABW_VideoBoard_Stadium_C_PlayDefaultMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Playing != nullptr)
		*Playing = params.Playing;

}


// Function BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_VideoBoard_Stadium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C.UserConstructionScript");

	ABW_VideoBoard_Stadium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
