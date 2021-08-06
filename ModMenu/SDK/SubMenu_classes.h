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

// BlueprintGeneratedClass SubMenu.SubMenu_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USubMenu_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SubMenu.SubMenu_C");
		return ptr;
	}



	void EnableMenuInput(bool* InputEnabled);
	void DisableMenuInput(bool* InputDisabled);
	void RestoreSubMenu(bool* MenuShown);
	void HideSubMenu(bool* MenuHidden);
	void RemoveSubMenu(bool* Removed);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
