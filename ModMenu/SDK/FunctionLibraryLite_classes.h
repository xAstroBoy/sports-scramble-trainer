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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FunctionLibraryLite.FunctionLibraryLite_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFunctionLibraryLite_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibraryLite.FunctionLibraryLite_C");
		return ptr;
	}



	void STATIC_GetPlayerNamesLite(class UObject* WorldContextObject, int MaxLength, class UObject* __WorldContext, struct FText* Player1, struct FText* Player2);
	void STATIC_GetLocTextLite(const struct FName& LocTextName, class UObject* __WorldContext, struct FText* Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
