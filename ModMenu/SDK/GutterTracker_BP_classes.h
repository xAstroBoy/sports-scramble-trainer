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

// BlueprintGeneratedClass GutterTracker_BP.GutterTracker_BP_C
// 0x0088 (FullSize[0x0308] - InheritedSize[0x0280])
class UGutterTracker_BP_C : public UBowlingGutterTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData_GV9V[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LeftParticleTransform;                                     // 0x0290(0x0030) (Edit, BlueprintVisible, Net, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UParticleSystem*                             ParticleTemplate;                                          // 0x02C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ACMN_ParticleEmitter_C*                      Left_Particle_Actor;                                       // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTransform                                  RightParticleTransform;                                    // 0x02D0(0x0030) (Edit, BlueprintVisible, Net, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class ACMN_ParticleEmitter_C*                      Right_Particle_Actor;                                      // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GutterTracker_BP.GutterTracker_BP_C");
		return ptr;
	}



	void FireLeftParticle();
	void FireRightParticle();
	void Left_Net_MultiCast();
	void Right_Net_Multicast();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Left_Server_Callup();
	void Right_Server_Callup();
	void ExecuteUbergraph_GutterTracker_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
