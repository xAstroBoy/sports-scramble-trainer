/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetGloveColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Home                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballAIPitcher_Blueprint_C::SetGloveColor(bool Home)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetGloveColor");
		
		ABaseballAIPitcher_Blueprint_C_SetGloveColor_Params params {};
		params.Home = Home;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetLook
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIPitcher_Blueprint_C::SetLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetLook");
		
		ABaseballAIPitcher_Blueprint_C_SetLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.RandomizeLook
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIPitcher_Blueprint_C::RandomizeLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.RandomizeLook");
		
		ABaseballAIPitcher_Blueprint_C_RandomizeLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.GetScrambleBallClass
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Ball                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABaseballAIPitcher_Blueprint_C::GetScrambleBallClass(class UClass** Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.GetScrambleBallClass");
		
		ABaseballAIPitcher_Blueprint_C_GetScrambleBallClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ball != nullptr)
			*Ball = params.Ball;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetTeamColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Home                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballAIPitcher_Blueprint_C::SetTeamColor(bool Home)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetTeamColor");
		
		ABaseballAIPitcher_Blueprint_C_SetTeamColor_Params params {};
		params.Home = Home;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIPitcher_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.UserConstructionScript");
		
		ABaseballAIPitcher_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.PlayMittSound
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballBall*                               Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BallSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAIPitcher_Blueprint_C::PlayMittSound(class ABaseballBall* Ball, float BallSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.PlayMittSound");
		
		ABaseballAIPitcher_Blueprint_C_PlayMittSound_Params params {};
		params.Ball = Ball;
		params.BallSpeed = BallSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballAIPitcher_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ReceiveBeginPlay");
		
		ABaseballAIPitcher_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ExecuteUbergraph_BaseballAIPitcher_Blueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAIPitcher_Blueprint_C::ExecuteUbergraph_BaseballAIPitcher_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ExecuteUbergraph_BaseballAIPitcher_Blueprint");
		
		ABaseballAIPitcher_Blueprint_C_ExecuteUbergraph_BaseballAIPitcher_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.LookRandomized__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAvatarLook                                 AvatarLook                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABaseballAIPitcher_Blueprint_C::LookRandomized__DelegateSignature(const struct FAvatarLook& AvatarLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.LookRandomized__DelegateSignature");
		
		ABaseballAIPitcher_Blueprint_C_LookRandomized__DelegateSignature_Params params {};
		params.AvatarLook = AvatarLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballAIPitcher_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballAIPitcher_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C");
		return ptr;
	}

}


