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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct UI_RoomDetailsData.UI_RoomDetailsData
// 0x0068
struct FUI_RoomDetailsData
{
	SportsScramble_EScramSport                         Sport_39_7722867D4915DB3AF3922F8794F9FD44;                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YFBP[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ButtonID_51_F5C911C04974355111097A8116852FCD;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       RoomNumber_45_47748C9B482331E2E47F7FB191DD1BC9;            // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RoomName_46_BB7D7B5A49C64D0B478D039CCF4C6D59;              // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RoomDescription_47_797A1CF747651403A55152ABF6225C6A;       // 0x0038(0x0018) (Edit, BlueprintVisible)
	class UMaterialInterface*                          RoomImageMaterial_48_D200CD3049AEAFC8BC5A0783F06FCCC5;     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ArenaTypeLevel_58_FA43033F42F0D7D85BBFE6A2B4076B45;        // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CompletedLevel_60_A7B7044B48137ECB05B38B8331E8C926;        // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WonLevel_62_531F699D41C1875C6341C69F4D777F86;              // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RSGF[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlayerScore_68_0F1D2EE6463E669EA3BCEA946255EEFA;           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
