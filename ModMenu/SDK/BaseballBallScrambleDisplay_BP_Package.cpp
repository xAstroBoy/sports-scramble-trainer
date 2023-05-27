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
	 * 		Name   -> Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallScrambleDisplay_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.UserConstructionScript");
		
		ABaseballBallScrambleDisplay_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballBallScrambleDisplay_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ReceiveBeginPlay");
		
		ABaseballBallScrambleDisplay_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.SetIcon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallScrambleDisplay_BP_C::SetIcon(int32_t Index, class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.SetIcon");
		
		ABaseballBallScrambleDisplay_BP_C_SetIcon_Params params {};
		params.Index = Index;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.GoAway
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballBallScrambleDisplay_BP_C::GoAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.GoAway");
		
		ABaseballBallScrambleDisplay_BP_C_GoAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.FindIcon_From_BBClass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BBBallClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IconIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallScrambleDisplay_BP_C::FindIcon_From_BBClass(class UClass* BBBallClass, int32_t IconIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.FindIcon_From_BBClass");
		
		ABaseballBallScrambleDisplay_BP_C_FindIcon_From_BBClass_Params params {};
		params.BBBallClass = BBBallClass;
		params.IconIndex = IconIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ExecuteUbergraph_BaseballBallScrambleDisplay_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballBallScrambleDisplay_BP_C::ExecuteUbergraph_BaseballBallScrambleDisplay_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ExecuteUbergraph_BaseballBallScrambleDisplay_BP");
		
		ABaseballBallScrambleDisplay_BP_C_ExecuteUbergraph_BaseballBallScrambleDisplay_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballBallScrambleDisplay_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballBallScrambleDisplay_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C");
		return ptr;
	}

}


