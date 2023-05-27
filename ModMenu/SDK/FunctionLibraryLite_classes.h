#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass FunctionLibraryLite.FunctionLibraryLite_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFunctionLibraryLite_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetPlayerNamesLite(class UObject* WorldContextObject, int32_t MaxLength, class UObject* __WorldContext, class FText* Player1, class FText* Player2);
		void STATIC_GetLocTextLite(const class FName& LocTextName, class UObject* __WorldContext, class FText* Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
