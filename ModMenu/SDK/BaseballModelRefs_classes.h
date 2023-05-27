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
	 * BlueprintGeneratedClass BaseballModelRefs.BaseballModelRefs_C
	 * Size -> 0x0120 (FullSize[0x0448] - InheritedSize[0x0328])
	 */
	class ABaseballModelRefs_C : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Baseball;                                                // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Basketball;                                              // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         BeachBall;                                               // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         BowlingBall;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Football;                                                // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Frisbee;                                                 // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         PingPongBall;                                            // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Wiffleball;                                              // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         TennisBall;                                              // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         FishballStatic;                                          // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       FishballSkeleton;                                        // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              FishBallAnim;                                            // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Pineapple;                                               // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         HockeyPuck;                                              // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         GolfBall;                                                // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         BillardBall;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Softball;                                                // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         AluminumBat;                                             // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         BaseballBat;                                             // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         CricketBat;                                              // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         FishRacketStatic;                                        // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       FishRacketSkeleton;                                      // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              FishRacketAnim;                                          // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         FoamFinger;                                              // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         GolfClub;                                                // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         HockeyStick;                                             // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         PingPongPaddle;                                          // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         PoolNoodleStatic;                                        // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       PoolNoodleSkeleton;                                      // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              PoolNoodleAnim;                                          // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         PoolCue;                                                 // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         TennisRacket;                                            // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         GoldenBat;                                               // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Bomb;                                                    // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         GoldenBall;                                              // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
