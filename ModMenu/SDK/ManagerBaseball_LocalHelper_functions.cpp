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

// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.DisplayPitchOrBatIntro
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerServe             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            GameCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::DisplayPitchOrBatIntro(bool IsLocalPlayerServe, int GameCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.DisplayPitchOrBatIntro");

	AManagerBaseball_LocalHelper_C_DisplayPitchOrBatIntro_Params params;
	params.IsLocalPlayerServe = IsLocalPlayerServe;
	params.GameCount = GameCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.DisplayInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::DisplayInfo(const struct FText& Text, float DisplayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.DisplayInfo");

	AManagerBaseball_LocalHelper_C_DisplayInfo_Params params;
	params.Text = Text;
	params.DisplayTime = DisplayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.Initialize");

	AManagerBaseball_LocalHelper_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.UserConstructionScript");

	AManagerBaseball_LocalHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_9AF1D1854A0B9357B6791496B725ADF6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_9AF1D1854A0B9357B6791496B725ADF6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_9AF1D1854A0B9357B6791496B725ADF6");

	AManagerBaseball_LocalHelper_C_OnLoaded_9AF1D1854A0B9357B6791496B725ADF6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_3890D687487FEB0D1EDBBC8BE058DC5F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_3890D687487FEB0D1EDBBC8BE058DC5F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_3890D687487FEB0D1EDBBC8BE058DC5F");

	AManagerBaseball_LocalHelper_C_OnLoaded_3890D687487FEB0D1EDBBC8BE058DC5F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_D2FDE2E74EA6D2152CE1689603F28F27
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_D2FDE2E74EA6D2152CE1689603F28F27(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_D2FDE2E74EA6D2152CE1689603F28F27");

	AManagerBaseball_LocalHelper_C_OnLoaded_D2FDE2E74EA6D2152CE1689603F28F27_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_1F57E9574DC02CD15BE99AB426D2A98B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_1F57E9574DC02CD15BE99AB426D2A98B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_1F57E9574DC02CD15BE99AB426D2A98B");

	AManagerBaseball_LocalHelper_C_OnLoaded_1F57E9574DC02CD15BE99AB426D2A98B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_6E693B1C42D93C86D3C8EE8E9DEB3A8E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_6E693B1C42D93C86D3C8EE8E9DEB3A8E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_6E693B1C42D93C86D3C8EE8E9DEB3A8E");

	AManagerBaseball_LocalHelper_C_OnLoaded_6E693B1C42D93C86D3C8EE8E9DEB3A8E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_BB6239F84093F01A9D07E6B6AF75EF63
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_BB6239F84093F01A9D07E6B6AF75EF63(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_BB6239F84093F01A9D07E6B6AF75EF63");

	AManagerBaseball_LocalHelper_C_OnLoaded_BB6239F84093F01A9D07E6B6AF75EF63_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_412CFADB484B48F8A3FA7FBE5A1F24EC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_412CFADB484B48F8A3FA7FBE5A1F24EC(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_412CFADB484B48F8A3FA7FBE5A1F24EC");

	AManagerBaseball_LocalHelper_C_OnLoaded_412CFADB484B48F8A3FA7FBE5A1F24EC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_7AD360D44A7E5E6004F46CBC7F5FD0D8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_7AD360D44A7E5E6004F46CBC7F5FD0D8(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_7AD360D44A7E5E6004F46CBC7F5FD0D8");

	AManagerBaseball_LocalHelper_C_OnLoaded_7AD360D44A7E5E6004F46CBC7F5FD0D8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_C3F1FE164937D123C0840F8FAE251B2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_C3F1FE164937D123C0840F8FAE251B2F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_C3F1FE164937D123C0840F8FAE251B2F");

	AManagerBaseball_LocalHelper_C_OnLoaded_C3F1FE164937D123C0840F8FAE251B2F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_49C2FF904AD95FE758C251AF6BED34DB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_49C2FF904AD95FE758C251AF6BED34DB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_49C2FF904AD95FE758C251AF6BED34DB");

	AManagerBaseball_LocalHelper_C_OnLoaded_49C2FF904AD95FE758C251AF6BED34DB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_490F3BC7426E93276687429B8BD532FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_490F3BC7426E93276687429B8BD532FD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_490F3BC7426E93276687429B8BD532FD");

	AManagerBaseball_LocalHelper_C_OnLoaded_490F3BC7426E93276687429B8BD532FD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_070704E542F03EA32F155AA0881820FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_070704E542F03EA32F155AA0881820FB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_070704E542F03EA32F155AA0881820FB");

	AManagerBaseball_LocalHelper_C_OnLoaded_070704E542F03EA32F155AA0881820FB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_D298D72C44B01EC8A25476A0D64B7449
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_D298D72C44B01EC8A25476A0D64B7449(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_D298D72C44B01EC8A25476A0D64B7449");

	AManagerBaseball_LocalHelper_C_OnLoaded_D298D72C44B01EC8A25476A0D64B7449_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_B62CF2B54F0AA50AA1BA2A9AA289C2B2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_B62CF2B54F0AA50AA1BA2A9AA289C2B2(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_B62CF2B54F0AA50AA1BA2A9AA289C2B2");

	AManagerBaseball_LocalHelper_C_OnLoaded_B62CF2B54F0AA50AA1BA2A9AA289C2B2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_7F54BA66460B58CB0D42C1B2770F8BB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_7F54BA66460B58CB0D42C1B2770F8BB8(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_7F54BA66460B58CB0D42C1B2770F8BB8");

	AManagerBaseball_LocalHelper_C_OnLoaded_7F54BA66460B58CB0D42C1B2770F8BB8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_894F8D744B4441FFEBD509B474CA5A7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_894F8D744B4441FFEBD509B474CA5A7D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_894F8D744B4441FFEBD509B474CA5A7D");

	AManagerBaseball_LocalHelper_C_OnLoaded_894F8D744B4441FFEBD509B474CA5A7D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_0FEEA2804EF0DDF9626EC7A5F5528810
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_0FEEA2804EF0DDF9626EC7A5F5528810(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_0FEEA2804EF0DDF9626EC7A5F5528810");

	AManagerBaseball_LocalHelper_C_OnLoaded_0FEEA2804EF0DDF9626EC7A5F5528810_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_451E97A046A886C1735F819F904A8BAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_451E97A046A886C1735F819F904A8BAB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_451E97A046A886C1735F819F904A8BAB");

	AManagerBaseball_LocalHelper_C_OnLoaded_451E97A046A886C1735F819F904A8BAB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_B72F5FA04E31CB710ACC09BDB94C4A47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_B72F5FA04E31CB710ACC09BDB94C4A47(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_B72F5FA04E31CB710ACC09BDB94C4A47");

	AManagerBaseball_LocalHelper_C_OnLoaded_B72F5FA04E31CB710ACC09BDB94C4A47_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_10DC37674F33EA0F5C11C78EFCD60172
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_10DC37674F33EA0F5C11C78EFCD60172(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_10DC37674F33EA0F5C11C78EFCD60172");

	AManagerBaseball_LocalHelper_C_OnLoaded_10DC37674F33EA0F5C11C78EFCD60172_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_924C889C4AF5F76E6B907789E3070FD6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::OnLoaded_924C889C4AF5F76E6B907789E3070FD6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OnLoaded_924C889C4AF5F76E6B907789E3070FD6");

	AManagerBaseball_LocalHelper_C_OnLoaded_924C889C4AF5F76E6B907789E3070FD6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBatterScoreSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::PlayBatterScoreSound(bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBatterScoreSound");

	AManagerBaseball_LocalHelper_C_PlayBatterScoreSound_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayPitcherScoreSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::PlayPitcherScoreSound(bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayPitcherScoreSound");

	AManagerBaseball_LocalHelper_C_PlayPitcherScoreSound_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBatterSingleSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::PlayBatterSingleSound(bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBatterSingleSound");

	AManagerBaseball_LocalHelper_C_PlayBatterSingleSound_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBatterDoubleSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::PlayBatterDoubleSound(bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBatterDoubleSound");

	AManagerBaseball_LocalHelper_C_PlayBatterDoubleSound_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBatterTripleSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::PlayBatterTripleSound(bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBatterTripleSound");

	AManagerBaseball_LocalHelper_C_PlayBatterTripleSound_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBatterHomerunSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           GrandSlam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::PlayBatterHomerunSound(bool IsLocalPlayerBatting, bool GrandSlam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBatterHomerunSound");

	AManagerBaseball_LocalHelper_C_PlayBatterHomerunSound_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;
	params.GrandSlam = GrandSlam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OutOneSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::OutOneSound(bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OutOneSound");

	AManagerBaseball_LocalHelper_C_OutOneSound_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OutTwoSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::OutTwoSound(bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OutTwoSound");

	AManagerBaseball_LocalHelper_C_OutTwoSound_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OutThreeSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::OutThreeSound(bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.OutThreeSound");

	AManagerBaseball_LocalHelper_C_OutThreeSound_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.GetReadyText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TopOfTheInning                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Inning                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::GetReadyText(bool IsLocalPlayerBatting, float DisplayTime, bool TopOfTheInning, int Inning)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.GetReadyText");

	AManagerBaseball_LocalHelper_C_GetReadyText_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;
	params.DisplayTime = DisplayTime;
	params.TopOfTheInning = TopOfTheInning;
	params.Inning = Inning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.AnnounceWinner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LocalPlayerIsHomeTeam          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            WinnerInt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::AnnounceWinner(bool LocalPlayerIsHomeTeam, int WinnerInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.AnnounceWinner");

	AManagerBaseball_LocalHelper_C_AnnounceWinner_Params params;
	params.LocalPlayerIsHomeTeam = LocalPlayerIsHomeTeam;
	params.WinnerInt = WinnerInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.TeleportMusic
// (BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::TeleportMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.TeleportMusic");

	AManagerBaseball_LocalHelper_C_TeleportMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBallSound
// (BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::PlayBallSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.PlayBallSound");

	AManagerBaseball_LocalHelper_C_PlayBallSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.DisplayStartOfMatchInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Innings                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::DisplayStartOfMatchInfo(int Innings, bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.DisplayStartOfMatchInfo");

	AManagerBaseball_LocalHelper_C_DisplayStartOfMatchInfo_Params params;
	params.Innings = Innings;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.FoulBallSound
// (BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::FoulBallSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.FoulBallSound");

	AManagerBaseball_LocalHelper_C_FoulBallSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.UmpireOut
// (BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::UmpireOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.UmpireOut");

	AManagerBaseball_LocalHelper_C_UmpireOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.MIttCatchSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BallLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::MIttCatchSound(const struct FVector& BallLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.MIttCatchSound");

	AManagerBaseball_LocalHelper_C_MIttCatchSound_Params params;
	params.BallLocation = BallLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.BallSound
// (BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::BallSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.BallSound");

	AManagerBaseball_LocalHelper_C_BallSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.HereThePitchSFX
// (BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::HereThePitchSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.HereThePitchSFX");

	AManagerBaseball_LocalHelper_C_HereThePitchSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.UmpireStrikeSound
// (BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::UmpireStrikeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.UmpireStrikeSound");

	AManagerBaseball_LocalHelper_C_UmpireStrikeSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.BrokenBatAnnouncement
// (BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::BrokenBatAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.BrokenBatAnnouncement");

	AManagerBaseball_LocalHelper_C_BrokenBatAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.GetNewBatAnnouncement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::GetNewBatAnnouncement(bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.GetNewBatAnnouncement");

	AManagerBaseball_LocalHelper_C_GetNewBatAnnouncement_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.SwitchSidesSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::SwitchSidesSound(float DisplayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.SwitchSidesSound");

	AManagerBaseball_LocalHelper_C_SwitchSidesSound_Params params;
	params.DisplayTime = DisplayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.MoveToFootIndicators
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLocalPlayerBatting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AManagerBaseball_LocalHelper_C::MoveToFootIndicators(bool IsLocalPlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.MoveToFootIndicators");

	AManagerBaseball_LocalHelper_C_MoveToFootIndicators_Params params;
	params.IsLocalPlayerBatting = IsLocalPlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.ReceiveEndPlay");

	AManagerBaseball_LocalHelper_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.QueueSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBB_SoundQueueStruct    SoundParams                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::QueueSound(const struct FBB_SoundQueueStruct& SoundParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.QueueSound");

	AManagerBaseball_LocalHelper_C_QueueSound_Params params;
	params.SoundParams = SoundParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.QueuePlayNext
// (BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::QueuePlayNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.QueuePlayNext");

	AManagerBaseball_LocalHelper_C_QueuePlayNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.HomeRun_Fireworks_VFX
// (BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::HomeRun_Fireworks_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.HomeRun_Fireworks_VFX");

	AManagerBaseball_LocalHelper_C_HomeRun_Fireworks_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.ReceiveBeginPlay");

	AManagerBaseball_LocalHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.AnnouncerStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Strike                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::AnnouncerStrike(int Strike)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.AnnouncerStrike");

	AManagerBaseball_LocalHelper_C_AnnouncerStrike_Params params;
	params.Strike = Strike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.ExecuteUbergraph_ManagerBaseball_LocalHelper
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AManagerBaseball_LocalHelper_C::ExecuteUbergraph_ManagerBaseball_LocalHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.ExecuteUbergraph_ManagerBaseball_LocalHelper");

	AManagerBaseball_LocalHelper_C_ExecuteUbergraph_ManagerBaseball_LocalHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.FinishedReadyMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AManagerBaseball_LocalHelper_C::FinishedReadyMessage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.FinishedReadyMessage__DelegateSignature");

	AManagerBaseball_LocalHelper_C_FinishedReadyMessage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
