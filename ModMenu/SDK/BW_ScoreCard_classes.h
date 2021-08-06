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

// BlueprintGeneratedClass BW_ScoreCard.BW_ScoreCard_C
// 0x0068 (FullSize[0x03B8] - InheritedSize[0x0350])
class ABW_ScoreCard_C : public AScramSceneComponentActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BW_Traditional_Frame;                                      // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            ScoreCard;                                                 // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Scale_Scale_3F4853634EA6A42F834C7AB7BC473CCD;              // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Scale__Direction_3F4853634EA6A42F834C7AB7BC473CCD;         // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4AR9[0x3];                                     // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Scale;                                                     // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBW_ScoreCard_Widget_C*                      ScoreCardWidget;                                           // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBW_ScoreCardFrame_Widget_C*>         Player1RegularFrames;                                      // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UBW_ScoreCardFrame_Widget_C*>         Player2RegularFrames;                                      // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USizeBox*>                            RegularFrameLabels;                                        // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumFrames;                                                 // 0x03B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                NumPlayers;                                                // 0x03B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_ScoreCard.BW_ScoreCard_C");
		return ptr;
	}



	void UpdatePlayerNames();
	void PrepareForGame(int NumFrames, int NumPlayers, bool Hidden);
	void UpdateFrameSets(TArray<struct FBowlingFrameSet> FrameSets, int CurrentPlayer, int CurrentFrame);
	void Initialize();
	void UpdateFrameSet(const struct FBowlingFrameSet& frameSet, class UBW_ScoreCardFrameSet_Widget_C* FrameSetWidget, TArray<class UBW_ScoreCardFrame_Widget_C*>* FrameWidgets, bool IsPlayerActive, int CurrentFrame);
	void UserConstructionScript();
	void Scale__FinishedFunc();
	void Scale__UpdateFunc();
	void NetUpdateFrameSets(TArray<struct FBowlingFrameSet> FrameSets, int CurrentPlayer, int CurrentFrame);
	void ReceiveBeginPlay();
	void NetPrepareForGame(int NumFrames, int NumPlayers);
	void NetHide();
	void TravelCapsuleOpened(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ExecuteUbergraph_BW_ScoreCard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
