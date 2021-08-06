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

// UserDefinedStruct AvatarDefinition.AvatarDefinition
// 0x006E
struct FAvatarDefinition
{
	struct FText                                       Name_6_4E03D7D84315F6883108479F2A94F009;                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      SkeletalMesh_34_D30BEF1B4CD8DE04417712AB55AFA2F5[0x28];    // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AvatarDefinition.AvatarDefinition.SkeletalMesh_34_D30BEF1B4CD8DE04417712AB55AFA2F5
	unsigned char                                      AlternateStaticMesh_35_5AE3F12547494F6141B6E39C620B9D91[0x28]; // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AvatarDefinition.AvatarDefinition.AlternateStaticMesh_35_5AE3F12547494F6141B6E39C620B9D91
	int                                                Requirement_27_5614A6134CCA62FEA28D64A0750DAD81;           // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EarlyAccess_33_1D0343714CC51687303BFEB34695DD15;           // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AiDisabled_25_37E9B3B14148F8C12DB3D891D76B78B8;            // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
