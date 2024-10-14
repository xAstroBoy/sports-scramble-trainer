#include "pch.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK/Headers/BasicTypes.h"
#include "SDK/Headers/CenterReturnWall_ACenterReturnWall_C.h"
#include "SDK/Headers/CoreUObject_UClass.h"
#include "SDK/Headers/CoreUObject_UFunction.h"
#include "SDK/Headers/Engine_ABlockingVolume.h"
#include "SDK/Headers/Engine_ACameraBlockingVolume.h"
#include "SDK/Headers/Engine_APlayerController.h"
#include "SDK/Headers/Engine_AWorldSettings.h"
#include "SDK/Headers/Engine_UCheatManager.h"
#include "SDK/Headers/Engine_UConsole.h"
#include "SDK/Headers/Engine_UEngine.h"
#include "SDK/Headers/Engine_UGameInstance.h"
#include "SDK/Headers/Engine_UGameplayStatics.h"
#include "SDK/Headers/Engine_UGameViewportClient.h"
#include "SDK/Headers/Engine_ULevel.h"
#include "SDK/Headers/Engine_ULocalPlayer.h"
#include "SDK/Headers/Engine_USceneComponent.h"
#include "SDK/Headers/Engine_UWorld.h"
#include "SDK/Headers/FrontEndManager_AFrontEndManager_C.h"
#include "SDK/Headers/ManagerTennis_LocalHelper_AManagerTennis_LocalHelper_C.h"
#include "SDK/Headers/ScrambleEvent_Base_AScrambleEvent_Base_C.h"
#include "SDK/Headers/ScramCameraCover_BP_AScramCameraCover_BP_C.h"
#include "SDK/Headers/ScramPlayer_BP_AScramPlayer_BP_C.h"
#include "SDK/Headers/ScramPlayerBoundary_BP_AScramPlayerBoundary_BP_C.h"
#include "SDK/Headers/ScramSportManagerTennis_Blueprint.h"
#include "SDK/Headers/ScramSportManagerTennis_Blueprint_AScramSportManagerTennis_Blueprint_C.h"
#include "SDK/Headers/SportsScramble_AScramPlayer.h"
#include "SDK/Headers/SportsScramble_AScramPlayerTrigger.h"
#include "SDK/Headers/SportsScramble_PARAMS.h"
#include "SDK/Headers/TennisScramble_Baseball_ATennisScramble_Baseball_C.h"
#include "SDK/Headers/TennisScramble_Basketball.h"
#include "SDK/Headers/TennisScramble_Basketball_ATennisScramble_Basketball_C.h"
#include "SDK/Headers/TennisScramble_BatInstrument.h"
#include "SDK/Headers/TennisScramble_BatInstrument_ATennisScramble_BatInstrument_C.h"
#include "SDK/Headers/TennisScramble_BeachBall.h"
#include "SDK/Headers/TennisScramble_BeachBall_ATennisScramble_BeachBall_C.h"
#include "SDK/Headers/TennisScramble_ChargedShot.h"
#include "SDK/Headers/TennisScramble_ChargedShot_ATennisScramble_ChargedShot_C.h"
#include "SDK/Headers/TennisScramble_FloppyFish.h"
#include "SDK/Headers/TennisScramble_FloppyFish_ATennisScramble_FloppyFish_C.h"
#include "SDK/Headers/TennisScramble_FoamFinger.h"
#include "SDK/Headers/TennisScramble_FoamFinger_ATennisScramble_FoamFinger_C.h"
#include "SDK/Headers/TennisScramble_Frisbee.h"
#include "SDK/Headers/TennisScramble_Frisbee_ATennisScramble_Frisbee_C.h"
#include "SDK/Headers/TennisScramble_GolfBall.h"
#include "SDK/Headers/TennisScramble_GolfBall_ATennisScramble_GolfBall_C.h"
#include "SDK/Headers/TennisScramble_GolfClub.h"
#include "SDK/Headers/TennisScramble_GolfClub_ATennisScramble_GolfClub_C.h"
#include "SDK/Headers/TennisScramble_HockeyPuck.h"
#include "SDK/Headers/TennisScramble_HockeyPuck_ATennisScramble_HockeyPuck_C.h"
#include "SDK/Headers/TennisScramble_HockeyStick.h"
#include "SDK/Headers/TennisScramble_HockeyStick_ATennisScramble_HockeyStick_C.h"
#include "SDK/Headers/TennisScramble_PingPongBall.h"
#include "SDK/Headers/TennisScramble_PingPongBall_ATennisScramble_PingPongBall_C.h"
#include "SDK/Headers/TennisScramble_PingPongPaddle.h"
#include "SDK/Headers/TennisScramble_PingPongPaddle_ATennisScramble_PingPongPaddle_C.h"
#include "SDK/Headers/TennisScramble_PoolNoodle.h"
#include "SDK/Headers/TennisScramble_PoolNoodle_ATennisScramble_PoolNoodle_C.h"
#include "SDK/Headers/TennisScramble_ProRacket.h"
#include "SDK/Headers/TennisScramble_ProRacket_ATennisScramble_ProRacket_C.h"
#include "SDK/Headers/TennisScramble_RaiseNet.h"
#include "SDK/Headers/TennisScramble_RaiseNet_ATennisScramble_RaiseNet_C.h"
#include "SDK/Headers/TennisScramble_RandomBall.h"
#include "SDK/Headers/TennisScramble_RandomBall_ATennisScramble_RandomBall_C.h"
#include "SDK/Headers/TennisScramble_RandomRacket.h"
#include "SDK/Headers/TennisScramble_RandomRacket_ATennisScramble_RandomRacket_C.h"
#include "SDK/Headers/TennisScramble_SoccerBall.h"
#include "SDK/Headers/TennisScramble_SoccerBall_ATennisScramble_SoccerBall_C.h"
#include "SDK/Headers/TennisScramble_SpecificBall.h"
#include "SDK/Headers/TennisScramble_SpecificBall_ATennisScramble_SpecificBall_C.h"
#include "SDK/Headers/TennisScramble_SpecificRacket.h"
#include "SDK/Headers/TennisScramble_SpecificRacket_ATennisScramble_SpecificRacket_C.h"
#include "SDK/Headers/TennisScramble_TennisBall.h"
#include "SDK/Headers/TennisScramble_TennisBall_ATennisScramble_TennisBall_C.h"
#include "SDK/Headers/TennisScramble_TennisRacket.h"
#include "SDK/Headers/TennisScramble_TennisRacket_ATennisScramble_TennisRacket_C.h"
#include "SDK/Headers/TennisScrambleTarget_ATennisScrambleTarget_C.h"
#include "SDK/Headers/TennisScrambleTargetGroup_ATennisScrambleTargetGroup_C.h"
#include "SDK/Headers/TN_AcceleratorBall_ATN_AcceleratorBall_C.h"
#include "SDK/Headers/TN_Ball_Base_ATN_Ball_Base_C.h"
#include "SDK/Headers/TN_Baseball_ATN_Baseball_C.h"
#include "SDK/Headers/TN_BaseballBat_ATN_BaseballBat_C.h"
#include "SDK/Headers/TN_Basketball_ATN_Basketball_C.h"
#include "SDK/Headers/TN_BeachBall_ATN_BeachBall_C.h"
#include "SDK/Headers/TN_Chicken_ATN_Chicken_C.h"
#include "SDK/Headers/TN_CricketBat_ATN_CricketBat_C.h"
#include "SDK/Headers/TN_Fish_ATN_Fish_C.h"
#include "SDK/Headers/TN_FishRacket_ATN_FishRacket_C.h"
#include "SDK/Headers/TN_FoamFinger_ATN_FoamFinger_C.h"
#include "SDK/Headers/TN_Football_ATN_Football_C.h"
#include "SDK/Headers/TN_Frisbee_ATN_Frisbee_C.h"
#include "SDK/Headers/TN_GolfBall_ATN_GolfBall_C.h"
#include "SDK/Headers/TN_GolfClub_ATN_GolfClub_C.h"
#include "SDK/Headers/TN_LacrosseStick_ATN_LacrosseStick_C.h"
#include "SDK/Headers/TN_PingPongBall_ATN_PingPongBall_C.h"
#include "SDK/Headers/TN_PingPongPaddle_ATN_PingPongPaddle_C.h"
#include "SDK/Headers/TN_PoolNoodle_ATN_PoolNoodle_C.h"
#include "SDK/Headers/TN_Shuttlecock_ATN_Shuttlecock_C.h"
#include "SDK/Headers/TN_Soccerball_ATN_Soccerball_C.h"
#include "SDK/Headers/TN_Softball_ATN_Softball_C.h"
#include "SDK/Headers/TN_TennisBall_ATN_TennisBall_C.h"
#include "SDK/Headers/TN_TennisRacket_ATN_TennisRacket_C.h"
#include "SDK/Headers/TN_TennisRacket_Upgrade01_ATN_TennisRacket_Upgrade01_C.h"
#include "SDK/Headers/TN_Wiffleball_ATN_Wiffleball_C.h"
#include "stdafx.h"
#include <algorithm>
#include <cctype>
#include <functional>
#include <future>
#include <iostream>
#include <list>
#include <regex>
#include <sstream>
#include <string>
#include <thread>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <vector>

enum class Tennis_Scrambler;
enum class Tennis_Rackets;
enum class Tennis_Balls;

struct Command {
	std::function<void(std::vector<std::string>)> handler;
	std::string description;
};
struct TennisItemBall
{
	CG::TN_Ball_Base::ATN_Ball_Base_C* item;
	std::string name;
};

struct TennisItemRackets
{
	CG::TN_Instrument_Base::ATN_Instrument_Base_C* item;
	std::string name;
};

struct ScramblerItem
{
	CG::ScrambleEvent_Base::AScrambleEvent_Base_C* item;
	std::string name;
};


struct TennisScramblerItem
{
	Tennis_Scrambler type;
	std::string name;

};

struct TennisScramblerDetails
{
	Tennis_Scrambler type;
	CG::ScrambleEvent_Base::AScrambleEvent_Base_C* item;
	std::string name;
};


enum class Tennis_Balls {
	AcceleratorBall,
	Baseball,
	Basketball,
	BeachBall,
	Fish,
	Football,
	Frisbee,
	GolfBall,
	PingPongBall,
	Shuttlecock,
	Chicken,
	Soccerball,
	Softball,
	TennisBall,
	Wiffleball,
	NONE,
};

enum class Tennis_Rackets {
	BaseballBat,
	CricketBat,
	FishRacket,
	FoamFinger,
	GolfClub,
	LacrosseStick,
	PingPongPaddle,
	PoolNoodle,
	TennisRacket,
	TennisRacket_Upgrade01,
	NONE,
};

enum class Tennis_Scrambler
{
	Baseball,
	Basketball,
	BatInstrument,
	BeachBall,
	ChargedShot,
	FloppyFish,
	FoamFinger,
	Frisbee,
	GolfBall,
	GolfClub,
	FishBall,
	CricketBat,
	PingPongBall,
	PingPongPaddle,
	PoolNoodle,
	ProRacket,
	RaiseNet,
	RandomBall,
	RandomRacket,
	SoccerBall,
	SpecificBall,
	SpecificRacket,
	TennisBall,
	TennisRacket,
	NONE,
};

typedef void(__thiscall* ProcessEvent)(CG::CoreUObject::UObject*, CG::CoreUObject::UFunction*, void*);
ProcessEvent oProcessEvent;
uintptr_t UObjectProcessEvent_Offset = 0x662510;
void HelpCommand(std::vector<std::string> args);
CG::Engine::UGameplayStatics* statics = nullptr;
CG::Engine::ULevel* GetPersistentLevel();
CG::Engine::AWorldSettings* GetWorldSettings();
CG::Engine::ULocalPlayer* GetActiveLocalPlayer();
CG::Engine::APlayerController* GetActivePlayerController();
CG::ScramSportManagerTennis_Blueprint::AScramSportManagerTennis_Blueprint_C* TennisManagerinstance;
CG::TN_Ball_Base::ATN_Ball_Base_C* Tn_Ball;
CG::CoreUObject::UObject* SpawnObject(CG::CoreUObject::UObject* ObjectClass, class CG::CoreUObject::UObject* Outer);
void Print(const std::string& text);
void DebugPrint(const std::string& text);

float Scale_Adjuster = static_cast <float>(2);
bool SlowModeInsteadOfPauseMenu = true;
bool isGameSlowed = false;
bool HasSavedSetPlayerDilation = false;
bool BigBallMode = true;
float BackupPlayerTimeDilation = 0;
bool LoggerActive = false;
bool DebugMessages = false;
bool AutoCheatManager = true;
bool tn_PatchScrambler = false;
bool tn_scrambler_no_balls = false;
bool tn_scrambler_no_rackets = false;
bool tn_scrambler_no_net_raise = false;
bool tn_scrambler_no_charged_shot = false;
bool tn_patchedBallList = false;
bool tn_patchedRacketList = false;


CG::BasicTypes::TArray<CG::TN_Ball_Base::ATN_Ball_Base_C*> OriginalBallDistributionList;
CG::BasicTypes::TArray<CG::TN_Ball_Base::ATN_Ball_Base_C*> DefaultBallList;

CG::BasicTypes::TArray<CG::TN_Instrument_Base::ATN_Instrument_Base_C*> OriginalInstrumentDistributionList;
CG::BasicTypes::TArray<CG::TN_Instrument_Base::ATN_Instrument_Base_C*> DefaultRacketList;
std::unordered_map<Tennis_Balls, TennisItemBall> ballMap;
std::unordered_map<Tennis_Rackets, TennisItemRackets> racketMap;
std::unordered_map<CG::ScrambleEvent_Base::AScrambleEvent_Base_C*, TennisScramblerItem> tennis_scrambler_map;
std::unordered_map<Tennis_Scrambler, ScramblerItem> tennis_scrambler_event_map;
std::unordered_map<std::string, Command> commandMap;

std::unordered_map<std::string, CG::TN_Ball_Base::ATN_Ball_Base_C*> ballCache;
std::unordered_map<std::string, CG::TN_Instrument_Base::ATN_Instrument_Base_C*> racketCache;
std::unordered_map<std::string, CG::ScrambleEvent_Base::AScrambleEvent_Base_C*> scramblerCache;
std::unordered_map<std::string, CG::ScrambleEvent_Base::AScrambleEvent_Base_C*> scramblerEventCache;





TennisScramblerDetails Identify_Scrambler(CG::TennisScrambleTarget::ATennisScrambleTarget_C* obj)
{
	if (obj == nullptr || obj->ScrambleEvent == nullptr)
	{
		return { Tennis_Scrambler::TennisRacket, nullptr, "Unknown" };
	}

	auto actorClass = obj->ScrambleEvent;

	auto it = tennis_scrambler_map.find(actorClass);
	if (it != tennis_scrambler_map.end())
	{
		return { it->second.type, actorClass, it->second.name };
	}
	DebugPrint("Scrambler not found in map: " + actorClass->GetFullName());
	return { Tennis_Scrambler::NONE, nullptr, "Unknown" };
}



std::pair<CG::TN_Ball_Base::ATN_Ball_Base_C*, std::string> Get_Tennis_Ball(Tennis_Balls ball)
{
	auto it = ballMap.find(ball);
	if (it != ballMap.end())
		return { it->second.item, it->second.name };
	return { nullptr, "Unknown" };
}

// Function to get UClass* and name for Tennis Rackets
std::pair<CG::TN_Instrument_Base::ATN_Instrument_Base_C*, std::string> Get_Tennis_Racket(Tennis_Rackets racket)
{
	auto it = racketMap.find(racket);
	if (it != racketMap.end())
		return { it->second.item, it->second.name };
	return { nullptr, "Unknown" };
}

std::pair<CG::ScrambleEvent_Base::AScrambleEvent_Base_C*, std::string> Get_Tennis_scramble_event(Tennis_Scrambler tennis_event)
{
	auto it = tennis_scrambler_event_map.find(tennis_event);
	if (it != tennis_scrambler_event_map.end())
		return { it->second.item, it->second.name };
	return { nullptr, "Unknown" };
}


std::string join(const std::vector<std::string>& args, const std::string& delimiter = " ") {
	if (args.empty()) return ""; // Return an empty string if the vector is empty

	if (args.size() == 1) {
		return args.front(); // Return the single item directly
	}

	std::ostringstream oss;
	for (size_t i = 0; i < args.size(); ++i) {
		if (i != 0) {
			oss << delimiter;
		}
		oss << args[i];
	}
	return oss.str();
}






CG::BasicTypes::TArray<CG::TN_Ball_Base::ATN_Ball_Base_C*> GetBallList()
{
	if (DefaultBallList.Count() == 0)
	{
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::TennisBall).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::Baseball).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::Basketball).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::BeachBall).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::Fish).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::Football).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::Frisbee).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::GolfBall).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::PingPongBall).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::Shuttlecock).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::Soccerball).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::Softball).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::TennisBall).first);
		DefaultBallList.Add(Get_Tennis_Ball(Tennis_Balls::Wiffleball).first);
	}
	return DefaultBallList;
}

CG::BasicTypes::TArray<CG::TN_Instrument_Base::ATN_Instrument_Base_C*> GetRacketList()
{
	if (DefaultRacketList.Count() == 0)
	{
		DefaultRacketList.Add(Get_Tennis_Racket(Tennis_Rackets::TennisRacket).first);
		DefaultRacketList.Add(Get_Tennis_Racket(Tennis_Rackets::TennisRacket_Upgrade01).first);
		DefaultRacketList.Add(Get_Tennis_Racket(Tennis_Rackets::BaseballBat).first);
		DefaultRacketList.Add(Get_Tennis_Racket(Tennis_Rackets::CricketBat).first);
		DefaultRacketList.Add(Get_Tennis_Racket(Tennis_Rackets::FishRacket).first);
		DefaultRacketList.Add(Get_Tennis_Racket(Tennis_Rackets::FoamFinger).first);
		DefaultRacketList.Add(Get_Tennis_Racket(Tennis_Rackets::GolfClub).first);
		DefaultRacketList.Add(Get_Tennis_Racket(Tennis_Rackets::LacrosseStick).first);
		DefaultRacketList.Add(Get_Tennis_Racket(Tennis_Rackets::PingPongPaddle).first);
		DefaultRacketList.Add(Get_Tennis_Racket(Tennis_Rackets::PoolNoodle).first);
	}
	return DefaultRacketList;
}


void FillMaps()
{
	ballMap = {
		{ Tennis_Balls::AcceleratorBall, { ballCache["AcceleratorBall"] ? ballCache["AcceleratorBall"] : (ballCache["AcceleratorBall"] = CG::TN_AcceleratorBall::ATN_AcceleratorBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_AcceleratorBall::ATN_AcceleratorBall_C>()), "AcceleratorBall" } },
		{ Tennis_Balls::Baseball, { ballCache["Baseball"] ? ballCache["Baseball"] : (ballCache["Baseball"] = CG::TN_Baseball::ATN_Baseball_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_Baseball::ATN_Baseball_C>()), "Baseball" } },
		{ Tennis_Balls::Basketball, { ballCache["Basketball"] ? ballCache["Basketball"] : (ballCache["Basketball"] = CG::TN_Basketball::ATN_Basketball_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_Basketball::ATN_Basketball_C>()), "Basketball" } },
		{ Tennis_Balls::BeachBall, { ballCache["BeachBall"] ? ballCache["BeachBall"] : (ballCache["BeachBall"] = CG::TN_BeachBall::ATN_BeachBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_BeachBall::ATN_BeachBall_C>()), "BeachBall" } },
		{ Tennis_Balls::Fish, { ballCache["Fish"] ? ballCache["Fish"] : (ballCache["Fish"] = CG::TN_Fish::ATN_Fish_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_Fish::ATN_Fish_C>()), "Fish" } },
		{ Tennis_Balls::Football, { ballCache["Football"] ? ballCache["Football"] : (ballCache["Football"] = CG::TN_Football::ATN_Football_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_Football::ATN_Football_C>()), "Football" } },
		{ Tennis_Balls::Frisbee, { ballCache["Frisbee"] ? ballCache["Frisbee"] : (ballCache["Frisbee"] = CG::TN_Frisbee::ATN_Frisbee_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_Frisbee::ATN_Frisbee_C>()), "Frisbee" } },
		{ Tennis_Balls::GolfBall, { ballCache["GolfBall"] ? ballCache["GolfBall"] : (ballCache["GolfBall"] = CG::TN_GolfBall::ATN_GolfBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_GolfBall::ATN_GolfBall_C>()), "GolfBall" } },
		{ Tennis_Balls::PingPongBall, { ballCache["PingPongBall"] ? ballCache["PingPongBall"] : (ballCache["PingPongBall"] = CG::TN_PingPongBall::ATN_PingPongBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_PingPongBall::ATN_PingPongBall_C>()), "PingPongBall" } },
		{ Tennis_Balls::Shuttlecock, { ballCache["Shuttlecock"] ? ballCache["Shuttlecock"] : (ballCache["Shuttlecock"] = CG::TN_Shuttlecock::ATN_Shuttlecock_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_Shuttlecock::ATN_Shuttlecock_C>()), "Shuttlecock" } },
		{ Tennis_Balls::Soccerball, { ballCache["Soccerball"] ? ballCache["Soccerball"] : (ballCache["Soccerball"] = CG::TN_Soccerball::ATN_Soccerball_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_Soccerball::ATN_Soccerball_C>()), "Soccerball" } },
		{ Tennis_Balls::Softball, { ballCache["Softball"] ? ballCache["Softball"] : (ballCache["Softball"] = CG::TN_Softball::ATN_Softball_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_Softball::ATN_Softball_C>()), "Softball" } },
		{ Tennis_Balls::TennisBall, { ballCache["TennisBall"] ? ballCache["TennisBall"] : (ballCache["TennisBall"] = CG::TN_TennisBall::ATN_TennisBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_TennisBall::ATN_TennisBall_C>()), "TennisBall" } },
		{ Tennis_Balls::Wiffleball, { ballCache["Wiffleball"] ? ballCache["Wiffleball"] : (ballCache["Wiffleball"] = CG::TN_Wiffleball::ATN_Wiffleball_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_Wiffleball::ATN_Wiffleball_C>()), "Wiffleball" } },
		{ Tennis_Balls::Chicken, { ballCache["Chicken"] ? ballCache["Chicken"] : (ballCache["Chicken"] = CG::TN_Chicken::ATN_Chicken_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_Chicken::ATN_Chicken_C>()), "Chicken" } }
	};
	Print("[Tennis Manager] Found Tennis Balls :  " + std::to_string(ballMap.size()));
	racketMap = {
		{ Tennis_Rackets::BaseballBat, { racketCache["BaseballBat"] ? racketCache["BaseballBat"] : (racketCache["BaseballBat"] = CG::TN_BaseballBat::ATN_BaseballBat_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_BaseballBat::ATN_BaseballBat_C>()), "BaseballBat" } },
		{ Tennis_Rackets::CricketBat, { racketCache["CricketBat"] ? racketCache["CricketBat"] : (racketCache["CricketBat"] = CG::TN_CricketBat::ATN_CricketBat_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_CricketBat::ATN_CricketBat_C>()), "CricketBat" } },
		{ Tennis_Rackets::FishRacket, { racketCache["FishRacket"] ? racketCache["FishRacket"] : (racketCache["FishRacket"] = CG::TN_FishRacket::ATN_FishRacket_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_FishRacket::ATN_FishRacket_C>()), "FishRacket" } },
		{ Tennis_Rackets::FoamFinger, { racketCache["FoamFinger"] ? racketCache["FoamFinger"] : (racketCache["FoamFinger"] = CG::TN_FoamFinger::ATN_FoamFinger_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_FoamFinger::ATN_FoamFinger_C>()), "FoamFinger" } },
		{ Tennis_Rackets::GolfClub, { racketCache["GolfClub"] ? racketCache["GolfClub"] : (racketCache["GolfClub"] = CG::TN_GolfClub::ATN_GolfClub_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_GolfClub::ATN_GolfClub_C>()), "GolfClub" } },
		{ Tennis_Rackets::LacrosseStick, { racketCache["LacrosseStick"] ? racketCache["LacrosseStick"] : (racketCache["LacrosseStick"] = CG::TN_LacrosseStick::ATN_LacrosseStick_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_LacrosseStick::ATN_LacrosseStick_C>()), "LacrosseStick" } },
		{ Tennis_Rackets::PingPongPaddle, { racketCache["PingPongPaddle"] ? racketCache["PingPongPaddle"] : (racketCache["PingPongPaddle"] = CG::TN_PingPongPaddle::ATN_PingPongPaddle_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_PingPongPaddle::ATN_PingPongPaddle_C>()), "PingPongPaddle" } },
		{ Tennis_Rackets::PoolNoodle, { racketCache["PoolNoodle"] ? racketCache["PoolNoodle"] : (racketCache["PoolNoodle"] = CG::TN_PoolNoodle::ATN_PoolNoodle_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_PoolNoodle::ATN_PoolNoodle_C>()), "PoolNoodle" } },
		{ Tennis_Rackets::TennisRacket, { racketCache["TennisRacket"] ? racketCache["TennisRacket"] : (racketCache["TennisRacket"] = CG::TN_TennisRacket::ATN_TennisRacket_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_TennisRacket::ATN_TennisRacket_C>()), "TennisRacket" } },
		{ Tennis_Rackets::TennisRacket_Upgrade01, { racketCache["TennisRacket_Upgrade01"] ? racketCache["TennisRacket_Upgrade01"] : (racketCache["TennisRacket_Upgrade01"] = CG::TN_TennisRacket_Upgrade01::ATN_TennisRacket_Upgrade01_C::StaticClass()->CreateDefaultObjectOfType<CG::TN_TennisRacket_Upgrade01::ATN_TennisRacket_Upgrade01_C>()), "TennisRacket_Upgrade" } }
	};

	Print("[Tennis Manager] Found Tennis Rackets : " + std::to_string(racketMap.size()));
	tennis_scrambler_map = {
	{ scramblerCache["Baseball"] ? scramblerCache["Baseball"] : (scramblerCache["Baseball"] = CG::TennisScramble_Baseball::ATennisScramble_Baseball_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_Baseball::ATennisScramble_Baseball_C>()), { Tennis_Scrambler::Baseball, "Baseball" } },
	{ scramblerCache["Basketball"] ? scramblerCache["Basketball"] : (scramblerCache["Basketball"] = CG::TennisScramble_Basketball::ATennisScramble_Basketball_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_Basketball::ATennisScramble_Basketball_C>()), { Tennis_Scrambler::Basketball, "Basketball" } },
	{ scramblerCache["BatInstrument"] ? scramblerCache["BatInstrument"] : (scramblerCache["BatInstrument"] = CG::TennisScramble_BatInstrument::ATennisScramble_BatInstrument_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_BatInstrument::ATennisScramble_BatInstrument_C>()), { Tennis_Scrambler::BatInstrument, "BatInstrument" } },
	{ scramblerCache["BeachBall"] ? scramblerCache["BeachBall"] : (scramblerCache["BeachBall"] = CG::TennisScramble_BeachBall::ATennisScramble_BeachBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_BeachBall::ATennisScramble_BeachBall_C>()), { Tennis_Scrambler::BeachBall, "BeachBall" } },
	{ scramblerCache["ChargedShot"] ? scramblerCache["ChargedShot"] : (scramblerCache["ChargedShot"] = CG::TennisScramble_ChargedShot::ATennisScramble_ChargedShot_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_ChargedShot::ATennisScramble_ChargedShot_C>()), { Tennis_Scrambler::ChargedShot, "ChargedShot" } },
	{ scramblerCache["FloppyFish"] ? scramblerCache["FloppyFish"] : (scramblerCache["FloppyFish"] = CG::TennisScramble_FloppyFish::ATennisScramble_FloppyFish_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_FloppyFish::ATennisScramble_FloppyFish_C>()), { Tennis_Scrambler::FloppyFish, "FloppyFish" } },
	{ scramblerCache["FoamFinger"] ? scramblerCache["FoamFinger"] : (scramblerCache["FoamFinger"] = CG::TennisScramble_FoamFinger::ATennisScramble_FoamFinger_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_FoamFinger::ATennisScramble_FoamFinger_C>()), { Tennis_Scrambler::FoamFinger, "FoamFinger" } },
	{ scramblerCache["Frisbee"] ? scramblerCache["Frisbee"] : (scramblerCache["Frisbee"] = CG::TennisScramble_Frisbee::ATennisScramble_Frisbee_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_Frisbee::ATennisScramble_Frisbee_C>()), { Tennis_Scrambler::Frisbee, "Frisbee" } },
	{ scramblerCache["GolfBall"] ? scramblerCache["GolfBall"] : (scramblerCache["GolfBall"] = CG::TennisScramble_GolfBall::ATennisScramble_GolfBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_GolfBall::ATennisScramble_GolfBall_C>()), { Tennis_Scrambler::GolfBall, "GolfBall" } },
	{ scramblerCache["GolfClub"] ? scramblerCache["GolfClub"] : (scramblerCache["GolfClub"] = CG::TennisScramble_GolfClub::ATennisScramble_GolfClub_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_GolfClub::ATennisScramble_GolfClub_C>()), { Tennis_Scrambler::GolfClub, "GolfClub" } },
	{ scramblerCache["HockeyPuck"] ? scramblerCache["HockeyPuck"] : (scramblerCache["HockeyPuck"] = CG::TennisScramble_HockeyPuck::ATennisScramble_HockeyPuck_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_HockeyPuck::ATennisScramble_HockeyPuck_C>()), { Tennis_Scrambler::FishBall, "FishBall" } },
	{ scramblerCache["HockeyStick"] ? scramblerCache["HockeyStick"] : (scramblerCache["HockeyStick"] = CG::TennisScramble_HockeyStick::ATennisScramble_HockeyStick_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_HockeyStick::ATennisScramble_HockeyStick_C>()), { Tennis_Scrambler::CricketBat, "CricketBat" } },
	{ scramblerCache["PingPongBall"] ? scramblerCache["PingPongBall"] : (scramblerCache["PingPongBall"] = CG::TennisScramble_PingPongBall::ATennisScramble_PingPongBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_PingPongBall::ATennisScramble_PingPongBall_C>()), { Tennis_Scrambler::PingPongBall, "PingPongBall" } },
	{ scramblerCache["PingPongPaddle"] ? scramblerCache["PingPongPaddle"] : (scramblerCache["PingPongPaddle"] = CG::TennisScramble_PingPongPaddle::ATennisScramble_PingPongPaddle_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_PingPongPaddle::ATennisScramble_PingPongPaddle_C>()), { Tennis_Scrambler::PingPongPaddle, "PingPongPaddle" } },
	{ scramblerCache["PoolNoodle"] ? scramblerCache["PoolNoodle"] : (scramblerCache["PoolNoodle"] = CG::TennisScramble_PoolNoodle::ATennisScramble_PoolNoodle_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_PoolNoodle::ATennisScramble_PoolNoodle_C>()), { Tennis_Scrambler::PoolNoodle, "PoolNoodle" } },
	{ scramblerCache["ProRacket"] ? scramblerCache["ProRacket"] : (scramblerCache["ProRacket"] = CG::TennisScramble_ProRacket::ATennisScramble_ProRacket_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_ProRacket::ATennisScramble_ProRacket_C>()), { Tennis_Scrambler::ProRacket, "ProRacket" } },
	{ scramblerCache["RaiseNet"] ? scramblerCache["RaiseNet"] : (scramblerCache["RaiseNet"] = CG::TennisScramble_RaiseNet::ATennisScramble_RaiseNet_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_RaiseNet::ATennisScramble_RaiseNet_C>()), { Tennis_Scrambler::RaiseNet, "RaiseNet" } },
	{ scramblerCache["RandomBall"] ? scramblerCache["RandomBall"] : (scramblerCache["RandomBall"] = CG::TennisScramble_RandomBall::ATennisScramble_RandomBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_RandomBall::ATennisScramble_RandomBall_C>()), { Tennis_Scrambler::RandomBall, "RandomBall" } },
	{ scramblerCache["RandomRacket"] ? scramblerCache["RandomRacket"] : (scramblerCache["RandomRacket"] = CG::TennisScramble_RandomRacket::ATennisScramble_RandomRacket_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_RandomRacket::ATennisScramble_RandomRacket_C>()), { Tennis_Scrambler::RandomRacket, "RandomRacket" } },
	{ scramblerCache["SoccerBall"] ? scramblerCache["SoccerBall"] : (scramblerCache["SoccerBall"] = CG::TennisScramble_SoccerBall::ATennisScramble_SoccerBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_SoccerBall::ATennisScramble_SoccerBall_C>()), { Tennis_Scrambler::SoccerBall, "SoccerBall" } },
	{ scramblerCache["SpecificBall"] ? scramblerCache["SpecificBall"] : (scramblerCache["SpecificBall"] = CG::TennisScramble_SpecificBall::ATennisScramble_SpecificBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_SpecificBall::ATennisScramble_SpecificBall_C>()), { Tennis_Scrambler::SpecificBall, "SpecificBall" } },
	{ scramblerCache["SpecificRacket"] ? scramblerCache["SpecificRacket"] : (scramblerCache["SpecificRacket"] = CG::TennisScramble_SpecificRacket::ATennisScramble_SpecificRacket_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_SpecificRacket::ATennisScramble_SpecificRacket_C>()), { Tennis_Scrambler::SpecificRacket, "SpecificRacket" } },
	{ scramblerCache["TennisBall"] ? scramblerCache["TennisBall"] : (scramblerCache["TennisBall"] = CG::TennisScramble_TennisBall::ATennisScramble_TennisBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_TennisBall::ATennisScramble_TennisBall_C>()), { Tennis_Scrambler::TennisBall, "TennisBall" } },
	{ scramblerCache["TennisRacket"] ? scramblerCache["TennisRacket"] : (scramblerCache["TennisRacket"] = CG::TennisScramble_TennisRacket::ATennisScramble_TennisRacket_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_TennisRacket::ATennisScramble_TennisRacket_C>()), { Tennis_Scrambler::TennisRacket, "TennisRacket" } }
	};

	Print("[Tennis Manager] Found Tennis Scramblers : " + std::to_string(tennis_scrambler_map.size()));
	tennis_scrambler_event_map = {
		{ Tennis_Scrambler::Baseball,    { scramblerCache["Baseball"] ? scramblerCache["Baseball"] : (scramblerCache["Baseball"] = CG::TennisScramble_Baseball::ATennisScramble_Baseball_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_Baseball::ATennisScramble_Baseball_C>()), "Baseball" } },
		{ Tennis_Scrambler::Basketball,  { scramblerCache["Basketball"] ? scramblerCache["Basketball"] : (scramblerCache["Basketball"] = CG::TennisScramble_Basketball::ATennisScramble_Basketball_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_Basketball::ATennisScramble_Basketball_C>()), "Basketball" } },
		{ Tennis_Scrambler::BatInstrument, { scramblerCache["BatInstrument"] ? scramblerCache["BatInstrument"] : (scramblerCache["BatInstrument"] = CG::TennisScramble_BatInstrument::ATennisScramble_BatInstrument_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_BatInstrument::ATennisScramble_BatInstrument_C>()), "BatInstrument" } },
		{ Tennis_Scrambler::BeachBall,    { scramblerCache["BeachBall"] ? scramblerCache["BeachBall"] : (scramblerCache["BeachBall"] = CG::TennisScramble_BeachBall::ATennisScramble_BeachBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_BeachBall::ATennisScramble_BeachBall_C>()), "BeachBall" } },
		{ Tennis_Scrambler::ChargedShot,  { scramblerCache["ChargedShot"] ? scramblerCache["ChargedShot"] : (scramblerCache["ChargedShot"] = CG::TennisScramble_ChargedShot::ATennisScramble_ChargedShot_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_ChargedShot::ATennisScramble_ChargedShot_C>()), "ChargedShot" } },
		{ Tennis_Scrambler::FloppyFish,   { scramblerCache["FloppyFish"] ? scramblerCache["FloppyFish"] : (scramblerCache["FloppyFish"] = CG::TennisScramble_FloppyFish::ATennisScramble_FloppyFish_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_FloppyFish::ATennisScramble_FloppyFish_C>()), "FloppyFish" } },
		{ Tennis_Scrambler::FoamFinger,   { scramblerCache["FoamFinger"] ? scramblerCache["FoamFinger"] : (scramblerCache["FoamFinger"] = CG::TennisScramble_FoamFinger::ATennisScramble_FoamFinger_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_FoamFinger::ATennisScramble_FoamFinger_C>()), "FoamFinger" } },
		{ Tennis_Scrambler::Frisbee,      { scramblerCache["Frisbee"] ? scramblerCache["Frisbee"] : (scramblerCache["Frisbee"] = CG::TennisScramble_Frisbee::ATennisScramble_Frisbee_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_Frisbee::ATennisScramble_Frisbee_C>()), "Frisbee" } },
		{ Tennis_Scrambler::GolfBall,      { scramblerCache["GolfBall"] ? scramblerCache["GolfBall"] : (scramblerCache["GolfBall"] = CG::TennisScramble_GolfBall::ATennisScramble_GolfBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_GolfBall::ATennisScramble_GolfBall_C>()), "GolfBall" } },
		{ Tennis_Scrambler::GolfClub,      { scramblerCache["GolfClub"] ? scramblerCache["GolfClub"] : (scramblerCache["GolfClub"] = CG::TennisScramble_GolfClub::ATennisScramble_GolfClub_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_GolfClub::ATennisScramble_GolfClub_C>()), "GolfClub" } },
		{ Tennis_Scrambler::FishBall,      { scramblerCache["FishBall"] ? scramblerCache["FishBall"] : (scramblerCache["FishBall"] = CG::TennisScramble_HockeyPuck::ATennisScramble_HockeyPuck_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_HockeyPuck::ATennisScramble_HockeyPuck_C>()), "FishBall" } },
		{ Tennis_Scrambler::CricketBat,    { scramblerCache["CricketBat"] ? scramblerCache["CricketBat"] : (scramblerCache["CricketBat"] = CG::TennisScramble_HockeyStick::ATennisScramble_HockeyStick_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_HockeyStick::ATennisScramble_HockeyStick_C>()), "CricketBat" } },
		{ Tennis_Scrambler::PingPongBall,  { scramblerCache["PingPongBall"] ? scramblerCache["PingPongBall"] : (scramblerCache["PingPongBall"] = CG::TennisScramble_PingPongBall::ATennisScramble_PingPongBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_PingPongBall::ATennisScramble_PingPongBall_C>()), "PingPongBall" } },
		{ Tennis_Scrambler::PingPongPaddle,{ scramblerCache["PingPongPaddle"] ? scramblerCache["PingPongPaddle"] : (scramblerCache["PingPongPaddle"] = CG::TennisScramble_PingPongPaddle::ATennisScramble_PingPongPaddle_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_PingPongPaddle::ATennisScramble_PingPongPaddle_C>()), "PingPongPaddle" } },
		{ Tennis_Scrambler::PoolNoodle,    { scramblerCache["PoolNoodle"] ? scramblerCache["PoolNoodle"] : (scramblerCache["PoolNoodle"] = CG::TennisScramble_PoolNoodle::ATennisScramble_PoolNoodle_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_PoolNoodle::ATennisScramble_PoolNoodle_C>()), "PoolNoodle" } },
		{ Tennis_Scrambler::ProRacket,     { scramblerCache["ProRacket"] ? scramblerCache["ProRacket"] : (scramblerCache["ProRacket"] = CG::TennisScramble_ProRacket::ATennisScramble_ProRacket_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_ProRacket::ATennisScramble_ProRacket_C>()), "ProRacket" } },
		{ Tennis_Scrambler::RaiseNet,      { scramblerCache["RaiseNet"] ? scramblerCache["RaiseNet"] : (scramblerCache["RaiseNet"] = CG::TennisScramble_RaiseNet::ATennisScramble_RaiseNet_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_RaiseNet::ATennisScramble_RaiseNet_C>()), "RaiseNet" } },
		{ Tennis_Scrambler::RandomBall,    { scramblerCache["RandomBall"] ? scramblerCache["RandomBall"] : (scramblerCache["RandomBall"] = CG::TennisScramble_RandomBall::ATennisScramble_RandomBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_RandomBall::ATennisScramble_RandomBall_C>()), "RandomBall" } },
		{ Tennis_Scrambler::RandomRacket,  { scramblerCache["RandomRacket"] ? scramblerCache["RandomRacket"] : (scramblerCache["RandomRacket"] = CG::TennisScramble_RandomRacket::ATennisScramble_RandomRacket_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_RandomRacket::ATennisScramble_RandomRacket_C>()), "RandomRacket" } },
		{ Tennis_Scrambler::SoccerBall,    { scramblerCache["SoccerBall"] ? scramblerCache["SoccerBall"] : (scramblerCache["SoccerBall"] = CG::TennisScramble_SoccerBall::ATennisScramble_SoccerBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_SoccerBall::ATennisScramble_SoccerBall_C>()), "SoccerBall" } },
		{ Tennis_Scrambler::SpecificBall,  { scramblerCache["SpecificBall"] ? scramblerCache["SpecificBall"] : (scramblerCache["SpecificBall"] = CG::TennisScramble_SpecificBall::ATennisScramble_SpecificBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_SpecificBall::ATennisScramble_SpecificBall_C>()), "SpecificBall" } },
		{ Tennis_Scrambler::SpecificRacket,{ scramblerCache["SpecificRacket"] ? scramblerCache["SpecificRacket"] : (scramblerCache["SpecificRacket"] = CG::TennisScramble_SpecificRacket::ATennisScramble_SpecificRacket_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_SpecificRacket::ATennisScramble_SpecificRacket_C>()), "SpecificRacket" } },
		{ Tennis_Scrambler::TennisBall,    { scramblerCache["TennisBall"] ? scramblerCache["TennisBall"] : (scramblerCache["TennisBall"] = CG::TennisScramble_TennisBall::ATennisScramble_TennisBall_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_TennisBall::ATennisScramble_TennisBall_C>()), "TennisBall" } },
		{ Tennis_Scrambler::TennisRacket,  { scramblerCache["TennisRacket"] ? scramblerCache["TennisRacket"] : (scramblerCache["TennisRacket"] = CG::TennisScramble_TennisRacket::ATennisScramble_TennisRacket_C::StaticClass()->CreateDefaultObjectOfType<CG::TennisScramble_TennisRacket::ATennisScramble_TennisRacket_C>()), "TennisRacket" } }
	};
	Print("[Tennis Manager] Found Tennis Scramblers Events : " + std::to_string(tennis_scrambler_map.size()));
}

void ScheduleMethod(std::function<void()> method, int delay)
{
	std::thread([=]() {
		std::this_thread::sleep_for(std::chrono::seconds(delay));
		method();
		}).detach();
}


void Restore_Scrambler_BallDistribution()
{
	if (TennisManagerinstance != nullptr)
	{
		auto scrambler = TennisManagerinstance->Scrambler;
		if (scrambler != nullptr)
		{
			scrambler->BallDistibutionList = OriginalBallDistributionList;
			if (scrambler->BallDistibutionList.Count() == 0)
			{
				DebugPrint("BallDistribution is still empty! Filling with all ball types!");
				scrambler->BallDistibutionList = GetBallList();
			}
			DebugPrint("Restored Original BallDistibutionList with " + std::to_string(scrambler->BallDistibutionList.Count()) + " Balls.");
			OriginalBallDistributionList = CG::BasicTypes::TArray<CG::TN_Ball_Base::ATN_Ball_Base_C*>(); // Clear the backup list
			Print("Fixed Ball Distribution to avoid a game crash!");
		}
	}
}

void Restore_Scrambler_RacketDistribution()
{
	if (TennisManagerinstance != nullptr)
	{
		auto scrambler = TennisManagerinstance->Scrambler;
		if (scrambler != nullptr)
		{
			if (tn_patchedRacketList)
			{
				scrambler->InstrumentDistibutionList = OriginalInstrumentDistributionList;
				if (scrambler->InstrumentDistibutionList.Count() == 0)
				{
					DebugPrint("InstrumentDistibutionList is still empty! Filling with all racket types!");
					scrambler->InstrumentDistibutionList = GetRacketList();

				}
				DebugPrint("Restored Original InstrumentDistibutionList with " + std::to_string(scrambler->InstrumentDistibutionList.Count()) + " Rackets.");
				OriginalInstrumentDistributionList = CG::BasicTypes::TArray<CG::TN_Instrument_Base::ATN_Instrument_Base_C*>(); // Clear the backup list
				Print("Restored Original Racket Distribution, to avoid crash!");
				tn_patchedRacketList = false;
			}
		}
	}
}


void Tennis_Scrambler_SpawnTarget(CG::ScrambleEvent_Base::AScrambleEvent_Base_C* actorClass)
{
	if (TennisManagerinstance != nullptr)
	{
		auto scrambler = TennisManagerinstance->Scrambler;
		if (scrambler != nullptr)
		{
			auto loc = scrambler->ValidSpawnLocations;
			int locCount = loc.Count();

			if (locCount > 0)
			{
				int attempts = 0;
				int maxAttempts = locCount; // To prevent infinite loops in case all locations are disabled

				while (attempts < maxAttempts)
				{
					// Pick a random location index
					int randomIndex = rand() % locCount;
					auto location = loc[randomIndex];

					// Check if the location is disabled
					if (!scrambler->DisabledSpawnLocations.Contains(location))
					{
						if (scrambler->MaxActiveTargets == scrambler->ActiveTargets.Count())
						{
							scrambler->MaxActiveTargets++;
						}
						scrambler->SpawnTarget(location, actorClass);
						scrambler->DisabledSpawnLocations.Add(location);
						return;
					}

					attempts++;
				}

				// If no valid location is found after maxAttempts
				DebugPrint("All locations are disabled! No spawn will occur.");
			}
		}
	}
}

void Tennis_Scrambler_Set_RandomBalls(CG::BasicTypes::TArray<CG::TN_Ball_Base::ATN_Ball_Base_C*> items)
{
	if (TennisManagerinstance != nullptr)
	{
		auto scrambler = TennisManagerinstance->Scrambler;
		if (scrambler != nullptr)
		{
			auto default_item = Get_Tennis_Ball(Tennis_Balls::TennisBall).first;
			if (!tn_patchedBallList)
			{
				OriginalBallDistributionList = scrambler->BallDistibutionList;
				// print the original list
				for (int32_t i = 0; i < OriginalBallDistributionList.Count(); ++i)
				{
					auto item = OriginalBallDistributionList[i];
					DebugPrint("Original Ball Distribution List: " + item->GetFullName());
				}
				DebugPrint("Clearing BallDistibutionList which has : " + std::to_string(scrambler->BallDistibutionList.Count()) + " Balls Registered!");
				scrambler->BallDistibutionList = CG::BasicTypes::TArray<CG::TN_Ball_Base::ATN_Ball_Base_C*>();
				tn_patchedBallList = true;
			}

			if (!scrambler->BallDistibutionList.Contains(default_item))
			{
				scrambler->BallDistibutionList.Add(default_item);
			}

			for (int32_t i = 0; i < items.Count(); ++i)
			{
				auto item = items[i];

				if (!scrambler->BallDistibutionList.Contains(item))
				{
					scrambler->BallDistibutionList.Add(item);
				}
			}
			for (int32_t i = 0; i < scrambler->BallDistibutionList.Count(); ++i)
			{
				auto item = scrambler->BallDistibutionList[i];
				DebugPrint("Modified Ball Distribution List: " + item->GetFullName());
			}
		}
	}
}

void Tennis_Scrambler_Set_RandomRackets(CG::BasicTypes::TArray<CG::TN_Instrument_Base::ATN_Instrument_Base_C*> items)
{
	if (TennisManagerinstance != nullptr)
	{
		auto scrambler = TennisManagerinstance->Scrambler;
		if (scrambler != nullptr)
		{
			auto default_item = Get_Tennis_Racket(Tennis_Rackets::TennisRacket).first;
			if (!tn_patchedRacketList)
			{
				OriginalInstrumentDistributionList = scrambler->InstrumentDistibutionList;
				for (int32_t i = 0; i < OriginalInstrumentDistributionList.Count(); ++i)
				{
					auto item = OriginalInstrumentDistributionList[i];
					DebugPrint("Original Instrument Distribution List: " + item->GetFullName());
				}
				DebugPrint("Clearing InstrumentDistibutionList which has : " + std::to_string(scrambler->InstrumentDistibutionList.Count()) + " Rackets Registered!");
				scrambler->InstrumentDistibutionList = CG::BasicTypes::TArray<CG::TN_Instrument_Base::ATN_Instrument_Base_C*>();
				tn_patchedRacketList = true;
				ScheduleMethod(Restore_Scrambler_RacketDistribution, 60);
			}

			if (!scrambler->InstrumentDistibutionList.Contains(default_item))
			{
				scrambler->InstrumentDistibutionList.Add(default_item);
			}

			for (int32_t i = 0; i < items.Count(); ++i)
			{
				auto item = items[i];
				if (!scrambler->InstrumentDistibutionList.Contains(item))
				{
					scrambler->InstrumentDistibutionList.Add(item);
				}
			}
			// dump the newly modified list
			for (int32_t i = 0; i < scrambler->InstrumentDistibutionList.Count(); ++i)
			{
				auto item = scrambler->InstrumentDistibutionList[i];
				DebugPrint("Modified Instrument Distribution List: " + item->GetFullName());
			}
		}
	}
}

void tn_racket_set(const std::string& ConsoleArgs)
{
	if (ConsoleArgs == "?")
	{
		std::string allRackets = "Available Tennis Rackets: ";
		for (int32_t i = 0; i <= static_cast<int32_t>(Tennis_Rackets::TennisRacket_Upgrade01); i++)
		{
			Tennis_Rackets Racket = static_cast<Tennis_Rackets>(i);
			allRackets += Get_Tennis_Racket(Racket).second + ", ";
		}
		if (allRackets.length() > 2) // Ensure there is something to pop
		{
			allRackets.pop_back(); // Remove trailing comma
			allRackets.pop_back();
		}
		Print(allRackets);
		return;
	}

	// Split the console argument into an array using ',' as the delimiter
	std::vector<std::string> SelectedRacketNames;
	std::string delimiter = ",";
	size_t pos = 0;
	std::string token;
	std::string tempArgs = ConsoleArgs;

	while ((pos = tempArgs.find(delimiter)) != std::string::npos) {
		token = tempArgs.substr(0, pos);
		SelectedRacketNames.push_back(token);
		tempArgs.erase(0, pos + delimiter.length());
	}
	SelectedRacketNames.push_back(tempArgs); // Add last part after the delimiter

	// Convert all racket names to lowercase for case-insensitive matching
	std::transform(SelectedRacketNames.begin(), SelectedRacketNames.end(), SelectedRacketNames.begin(),
		[](std::string& s) {
			std::transform(s.begin(), s.end(), s.begin(), ::tolower);
			return s;
		});

	std::vector<Tennis_Rackets> SelectedRackets;
	std::vector<std::string> MatchedRackets;

	// Iterate through the selected rackets
	for (const std::string& RacketName : SelectedRacketNames)
	{
		for (int32_t i = 0; i <= static_cast<int32_t>(Tennis_Rackets::TennisRacket_Upgrade01); i++)
		{
			Tennis_Rackets Racket = static_cast<Tennis_Rackets>(i);
			std::string RacketEnumName = Get_Tennis_Racket(Racket).second;
			std::transform(RacketEnumName.begin(), RacketEnumName.end(), RacketEnumName.begin(), ::tolower);

			// Check if the RacketEnumName contains the RacketName
			if (RacketEnumName.find(RacketName) != std::string::npos)
			{
				SelectedRackets.push_back(Racket);
				MatchedRackets.push_back(Get_Tennis_Racket(Racket).second);
				break;
			}
		}
	}

	// Print all matched rackets
	if (!MatchedRackets.empty())
	{
		std::string matched = "Selected Tennis Rackets: ";
		for (const std::string& racket : MatchedRackets)
		{
			matched += racket + ", ";
		}
		if (matched.length() > 2) // Ensure there is something to pop
		{
			matched.pop_back(); // Remove trailing comma
			matched.pop_back();
		}
		Print(matched);
	}

	CG::BasicTypes::TArray<CG::TN_Instrument_Base::ATN_Instrument_Base_C*> racketClasses;
	for (const Tennis_Rackets& racket : SelectedRackets)
	{
		CG::TN_Instrument_Base::ATN_Instrument_Base_C* racketClass = Get_Tennis_Racket(racket).first;
		if (racketClass != nullptr)
		{
			racketClasses.Add(racketClass);
		}
	}
	Tennis_Scrambler_Set_RandomRackets(racketClasses);
}


void tn_ball_set(const std::string& ConsoleArgs)
{
	if (ConsoleArgs == "?")
	{
		std::string allballs = "Available Tennis Balls: ";
		for (int32_t i = 0; i <= static_cast<int32_t>(Tennis_Balls::Wiffleball); i++)
		{
			Tennis_Balls ball = static_cast<Tennis_Balls>(i);
			allballs += Get_Tennis_Ball(ball).second + ", ";
		}
		if (allballs.length() > 2) // Ensure there is something to pop
		{
			allballs.pop_back(); // Remove trailing comma
			allballs.pop_back();
		}
		Print(allballs);
		return;
	}

	// Split the console argument into an array using ',' as the delimiter
	std::vector<std::string> SelectedBallNames;
	std::string delimiter = ",";
	size_t pos = 0;
	std::string token;
	std::string tempArgs = ConsoleArgs;

	while ((pos = tempArgs.find(delimiter)) != std::string::npos) {
		token = tempArgs.substr(0, pos);
		SelectedBallNames.push_back(token);
		tempArgs.erase(0, pos + delimiter.length());
	}
	SelectedBallNames.push_back(tempArgs); // Add last part after the delimiter

	// Convert all ball names to lowercase for case-insensitive matching
	std::transform(SelectedBallNames.begin(), SelectedBallNames.end(), SelectedBallNames.begin(),
		[](std::string& s) {
			std::transform(s.begin(), s.end(), s.begin(), ::tolower);
			return s;
		});

	std::vector<Tennis_Balls> SelectedBalls;
	std::vector<std::string> MatchedBalls;

	// Iterate through the selected balls
	for (const std::string& ballName : SelectedBallNames)
	{
		for (int32_t i = 0; i <= static_cast<int32_t>(Tennis_Balls::Wiffleball); i++)
		{
			Tennis_Balls ball = static_cast<Tennis_Balls>(i);
			std::string ballEnumName = Get_Tennis_Ball(ball).second;
			std::transform(ballEnumName.begin(), ballEnumName.end(), ballEnumName.begin(), ::tolower);

			// Check if the ballEnumName contains the ballName
			if (ballEnumName.find(ballName) != std::string::npos)
			{
				SelectedBalls.push_back(ball);
				MatchedBalls.push_back(Get_Tennis_Ball(ball).second);
				break;
			}
		}
	}

	// Print all matched balls
	if (!MatchedBalls.empty())
	{
		std::string matched = "Selected Tennis Balls: ";
		for (const std::string& ball : MatchedBalls)
		{
			matched += ball + ", ";
		}
		if (matched.length() > 2) // Ensure there is something to pop
		{
			matched.pop_back(); // Remove trailing comma
			matched.pop_back();
		}
		Print(matched);
	}

	CG::BasicTypes::TArray<CG::TN_Ball_Base::ATN_Ball_Base_C*> ballClasses;
	for (const Tennis_Balls& ball : SelectedBalls)
	{
		CG::TN_Ball_Base::ATN_Ball_Base_C* ballClass = Get_Tennis_Ball(ball).first;
		if (ballClass != nullptr)
		{
			ballClasses.Add(ballClass);
		}
	}
	Tennis_Scrambler_Set_RandomBalls(ballClasses);
}

void tn_spawn_scrambleevent(const std::string& ConsoleArg)
{
	if (ConsoleArg == "?")
	{
		std::string allScramblers = "Available Tennis Scramblers Events: ";
		for (int32_t i = 0; i <= static_cast<int32_t>(Tennis_Scrambler::TennisRacket); i++)
		{
			Tennis_Scrambler scrambler = static_cast<Tennis_Scrambler>(i);
			allScramblers += Get_Tennis_scramble_event(scrambler).second + ", ";
		}
		if (allScramblers.length() > 2) // Ensure there is something to pop
		{
			allScramblers.pop_back(); // Remove trailing comma
			allScramblers.pop_back();
		}
		Print(allScramblers);
		return;
	}

	// Convert the argument to lowercase for case-insensitive matching
	std::string selectedScrambleName = ConsoleArg;
	std::transform(selectedScrambleName.begin(), selectedScrambleName.end(), selectedScrambleName.begin(), ::tolower);

	Tennis_Scrambler selectedScrambleEvent;
	std::string matchedScramble;
	bool found = false;

	// Iterate through the scramblers to find a match
	for (int32_t i = 0; i <= static_cast<int32_t>(Tennis_Scrambler::TennisRacket); i++)
	{
		Tennis_Scrambler scrambleEvent = static_cast<Tennis_Scrambler>(i);
		std::string scrambleEnumName = Get_Tennis_scramble_event(scrambleEvent).second;
		std::transform(scrambleEnumName.begin(), scrambleEnumName.end(), scrambleEnumName.begin(), ::tolower);

		// Check if the scrambleEnumName contains the selectedScrambleName
		if (scrambleEnumName.find(selectedScrambleName) != std::string::npos)
		{
			selectedScrambleEvent = scrambleEvent;
			matchedScramble = Get_Tennis_scramble_event(scrambleEvent).second;
			found = true;
			break;
		}
	}

	// Print the matched scrambler
	if (found)
	{
		Print("Selected Tennis Scrambler Event: " + matchedScramble);
		CG::ScrambleEvent_Base::AScrambleEvent_Base_C* scramblerClass = Get_Tennis_scramble_event(selectedScrambleEvent).first;
		if (scramblerClass != nullptr)
		{
			Tennis_Scrambler_SpawnTarget(scramblerClass);
		}
	}
	else
	{
		Print("No matching tennis scrambler event found.");
	}
}



CG::Engine::UGameplayStatics* GetStatics()
{
	if (statics != nullptr) return statics;
	else
	{
		auto instance = CG::CoreUObject::UObject::FindObjects <CG::Engine::UGameplayStatics>()[0];
		if (instance != nullptr)
		{
			statics = instance;
			return instance;
		}
	}
	return nullptr;
}

uintptr_t GetBaseAddress(const std::wstring& moduleName)
{
	return  reinterpret_cast<uintptr_t>(GetModuleHandleW(moduleName.c_str()));
}

uintptr_t GetBaseAddress()
{
	return GetBaseAddress(L"SportsScramble-Win64-Shipping.exe");
}

uintptr_t GetOffset(uintptr_t address)
{
	return address - GetBaseAddress();
}

std::string bool_as_text(bool b) {
	std::stringstream converter;
	converter << std::boolalpha << b; // flag boolalpha calls converter.setf(std::ios_base::boolalpha)
	return converter.str();
}

// Function to convert a string argument to a float
float ConvertToFloat(const std::string& str) {
	try {
		return std::stof(str);
	}
	catch (const std::invalid_argument& e) {
		std::cerr << "Invalid argument: " << e.what() << std::endl;
		return 0.0f;
	}
	catch (const std::out_of_range& e) {
		std::cerr << "Out of range: " << e.what() << std::endl;
		return 0.0f;
	}
}


void DebugPrint(const std::string& text) {
	if (DebugMessages) {
		ConsoleTools::ConsoleWrite(text);
	}
}

CG::CoreUObject::UObject* SpawnObject(CG::CoreUObject::UObject* ObjectClass, class CG::CoreUObject::UObject* Outer)
{

	if (GetStatics() == nullptr)
	{
		DebugPrint("Failed to find UGameplayStatics.");
		return nullptr;
	}

	if (ObjectClass == nullptr)
	{
		DebugPrint("Failed to spawn object: ObjectClass is null.");
		return nullptr;
	}

	if (Outer == nullptr)
	{
		DebugPrint("Failed to spawn object: Outer is null.");
		return nullptr;
	}

	// Try spawning the object
	auto Object = GetStatics()->STATIC_SpawnObject(ObjectClass, Outer);
	if (Object != nullptr)
	{
		DebugPrint("Object spawned: " + Object->GetFullName());
		return Object;
	}
	else
	{
		DebugPrint("Failed to spawn object: SpawnObject returned null.");
	}
	return nullptr;
}



void Print(const std::string& text)
{
	ConsoleTools::ConsoleWrite(text);
}

void ReportCustomEvent(const std::string& funcname, bool blocked = false, bool modified = false) {
	if (!LoggerActive) return;

	std::string logMessage = funcname;
	if (blocked) {
		logMessage += " [BLOCKED]";
	}

	if (modified) {
		logMessage += " [MODIFIED]";
	}

	Print(logMessage);
}


void ToggleProcLogger()
{
	LoggerActive = !LoggerActive;
	Print("Process Event Logger is now " + bool_as_text(LoggerActive));
}

void ToggleDebugLogs()
{
	DebugMessages = !DebugMessages;
	Print("Debug Messages are now " + bool_as_text(DebugMessages));
}

void MaxBoundaries(CG::ScramPlayerBoundary_BP::AScramPlayerBoundary_BP_C* PlayerBoundaryInstance) {
	if (!PlayerBoundaryInstance) {
		DebugPrint("Invalid AScramPlayerBoundary instance provided to MaxBoundaries. Exiting function.");
		return; // Check if the instance is valid
	}

	bool invoke = false;
	// Check each boolean property and set to true if not already true
	if (!PlayerBoundaryInstance->DebugMinimumPlayArea) {
		DebugPrint("DebugMinimumPlayArea is not enabled. Setting to true.");
		PlayerBoundaryInstance->DebugMinimumPlayArea = true;
		invoke = true;
	}

	if (!PlayerBoundaryInstance->DebugOverrideLocalPlayBox) {
		DebugPrint("DebugOverrideLocalPlayBox is not enabled. Setting to true.");
		PlayerBoundaryInstance->DebugOverrideLocalPlayBox = true;
		invoke = true;
	}

	if (!PlayerBoundaryInstance->OverridePlayArea) {
		DebugPrint("OverridePlayArea is not enabled. Setting to true.");
		PlayerBoundaryInstance->OverridePlayArea = true;
		invoke = true;
	}

	if (!PlayerBoundaryInstance->HazardLineVisible) {
		DebugPrint("HazardLineVisible is not enabled. Setting to true.");
		PlayerBoundaryInstance->HazardLineVisible = true;
		invoke = true;
	}

	if (!PlayerBoundaryInstance->DebugHazardScaleEnabled) {
		DebugPrint("DebugHazardScaleEnabled is not enabled. Setting to true.");
		PlayerBoundaryInstance->DebugHazardScaleEnabled = true;
		invoke = true;
	}

	// Check and set each float property to FLT_MAX if not already set
	if (PlayerBoundaryInstance->PlayAreaWidthOverride != FLT_MAX) {
		DebugPrint("PlayAreaWidthOverride is not at maximum (" + std::to_string(PlayerBoundaryInstance->PlayAreaWidthOverride) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->PlayAreaWidthOverride = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->PlayAreaLengthOverride != FLT_MAX) {
		DebugPrint("PlayAreaLengthOverride is not at maximum (" + std::to_string(PlayerBoundaryInstance->PlayAreaLengthOverride) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->PlayAreaLengthOverride = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->BaselineMarginOverride != FLT_MAX) {
		DebugPrint("BaselineMarginOverride is not at maximum (" + std::to_string(PlayerBoundaryInstance->BaselineMarginOverride) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->BaselineMarginOverride = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->HazardLineHeight != FLT_MAX) {
		DebugPrint("HazardLineHeight is not at maximum (" + std::to_string(PlayerBoundaryInstance->HazardLineHeight) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->HazardLineHeight = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->HazardLineBuffer != FLT_MAX) {
		DebugPrint("HazardLineBuffer is not at maximum (" + std::to_string(PlayerBoundaryInstance->HazardLineBuffer) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->HazardLineBuffer = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->HazardEdgeIncrement != FLT_MAX) {
		DebugPrint("HazardEdgeIncrement is not at maximum (" + std::to_string(PlayerBoundaryInstance->HazardEdgeIncrement) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->HazardEdgeIncrement = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->DebugHazardScaleRateX != FLT_MAX) {
		DebugPrint("DebugHazardScaleRateX is not at maximum (" + std::to_string(PlayerBoundaryInstance->DebugHazardScaleRateX) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->DebugHazardScaleRateX = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->DebugHazardScaleRateY != FLT_MAX) {
		DebugPrint("DebugHazardScaleRateY is not at maximum (" + std::to_string(PlayerBoundaryInstance->DebugHazardScaleRateY) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->DebugHazardScaleRateY = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->DebugHazardScaleCap != FLT_MAX) {
		DebugPrint("DebugHazardScaleCap is not at maximum (" + std::to_string(PlayerBoundaryInstance->DebugHazardScaleCap) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->DebugHazardScaleCap = FLT_MAX;
		invoke = true;
	}

	if (invoke)
	{
		PlayerBoundaryInstance->ResetHazardLine();
	}
}


void AdjustPlayerArea(CG::ScramPlayer_BP::AScramPlayer_BP_C* instance) {
	if (!instance) {
		DebugPrint("Invalid instance provided to AdjustPlayerArea. Exiting function.");
		return; // Check if the instance is valid
	}

	if (instance->FadedOut)
	{
		instance->FadedOut = false;
		DebugPrint("FadedOut is enabled. Disabling it!!");
	}

	// Check and set OutOfBoundaryTimeLimit to FLT_MAX if not already set
	if (instance->OutOfBoundaryTimeLimit != FLT_MAX) {
		DebugPrint("OutOfBoundaryTimeLimit is not at maximum (" + std::to_string(instance->OutOfBoundaryTimeLimit) + "). Setting to FLT_MAX.");
		instance->OutOfBoundaryTimeLimit = FLT_MAX;
	}

	// Check and set ReturnAreaMinimumWidth to FLT_MAX if not already set
	if (instance->ReturnAreaMinimumWidth != FLT_MAX) {
		DebugPrint("ReturnAreaMinimumWidth is not at maximum (" + std::to_string(instance->ReturnAreaMinimumWidth) + "). Setting to FLT_MAX.");
		instance->ReturnAreaMinimumWidth = FLT_MAX;
	}

	// Check and set ReturnAreaLateralMargin to FLT_MAX if not already set
	if (instance->ReturnAreaLateralMargin != FLT_MAX) {
		DebugPrint("ReturnAreaLateralMargin is not at maximum (" + std::to_string(instance->ReturnAreaLateralMargin) + "). Setting to FLT_MAX.");
		instance->ReturnAreaLateralMargin = FLT_MAX;
	}

	// Check and set ReturnAreaBackMargin to FLT_MAX if not already set
	if (instance->ReturnAreaBackMargin != FLT_MAX) {
		DebugPrint("ReturnAreaBackMargin is not at maximum (" + std::to_string(instance->ReturnAreaBackMargin) + "). Setting to FLT_MAX.");
		instance->ReturnAreaBackMargin = FLT_MAX;
	}

	// Check and set ReturnAreaFrontMargin to FLT_MAX if not already set
	if (instance->ReturnAreaFrontMargin != FLT_MAX) {
		DebugPrint("ReturnAreaFrontMargin is not at maximum (" + std::to_string(instance->ReturnAreaFrontMargin) + "). Setting to FLT_MAX.");
		instance->ReturnAreaFrontMargin = FLT_MAX;
	}

	// Check and set ReturnPointRadius to FLT_MAX if not already set
	if (instance->ReturnPointRadius != FLT_MAX) {
		DebugPrint("ReturnPointRadius is not at maximum (" + std::to_string(instance->ReturnPointRadius) + "). Setting to FLT_MAX.");
		instance->ReturnPointRadius = FLT_MAX;
	}

	// Check and disable CheckPermittedArea if enabled
	if (instance->CheckPermittedArea) {
		DebugPrint("CheckPermittedArea is enabled. Disabling it.");
		instance->CheckPermittedArea = false;
	}

	instance->PlayerExitBoundary = CG::BasicTypes::UScriptMulticastDelegate();

}




void AdjustTriggerInstance(CG::SportsScramble::AScramPlayerTrigger* instance) {
	if (!instance) {
		DebugPrint("Invalid instance provided to AdjustTriggerInstance. Exiting function.");
		return; // Check if the instance is valid
	}

	// Check and set Length to FLT_MAX if not already set
	if (instance->Length != FLT_MAX) {
		DebugPrint("Length is not at maximum (" + std::to_string(instance->Length) + "). Setting to FLT_MAX.");
		instance->Length = FLT_MAX;
	}

	// Check and set Width to FLT_MAX if not already set
	if (instance->Width != FLT_MAX) {
		DebugPrint("Width is not at maximum (" + std::to_string(instance->Width) + "). Setting to FLT_MAX.");
		instance->Width = FLT_MAX;
	}
}



void ToggleDebugMenu() {
	auto TargetClass = CG::CoreUObject::UObject::FindObjects<CG::FrontEndManager::AFrontEndManager_C>();
	if (!TargetClass.empty()) {
		for (auto& mods : TargetClass) {
			if (mods != nullptr) {
				mods->ToggleDebugMenu();
			}
		}
	}
}

void CreateDebugMenu() {
	auto TargetClass = CG::CoreUObject::UObject::FindObjects<CG::FrontEndManager::AFrontEndManager_C>();
	if (!TargetClass.empty()) {
		for (auto& mods : TargetClass) {
			if (mods != nullptr) {
				mods->CreateDebugMenu();
			}
		}
	}
}

void PatchPlayerRestrictions()
{
	auto TargetClass = CG::CoreUObject::UObject::FindObjects <CG::ScramPlayer_BP::AScramPlayer_BP_C>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					AdjustPlayerArea(mods);
				}
			}
		}
	}
}



void DestroyCameraBlocker()
{
	auto TargetClass = CG::CoreUObject::UObject::FindObjects<CG::Engine::ACameraBlockingVolume>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					DebugPrint("Destroyed a Camera Blocker!");
					mods->K2_DestroyActor();
				}
			}
		}
	}
}


void DestroyBlockingVolume() {

	auto TargetClass = CG::CoreUObject::UObject::FindObjects<CG::Engine::ABlockingVolume>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					DebugPrint("Destroyed a Blocking Volume!");
					mods->K2_DestroyActor();
				}
			}
		}
	}
}




void FuckCameraCovers() {
	auto TargetClass = CG::CoreUObject::UObject::FindObjects<CG::ScramCameraCover_BP::AScramCameraCover_BP_C>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					DebugPrint("Destroyed a Camera Cover!");
					mods->K2_DestroyActor();
				}
			}
		}
	}
}


void ExpandBoundsToMakeTriggerShutTheFuckUp() {
	auto TargetClass = CG::CoreUObject::UObject::FindObjects<CG::SportsScramble::AScramPlayerTrigger>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					AdjustTriggerInstance(mods);
				}
			}
		}
	}
}
void DieGodFuckingDamnBoundaries() {
	auto TargetClass = CG::CoreUObject::UObject::FindObjects<CG::ScramPlayerBoundary_BP::AScramPlayerBoundary_BP_C>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					MaxBoundaries(mods);
				}
			}
		}
	}
}

void STOPANNOYINGME() {
	bool bShouldRemove = true; // Define and initialize the bool variable
	auto TargetClass = CG::CoreUObject::UObject::FindObjects<CG::CenterReturnWall::ACenterReturnWall_C>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					mods->DisableWall = true;
					mods->RemoveGameElement(&bShouldRemove); // Pass the address of the bool variable
					mods->K2_DestroyActor();
					DebugPrint("Destroyed a CenterReturnWall instance");
				}
			}
		}
	}
}






void Set_AI_Score(int32_t score) {
	if (TennisManagerinstance != nullptr) {
		TennisManagerinstance->ScorePlayer2 = score;
		auto helper = TennisManagerinstance->LocalHelper;
		if (helper != nullptr)
		{
			helper->ScorePlayer2 = score;
		}
		Print("Player Score set to " + std::to_string(TennisManagerinstance->ScorePlayer1));
		Print("AI Score Currently is " + std::to_string(TennisManagerinstance->ScorePlayer2));
	}
}

void Set_Player_Score(int32_t score) {
	if (TennisManagerinstance != nullptr) {
		TennisManagerinstance->ScorePlayer1 = score;
		auto helper = TennisManagerinstance->LocalHelper;
		if (helper != nullptr)
		{
			helper->ScorePlayer1 = score;
		}
		Print("Player Score set to " + std::to_string(TennisManagerinstance->ScorePlayer1));
		Print("AI Score Currently is " + std::to_string(TennisManagerinstance->ScorePlayer2));
	}
}
void TennisForceAiServe() {
	if (TennisManagerinstance != nullptr) {
		TennisManagerinstance->ServeSwitch(false);
		TennisManagerinstance->Player1Serve = false;
		auto helper = TennisManagerinstance->LocalHelper;
		if (helper != nullptr)
		{
			helper->SwitchServeMessage(false);
		}

	}
}

CG::Engine::ULevel* GetPersistentLevel() {
	auto world = (*CG::Engine::UWorld::GWorld);
	if (world != nullptr) {
		if (world->PersistentLevel != nullptr) {
			return world->PersistentLevel;
		}
	}
	return nullptr;
}


CG::Engine::AWorldSettings* GetWorldSettings() {
	auto world = (*CG::Engine::UWorld::GWorld);
	if (world != nullptr) {
		if (world->PersistentLevel != nullptr) {
			return world->PersistentLevel->WorldSettings;
		}
	}
	return nullptr;
}

CG::Engine::ULocalPlayer* GetActiveLocalPlayer() {
	auto world = (*CG::Engine::UWorld::GWorld);
	if (world != nullptr && world->OwningGameInstance != nullptr && world->OwningGameInstance->LocalPlayers.Count() > 0) {
		auto localPlayer = world->OwningGameInstance->LocalPlayers[0];
		if (localPlayer != nullptr && localPlayer->PlayerController != nullptr) {
			return localPlayer;
		}
	}
	return nullptr;
}

CG::Engine::APlayerController* GetActivePlayerController() {
	auto LocalPlayer = GetActiveLocalPlayer();
	if (LocalPlayer != nullptr) {
		return LocalPlayer->PlayerController;
	}
	return nullptr;
}

void ToggleTennisScrambler(std::vector<std::string> args = {})
{
	// If "?" is provided, print the help message and return
	if (!args.empty() && std::find(args.begin(), args.end(), "?") != args.end())
	{
		Print("Usage: tn_noscrambler [options]");
		Print("Options:");
		Print("  ball       - Toggle removing balls.");
		Print("  racket     - Toggle removing rackets.");
		Print("  net        - Toggle removing net raises.");
		Print("  charge     - Toggle removing Accellerator Rounds.");
		Print("  all        - Remove all types.");
		Print("  ?          - Show this help message.");
		return;
	}

	// If arguments are provided, set the flags
	if (!args.empty())
	{
		for (const std::string& choice : args)
		{
			if (choice == "ball")
			{
				tn_scrambler_no_balls = !tn_scrambler_no_balls;
			}
			else if (choice == "racket")
			{
				tn_scrambler_no_rackets = !tn_scrambler_no_rackets;
			}
			else if (choice == "net")
			{
				tn_scrambler_no_net_raise = !tn_scrambler_no_net_raise;
			}
			else if (choice == "charge")
			{
				tn_scrambler_no_charged_shot = !tn_scrambler_no_charged_shot;
			}
			else if (choice == "all")
			{
				tn_scrambler_no_balls = true;
				tn_scrambler_no_rackets = true;
				tn_scrambler_no_net_raise = true;
				tn_scrambler_no_charged_shot = true;
			}
			else
			{
				Print("[Scrambler Patcher] : Invalid argument: " + choice);
			}
		}

		// Determine the new state of RemoveScrambler based on active flags
		if (tn_scrambler_no_balls || tn_scrambler_no_rackets || tn_scrambler_no_net_raise || tn_scrambler_no_charged_shot)
		{
			tn_PatchScrambler = true;
			Print("[Scrambler Patcher] : The Scrambler Will be Modified now!");
			Print(tn_scrambler_no_balls ? "[Scrambler Patcher] : Currently removing balls." : "[Scrambler Patcher] : Not removing balls.");
			Print(tn_scrambler_no_rackets ? "[Scrambler Patcher] : Currently removing rackets." : "[Scrambler Patcher] : Not removing rackets.");
			Print(tn_scrambler_no_net_raise ? "[Scrambler Patcher] : Currently removing net raises." : "[Scrambler Patcher] : Not removing net raises.");
			Print(tn_scrambler_no_charged_shot ? "[Scrambler Patcher] : Currently removing Accellerator Rounds." : "[Scrambler Patcher] : Not removing Accellerator Rounds.");
		}
		else
		{
			tn_PatchScrambler = false;
			Print("[Scrambler Patcher ] : The Scrambler is Game Original now.");
		}
	}
	else
	{
		if (tn_scrambler_no_balls || tn_scrambler_no_rackets || tn_scrambler_no_net_raise || tn_scrambler_no_charged_shot)
		{
			tn_PatchScrambler = !tn_PatchScrambler;
			if (tn_PatchScrambler)
			{
				Print("[Scrambler Patcher] : No scrambler is now Enabled.");
				Print(tn_scrambler_no_balls ? "[Scrambler Patcher] : Currently removing balls." : "[Scrambler Patcher] : Not removing balls.");
				Print(tn_scrambler_no_rackets ? "[Scrambler Patcher] : Currently removing rackets." : "[Scrambler Patcher] : Not removing rackets.");
				Print(tn_scrambler_no_net_raise ? "[Scrambler Patcher] : Currently removing net raises." : "[Scrambler Patcher] : Not removing net raises.");
				Print(tn_scrambler_no_charged_shot ? "[Scrambler Patcher] : Currently removing Accellerator Rounds." : "[Scrambler Patcher] : Not removing Accellerator Rounds.");

			}
			else
			{
				Print("[Scrambler Patcher] : The Scrambler is Game Original now.");
			}
		}
		else
		{
			Print("Specify A Scrambler Type to deactivate!.");
		}
	}
}




void BigBallModeFunc(CG::TN_Ball_Base::ATN_Ball_Base_C* instance) {
	if (instance == nullptr) return;
	auto original = CG::CoreUObject::FVector(1, 1, 1);
	auto scaled = CG::CoreUObject::FVector(max(Scale_Adjuster, 0.2f), max(Scale_Adjuster, 0.2f), max(Scale_Adjuster, 0.2f));
	auto root = instance->RootComponent;
	if (root == nullptr) return;

	if (BigBallMode) {
		if (root->RelativeScale3D != scaled) {
			root->RelativeScale3D = scaled;
		}
	}
	else {
		if (root->RelativeScale3D != original) {
			root->RelativeScale3D = original;
		}
	}
}





void InitializeCheatManagerAndConsole(CG::Engine::APlayerController* PlayerController, CG::Engine::UEngine* Engine)
{
	if (!Engine || !PlayerController)
	{
		if (!Engine)
		{
			DebugPrint("UEngine is invalid!");
		}
		if (!PlayerController)
		{
			DebugPrint("APlayerController is invalid!");
		}
		return;
	}

	bool Cheat_spawned = false;
	bool Console_spawned = false;

	// Spawn CheatManager for the PlayerController
	if (!PlayerController->CheatManager && PlayerController->CheatClass)
	{
		if (auto CheatObject = SpawnObject(PlayerController->CheatClass, PlayerController))
		{
			PlayerController->CheatManager = static_cast<CG::Engine::UCheatManager*>(CheatObject);
			if (PlayerController->CheatManager)
			{
				PlayerController->EnableCheats();
				DebugPrint("CheatManager spawned: " + PlayerController->CheatManager->GetFullName());
				Cheat_spawned = true;
			}
		}
	}
	else
	{
		if (PlayerController->CheatManager)
		{
			Cheat_spawned = true;
		}
	}

	// Spawn Console for the GameViewport
	if (Engine->ConsoleClass && Engine->GameViewport && !Engine->GameViewport->ViewportConsole)
	{
		if (auto ConsoleObject = SpawnObject(Engine->ConsoleClass, Engine->GameViewport))
		{
			if (auto ConsoleInstance = static_cast<CG::Engine::UConsole*>(ConsoleObject))
			{
				Engine->GameViewport->ViewportConsole = ConsoleInstance;
				DebugPrint("Console spawned: " + ConsoleInstance->GetFullName());
				Console_spawned = true;
			}
		}
	}
	else
	{
		if (Engine->GameViewport->ViewportConsole)
		{
			Console_spawned = true;
		}
	}

	if (Cheat_spawned && Console_spawned)
	{
		AutoCheatManager = false;
	}
	else
	{
		if (!Cheat_spawned)
		{
			DebugPrint("Failed to spawn CheatManager!");
		}
		if (!Console_spawned)
		{
			DebugPrint("Failed to spawn ViewPort Console!");
		}
		AutoCheatManager = true;
	}
}

CG::Engine::UEngine* GetEngine(int instance = 0)
{
	auto engines = CG::CoreUObject::UObject::FindObjects<CG::Engine::UEngine>();
	int adjustedIndex = (instance >= engines.size()) ? engines.size() - 1 : instance;

	if (engines.empty() || adjustedIndex < 0 || adjustedIndex >= engines.size())
	{
		Print("Instance index is out of bounds.");
		return nullptr;
	}

	auto engineInstance = engines[adjustedIndex];
	if (engineInstance != nullptr)
	{
		return engineInstance;
	}

	Print("Found engine instance is nullptr.");
	return nullptr;
}



void InitializeCheatManagerAndConsole()
{
	auto engine = GetEngine(3);
	auto player = GetActivePlayerController();
	if (engine != nullptr && player != nullptr)
	{
		InitializeCheatManagerAndConsole(player, engine);
	}
}

void PatchScrambler()
{
	if (TennisManagerinstance != nullptr)
	{
		auto scrambler = TennisManagerinstance->Scrambler;
		if (scrambler != nullptr)
		{
			auto& activeTargets = scrambler->ActiveTargets;
			if (activeTargets.Count() != 0)
			{

				for (int32_t i = activeTargets.Count() - 1; i >= 0; --i)
				{
					auto target = activeTargets[i];
					if (target != nullptr)
					{
						auto info = Identify_Scrambler(target);
						auto targetType = info.type;
						DebugPrint("Found a Scrambler Target of type: " + info.name);

						bool shouldDelete = false;

						if (!tn_PatchScrambler)
						{
							// Stop processing if tennis_no_scrambler becomes false
							break;
						}

						if (tn_scrambler_no_charged_shot && targetType == Tennis_Scrambler::ChargedShot)
						{
							shouldDelete = true;
						}
						else if (tn_scrambler_no_balls && (targetType == Tennis_Scrambler::Baseball ||
							targetType == Tennis_Scrambler::Basketball ||
							targetType == Tennis_Scrambler::BeachBall ||
							targetType == Tennis_Scrambler::FloppyFish ||
							targetType == Tennis_Scrambler::Frisbee ||
							targetType == Tennis_Scrambler::GolfBall ||
							targetType == Tennis_Scrambler::FishBall ||
							targetType == Tennis_Scrambler::PingPongBall ||
							targetType == Tennis_Scrambler::RandomBall ||
							targetType == Tennis_Scrambler::SoccerBall ||
							targetType == Tennis_Scrambler::SpecificBall ||
							targetType == Tennis_Scrambler::TennisBall))
						{
							shouldDelete = true;
						}
						else if (tn_scrambler_no_rackets && (targetType == Tennis_Scrambler::BatInstrument ||
							targetType == Tennis_Scrambler::GolfClub ||
							targetType == Tennis_Scrambler::CricketBat ||
							targetType == Tennis_Scrambler::PingPongPaddle ||
							targetType == Tennis_Scrambler::PoolNoodle ||
							targetType == Tennis_Scrambler::RandomRacket ||
							targetType == Tennis_Scrambler::SpecificRacket ||
							targetType == Tennis_Scrambler::TennisRacket))
						{
							shouldDelete = true;
						}
						else if (targetType == Tennis_Scrambler::RaiseNet && tn_scrambler_no_net_raise)
						{
							shouldDelete = true;
						}

						if (shouldDelete)
						{
							target->K2_DestroyActor();
							DebugPrint("Removed a Scrambler Target of type: " + info.name);
							activeTargets.RemoveAt(i);
						}
					}
				}
			}
		}
	}
}







void ExecutorThread() {
	while (true) {
		try {
			if (tn_PatchScrambler)
			{
				PatchScrambler();
			}
			if (AutoCheatManager)
			{
				InitializeCheatManagerAndConsole();
			}
			DestroyCameraBlocker();
			DestroyBlockingVolume();
			PatchPlayerRestrictions();
			DieGodFuckingDamnBoundaries();
			ExpandBoundsToMakeTriggerShutTheFuckUp();
			//FuckCameraCovers();
			STOPANNOYINGME();
		}
		catch (...) {}
	}
}


void FillerThread()
{
	FillMaps();
	Print("[Tennis Manager] : Default balls registered: " + std::to_string(GetBallList().Count()));
	Print("[Tennis Manager] : Default rackets registered: " + std::to_string(GetRacketList().Count()));

}





void ToggleDebugMenuCommand() {
	ToggleDebugMenu();
}

void CreateDebugMenuCommand() {
	CreateDebugMenu();
}

void TennisFastBallModeCommand() {
	// create a TArray<> and add the speedball
	CG::BasicTypes::TArray<CG::TN_Ball_Base::ATN_Ball_Base_C*> speedBalls;
	speedBalls.Add(Get_Tennis_Ball(Tennis_Balls::AcceleratorBall).first);
	Tennis_Scrambler_Set_RandomBalls(speedBalls);
	Print("Patched Current Scrambler to spawn Accellerators!");
}



void SlowGameInsteadOfPauseCommand() {
	SlowModeInsteadOfPauseMenu = !SlowModeInsteadOfPauseMenu;
	if (SlowModeInsteadOfPauseMenu) {
		Print("Game will Slow Down instead of pausing now!");
	}
	else {
		Print("Game will work as normal with the pause menu!");
	}
}
void BigBallModeCommand() {
	BigBallMode = !BigBallMode;
	if (BigBallMode) {
		Print("Big Ball Mode Enabled!");
	}
	else {
		Print("Big Ball Mode Disabled!");
	}
}

void Scale_AdjusterCommand(float input) {
	Scale_Adjuster = input;
	Print("Scale Adjuster set to " + std::to_string(Scale_Adjuster));
}





std::vector<std::pair<std::string, Command>> orderedCommands = {
	{"help", {HelpCommand, "[DESC]: This page."}},
	{"toggledebugmenu", {[](std::vector<std::string> args) { ToggleDebugMenuCommand(); }, "[DESC]: Toggles Debug Menu!"}},
	{"spawndebugmenu", {[](std::vector<std::string> args) { CreateDebugMenuCommand(); }, "[DESC]: Creates Debug Menu!"}},
	{"slowmodecheat", {[](std::vector<std::string> args) { SlowGameInsteadOfPauseCommand(); }, "[DESC]: Toggles and enforces a slow mode instead of pause menu!"}},
	{"proclogger", {[](std::vector<std::string> args) { ToggleProcLogger(); }, "[DESC]: Toggle Process Event Logger!"}},
	{"debuglog", {[](std::vector<std::string> args) { ToggleDebugLogs(); }, "[DESC]: Toggle Debug Messages!"}},
	{"enablecheats", {[](std::vector<std::string> args) { InitializeCheatManagerAndConsole(); }, "[DESC]: Enable CheatManager and Console!"}},
	{	"tn_noscrambler", {[](std::vector<std::string> args) { ToggleTennisScrambler(args); }, "[DESC]: Toggles tennis scrambler removal. Options: ball, racket, netraise, all, ?"}},
	{"tn_ai_serve", {[](std::vector<std::string> args) { TennisForceAiServe(); }, "[DESC]: Make the AI serve the ball in tennis!"}},
	{"tn_bigball", {[](std::vector<std::string> args) { BigBallModeCommand(); }, "[DESC]: Toggles and enforces all tennis balls to be triple their size!"}},
	{"tn_ballsize", {[](std::vector<std::string> args) { if (!args.empty()) Scale_AdjusterCommand(ConvertToFloat(args[0])); }, "<float> [DESC]: Control how much the ball will increase in size!"}},
	{"tn_speedball", {[](std::vector<std::string> args) { TennisFastBallModeCommand(); }, "[DESC]: Sets Current Green Scrambler to be accellerator!"}},
	{"tn_set_rand_balls", {[](std::vector<std::string> args) { if (!args.empty()) tn_ball_set(join(args, ",")); }, "<string> [DESC]: Sets the current Scrambler to spawn the ball type!"}},
	{"tn_set_rand_rackets", {[](std::vector<std::string> args) { if (!args.empty()) tn_racket_set(join(args, ",")); }, "<string> [DESC]: Sets the current Scrambler to spawn the racket type!"}},
	{"tn_spawn_scrambler", {[](std::vector<std::string> args) { if (!args.empty()) tn_spawn_scrambleevent(args[0]); }, "<string> [DESC]: Spawns a determined scrambler event!"}},

};


void HelpCommand(std::vector<std::string> args) {
	Print("Sport Scramble Mod Console Available commands:");
	for (const auto& cmd : orderedCommands) {
		Print(cmd.first + " " + cmd.second.description);
	}
}




// Function to handle console input and execute corresponding commands
void ConsoleInput() {
	for (const auto& cmd : orderedCommands) {
		commandMap[cmd.first] = cmd.second;
	}
	Print("ModConsole Commands:");
	std::string input;
	while (true) {
		std::getline(std::cin, input);  // Use getline to capture the entire line

		// Convert input to lowercase and split it into command and arguments
		std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c) {
			return std::tolower(c);
			});

		std::istringstream iss(input);
		std::vector<std::string> tokens((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());

		if (!tokens.empty()) {
			std::string command = tokens[0];
			std::vector<std::string> args(tokens.begin() + 1, tokens.end());

			auto it = commandMap.find(command);
			if (it != commandMap.end()) {
				it->second.handler(args);  // Call the command handler with arguments
			}
			else {
				Print("Command Not found. Type help for command list.");
			}
		}
	}
}
bool ends_with(const std::string& mainStr,
	const std::string& toMatch) {
	if (mainStr.size() >= toMatch.size() &&
		mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
		return true;
	else
		return false;
}

// Helper function for handling blocking based on function names
bool ShouldBlockFunction(const std::string& func) {
	const std::unordered_set<std::string> blockFuncs = {
		"OnPlayerOutOfBoundary",
		"PlayerExitBoundary",
		"QueuedPlayerOutOfBoundary",
		"EnqueueVignette",
		"ScramCameraCover",
		"ScramCameraCover_BP_C",
		"ScramPlayerBoundary_BP_C",
		"ScramPlayerTrigger"
	};

	for (const auto& blockFunc : blockFuncs) {
		if (func.find(blockFunc) != std::string::npos) {
			return true;
		}
	}

	return false;
}



void HandleTennisBallInstance(CG::CoreUObject::UObject* thiz) {
	auto instance = static_cast<CG::TN_Ball_Base::ATN_Ball_Base_C*>(thiz);
	if (instance) {
		if (Tn_Ball == nullptr)
		{
			Tn_Ball = instance;
			DebugPrint("Initial Ball Type : " + Tn_Ball->GetFullName());
		}
		else if (Tn_Ball != instance)
		{
			Tn_Ball = instance;
			DebugPrint("Updated Ball Type : " + Tn_Ball->GetFullName());
			if (tn_patchedBallList)
			{
				std::async(std::launch::async, Restore_Scrambler_BallDistribution);
				tn_patchedBallList = false;

			}
		}
		std::async(std::launch::async, BigBallModeFunc, instance);
	}
}

// Helper function for handling TennisManager logic
void HandleTennisManager(CG::CoreUObject::UObject* thiz) {
	auto instance = static_cast<CG::ScramSportManagerTennis_Blueprint::AScramSportManagerTennis_Blueprint_C*>(thiz);
	if (TennisManagerinstance == nullptr) {
		TennisManagerinstance = instance;
		DebugPrint("Tennis Manager Instance Captured!");
	}
	else if (TennisManagerinstance != instance) {
		DebugPrint("Tennis Manager Instance Updated!");
		TennisManagerinstance = instance;
		tn_PatchScrambler = false;
		tn_scrambler_no_balls = false;
		tn_scrambler_no_rackets = false;
		tn_scrambler_no_net_raise = false;
		tn_patchedBallList = false;
		tn_patchedRacketList = false;
	}
}

// Helper function for handling ScramPlayerTrigger adjustments
void HandleScramPlayerTrigger(CG::CoreUObject::UObject* thiz, bool& modified) {
	auto instance = static_cast<CG::SportsScramble::AScramPlayerTrigger*>(thiz);
	if (instance) {
		AdjustTriggerInstance(instance);
		modified = true;
	}
}

// Helper function for handling ScramPlayer_BP adjustments
void HandleScramPlayer_BP(CG::CoreUObject::UObject* thiz, bool& modified) {
	auto instance = static_cast<CG::ScramPlayer_BP::AScramPlayer_BP_C*>(thiz);
	if (instance) {
		AdjustPlayerArea(instance);
		modified = true;
	}
}

// Helper function for handling ConstrainToPlayArea
void HandleConstrainToPlayArea(CG::CoreUObject::UObject* thiz, void* parms, bool& modified) {
	auto instance = static_cast<CG::SportsScramble::AScramPlayer*>(thiz);
	auto params = static_cast<CG::SportsScramble::AScramPlayer_ConstrainToPlayArea_Params*>(parms);
	if (instance && params) {
		params->Radius = FLT_MAX;
		DebugPrint("ConstrainToPlayArea Patched!");
		modified = true;
	}
}

// Helper function for handling GetPlayAreaTransform
void HandleGetPlayAreaTransform(CG::CoreUObject::UObject* thiz, void* parms, bool& modified) {
	auto instance = static_cast<CG::SportsScramble::AScramPlayer*>(thiz);
	auto params = static_cast<CG::SportsScramble::AScramPlayer_GetPlayAreaTransform_Params*>(parms);
	if (instance && params) {
		params->ReturnValue.Scale3D = CG::CoreUObject::FVector(FLT_MAX, FLT_MAX, FLT_MAX);
		modified = true;
	}
}

// Helper function for handling SlowModeInsteadOfPauseMenu
void HandlePauseEvent(bool& blocked) {
	auto settings = GetWorldSettings();
	auto Player = GetActivePlayerController();

	if (settings && Player) {
		if (SlowModeInsteadOfPauseMenu) {
			if (!isGameSlowed) {
				BackupPlayerTimeDilation = Player->CustomTimeDilation;
				settings->timeDilation = 0.09f;
				Player->CustomTimeDilation = 3.15f;
				DebugPrint("[Sport Scramble] : Time Slowed!");
				isGameSlowed = true;
			}
			else {
				settings->timeDilation = 1.0f;
				Player->CustomTimeDilation = BackupPlayerTimeDilation;
				isGameSlowed = false;
				DebugPrint("[Sport Scramble] : Time Restored!");
			}
			blocked = true;
		}
		else if (settings->timeDilation != 1.0f) {
			settings->timeDilation = 1.0f;
			Player->CustomTimeDilation = BackupPlayerTimeDilation;
		}
	}
}





// Main Process Event hook
void HkProcessEvent(CG::CoreUObject::UObject* thiz, CG::CoreUObject::UFunction* function, void* parms) {
	if (!thiz || !function || !thiz->Class) {
		return;  // Exit early if invalid
	}

	bool block = false;
	bool modified = false;
	const std::string func = function->GetFullName();

	// Handle blocking based on function names
	if (ShouldBlockFunction(func)) {
		block = true;
	}



	if (func.find("TN_Ball_Base.TN_Ball_Base_C") != std::string::npos)
	{
		HandleTennisBallInstance(thiz);
	}
	else if (func.find("ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C") != std::string::npos) {
		HandleTennisManager(thiz);
	}
	else if (func.find("SportsScramble.ScramPlayerTrigger") != std::string::npos) {
		HandleScramPlayerTrigger(thiz, modified);
	}
	else if (func.find("ScramPlayer_BP.ScramPlayer_BP_C") != std::string::npos) {
		HandleScramPlayer_BP(thiz, modified);
	}
	else if (func == "Function SportsScramble.ScramPlayer.ConstrainToPlayArea") {
		HandleConstrainToPlayArea(thiz, parms, modified);
	}
	else if (func == "Function SportsScramble.ScramPlayer.GetPlayAreaTransform") {
		HandleGetPlayAreaTransform(thiz, parms, modified);
	}
	else if (func.find("ScramPlayerController_BP_C.InpActEvt_Pause_K2Node") != std::string::npos) {
		HandlePauseEvent(block);
	}

	// Report event
	ReportCustomEvent(func, block, modified);

	// Call original ProcessEvent if not blocked
	if (!block) {
		try {
			oProcessEvent(thiz, function, parms);
		}
		catch (...) {}
	}
}




void StartProcessEventHook()
{
	uintptr_t mBaseAddress = GetBaseAddress();
	uintptr_t ProcessEventAddress = mBaseAddress + UObjectProcessEvent_Offset;

	auto peFunc = reinterpret_cast<ProcessEvent>(ProcessEventAddress);
	bool processEventHooked = MH_CreateHook(peFunc, reinterpret_cast<void*>(HkProcessEvent), reinterpret_cast<void**>(&oProcessEvent)) == MH_OK && MH_EnableHook(peFunc) == MH_OK;
	if (processEventHooked)
	{
		DebugPrint("Hooked Object Process Event!");
	}
	else
	{
		Print("Failed to Hook Object Process Event!");
	}

}



DWORD WINAPI MainThread(LPVOID lpReserved)
{
	if (!CG::BasicTypes::InitSdk())
	{
		// TODO: Should handle that
		return FALSE;
	}

	ConsoleTools::ShowConsole();


	bool init_hook = false;
	do
	{
		std::thread Filler(FillerThread);
		Filler.detach();

		std::thread executor(ExecutorThread);
		executor.detach();

		std::thread ProcessEventHookThread(StartProcessEventHook);
		ProcessEventHookThread.detach();

		init_hook = true;
	} while (!init_hook);

	ConsoleInput();
	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hMod);
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		MH_Initialize();
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		//kiero::shutdown();
		break;
	}
	return TRUE;
}