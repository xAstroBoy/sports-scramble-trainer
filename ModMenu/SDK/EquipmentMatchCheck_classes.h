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

// BlueprintGeneratedClass EquipmentMatchCheck.EquipmentMatchCheck_C
// 0x0029 (FullSize[0x0351] - InheritedSize[0x0328])
class AEquipmentMatchCheck_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Root;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ATN_Ball_Base_C*                             Ball;                                                      // 0x0338(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               CheckInstrument;                                           // 0x0340(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_UNAB[0x7];                                     // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATN_Instrument_Base_C*                       Instrument;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               LocalPlayerInstrument_;                                    // 0x0350(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EquipmentMatchCheck.EquipmentMatchCheck_C");
		return ptr;
	}



	void EquipmentMatchWarn_Enabled_(class AActor* Actor, bool* EquipmentMatchWarningAllowed);
	void EquipmentMatchCheck_Instrument(class ATN_Instrument_Base_C* Instrument, bool LocalPlayer_, class ATN_Ball_Base_C* BallOptional, bool* Match);
	void EquipmentMatchCheck_Ball(class ATN_Ball_Base_C* Ball, bool* Match);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_EquipmentMatchCheck(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
