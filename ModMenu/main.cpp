#include <regex>

#include "pch.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK.h"
#include <thread>
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <typeinfo>
#include <thread>
#include <algorithm> // For std::transform
#include <cctype>    // For std::tolower
#include <future>
#include <regex>     // For std::regex_search
#include <thread>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <list>
#include <mutex>

#pragma once
#pragma warning(disable: 4717)
#pragma warning(disable: 4806)
#pragma warning(disable: 305)

typedef void(__thiscall* ProcessEvent)(CG::UObject*, CG::UFunction*, void*);
ProcessEvent oProcessEvent;

std::string bool_as_text(bool b)
{
	std::stringstream converter;
	converter << std::boolalpha << b;   // flag boolalpha calls converter.setf(std::ios_base::boolalpha)
	return converter.str();
}

const std::vector<std::string> ClassNames = {
	"PauseCapsule.PauseCapsule_C",
	"ScrambleEvent_Base.ScrambleEvent_Base_C",
};
const std::vector<std::string> FilterList = {
	"BlueprintUpdateCamera",
	"BlueprintModifyCamera",
	"K2_DestroyActor",
	"BlueprintModifyPostProcess",
	"ReceiveTick",
	"OnMotionControllerUpdated",
	"BlueprintUpdateAnimation",
	"UpdateFunc",
	"OnMoveCompleted",
	"BlueprintUpdateAnimation",
	"OnDeactivate",
	"ReceiveDeactivationAI",
	"OnMotionControllerUpdated",
	"GetCombatStateES",
	"ReceiveTick",
	"OnAudioEnvelopeValueCb",
	"BlueprintUpdateAnimation",
	"OnMovementModeChanged",
	"OnMotionControllerUpdated",
	"BlueprintPostEvaluateAnimation",
	"BlueprintModifyCamera",
	"PerformConditionCheckAI",
	"ReceiveExecuteAI",
	"ReceiveActivationAI",
	"OnActivate",
	"UpdateSpawnManager",
	"RegisterFlashlight",
	"BlueprintModifyCamera",
	"BlueprintModifyPostProcess",
	"UpdateFadeProxy",
	"OnMotionControllerUpdated",
	"OnMovementModeChanged",
	"ReadyToEndMatch",
	"Tick",
	"ReceiveTickAI",
	"PerformConditionCheckAI",
	"OnTick",
	"BlueprintUpdateAnimation",
	"ReceiveTick",
	"AnimGraphNode",
	"OnBuffsReset",
	"ValidateGameProgression",
	"ReceiveInit",
	"OnSynchronizeProperties",
	"PreConstruct",
	"Construct",
	"Destruct",
	"InitializeHUDForPlayer",
	"ReceiveInitCheatManager",
	"EnableCheats",
	"CheatAllowAutoSaving",
	"CheatSetNoDurabilityLoss",
	"ClientSetHUD",
	"ClientVoiceHandshakeComplete",
	"ClientEnableNetworkVoice",
	"ClientCapBandwidth",
	"HandleStartingNewPlayer",
	"ReadyToStartMatch",
	"PlayerCanRestart",
	"FindPlayerStart",
	"ChoosePlayerStart",
	"MustSpectate",
	"SpawnDefaultPawnFor",
	"SpawnDefaultPawnAtTransform",
	"GetDefaultPawnClassForController",
	"PawnAttached",
	"PlayerControllerAttached",
	"Initialize",
	"InitStartSpot",
	"ReceivePossessed",
	"PreApplySkin",
	"PostApplySkin",
	"ClientRestart",
	"OnPawnChanged",
	"ServerAcknowledgePossession",
	"OnApplyGameUserSettings",
	"SetPauseWidgetComponentProgress",
	"OnApplyCheatModes",
	"ClientSetRotation",
	"GetPossibleSkins",
	"GetCorpseCleanupSpawnWalkerClass",
	"InitializeAIByGameMode",
	"UpdateSkinReplicationData",
	"PhysicsVolumeChanged",
	"OnReturnedToPool",
	"ServerReleaseGrapple",
	"SignificanceChange",
	"PawnReturnedToPool",
	"StopLogic",
	"ClearCurrentTarget",
	"OnUpdateValidState",
	"IsPlayerControlled",
	"GetDesiredArchetypeBlueprint",
	"AddInventoryItemList",
	"GetSkinComponentBP",
	"Retune",
	"ResetTuning",
	"TuneObject",
	"OnSetupSection",
	"OnPopulatePage",
	"AddInventoryItemListEntry",
	"AddInventoryItem",
	"BlueprintInitializeAnimation",
	"BlueprintLinkedAnimationLayersInitialized",
	"UserConstructionScript",
	"BlueprintBeginPlay",
	"OnInitialized",
	"ReceiveBeginPlay",
	"OnInventoryAdded",
	"GivenTo",
	"ReturnToInventory",
	"OnCountChanged",
	"OnRep_bRepInsideInventory",
	"GetInventoryOfType",
	"ExecuteUbergraph",
	"OnBuffsReset",
	"OnBuffsReset",
	"GetInventoryAttachPoint",
	"GetInventorySlotGripTransform",
	"InventoryAllowed",
	"AttachInventory",
	"OnAnimationStarted",
	"SetupMaterialParameterCollectionValues",
	"OnMeshHighlightedChanged",
	"ServerShortTimeout",
	"Start Landing Recovery",
	"OnInventoryRemoved",
	"PawnDetached",
	"PlayerControllerDetached",
	"OnNewInventoryItem",
	"OnPlayerDestroyed",
	"ReceiveUnpossessed",
	"OnOwnerEndPlay",
	"ReceiveEndPlay",
	"OnPerceptionStimuliSourceEndPlay",
	"ReceiveDestroyed",
	"SetCurrentInventory",
	"Init",
	"ClientSetCinematicMode",
	"UpdateHandHidden",
	"InitSpawnManager",
	"CE_FullNightMode",
	"ReadyForPlay",
	"RestartLogic",
	"StartLogoMusic",
	"HandWasTeleported",
	"InputDeviceChanged",
	"EndPrePrologue",
	"StartFrontEndMusic",
	"OnSignificanceBinChanged",
	"GetTextValue",
	"Get_Instructions_Text_Text_1",
	"GetValue",
	"Get_Calibration_Image_Brush_1",
	"OnRecenter",
	"OnHMDRecentered",
	"AdvanceBootUp",
	"OnMouseEnter",
	"OnAnimationFinished",
	"SpawnTimerComplete",
	"OnPreviewMouseButtonDown",
	"OnBuffAdded",
	"OnAddedToFocusPath",
	"IsInteractable",
	"OnMouseMove",
	"OnMouseLeave",
	"GetFootstepSound",
	"GetAkComponentByEnum",
	"Received_Notify",
	"CheckPlayerOrientation",
	"OnAIEndPlay",
	"Start",
	"K2_Update",
	"OnInventorySlotContentChanged",
	"OnBackpackContentChanged",
	"OnInventoryCountChanged",
	"SetDurability",
	"OnComponentCollisionSettingsChanged",
	"GetSheathedInventoryMaterial",
	"OnHealthUpdated",
	"OnDoorShut",
	"GetDoorComponent",
	"OnAlarmTimerChanged",
	"AnimNotify_InNoneState",
	"AnimNotify_EnteredBaseAnimState",
	"AnimNotify_EnteredIdleState",
	"ReceivePossess",
	"OnDialogWidgetIsEnabledCallback",
	"ServerAddWeaponAttachment",
	"SetWeaponOwner",
	"WeaponOwnerUpdated",
	"AttachToWeapon",
	"WeaponAttachmentAttached",
	"ModeStoppedFiring",
	"GrabFromInventory",
	"GetGripPoint",
	"PlayGrabbedEffects",
	"ServerUpdateLevelVisibility",
	"BP_StartAnimationRedraw",
	"GetGrappleStateEnumValues",
	"OnPhysicsComponentSleep",
	"OnPhysicsComponentWake",
	"ClientUpdateLevelStreamingStatus",
	"GetGuardPointLocation",
	"IsDefaultBehaviorPatrol",
	"SetPercent",
	"OnMontageStartedEx",
	"GetFireMode",
	"OnLanded",
	"UpdateAvailability",
	"OnCharacterPostSignificance",
	"OnHitReactEnd",
	"OnShoveActorHit",
	"OnOwnerActorHit",
	"OnActorHitCustomThrowPhysics",
	"OnWeaponActorHit",
	"OnComponentHitCustomThrowPhysics",
	"OnComponentHit",
	"CanHitComponentApplyDamage",
	"ServerSetHeldBy_IFC",
	"GetCurrency",
	"OnWeaponClassChanged",
	"Grab",
	"GetInteractionHighlights",
	"OnInteractionHighlightChanged",
	"OnLoaded",
	"BP_FinishAnimationRedraw",
	"AddInteractionHighlight",
	"GetHighlightFeedback",
	"SetIsGrappleMontagePlayingFullyBlended",
	"PreActorSpawn",
	"SetIsGrappleMontagePlaying",
	"OnMontageEndedEx",
	"Hide Notify",
	"BP_HideHealthStamTimer",
	"OnAbort",
	"OnHandBeginOverlap",
	"StopAnimationAction",
	"ReceiveDeactivation",
	"ReceiveActivation",
	"RemoveInteractionHighlight",
	"OnHandEndOverlap",
	"PingOutLight",
	"IsValidInteractionHighlight",
	"GetHighlightHandPoseInfo",
	"GetHighlightHandPose",
	"GetInteractTriggerResistanceCurve",
	"GetBodyMountedInteractLocation",
	"OnSuccess",
	"OnFail_",
	"UpdateHighlight",
	"AnimNotify_IsCompleteIdleFidget",
	"OnInteractPress",
	"OnGripPress",
	"RegisterAnimInteractable_Internal",
	"GetGripFeedback",
	"GetDescription",
	"GetFlavorText",
	"GetInventoryEffectInfo",
	"FormatSalvageEntry",
	"GetDurabilityText",
	"GetDurabilityIndex",
	"UpdateItemInfo",
	"HitReactEnd",
	"PlayAnimationAction",
	"IsValidInventory",
	"AddImpulse",
	"AddAngularImpulseInRadians",
	"GetDisplayName",
	"CanBeLoaded",
	"IsClipEjectedOrChamberOpen",
	"OnInventoryPutInSlotFailed",
	"OnGripRelease",
	"GetThrowInfo",
	"ServerClearHeldBy_IFC",
	"Dropped",
	"OnHandHeldActorChange",
	"OnHeldActorDropped",
	"UnregisterAnimInteractable_Internal",
	"SendInteractPresses_Internal",
	"SetMaxCurveValues_Internal (Finger)",
	"SendMaxCurveValues_Internal",
	"HeldActorChanged",
	"OnHitByPhysicsActor",
	"OnActorBump",
	"OnMeshComponentHit",
	"ResetHitReactCanInterrupt",
	"SearchAnimationBlendOut",
	"ShowHighlight",
	"GetHighlightType",
	"GetHighlightTransform",
	"UpdateHighlightActor",
	"ReceiveActorBeginOverlap",
	"ReceiveActorEndOverlap",
	"K2_OnEndViewTarget",
	"K2_OnBecomeViewTarget",
	"K2_PostLogin",
	"Reveal Timer Return",
	"OnPlayerStay",
	"ReceiveHit",
	"SetGameTimeRemaining",
	"GetBallReturn",
	"GetReturnTrack",
	"ComponentEndOverlapSignature",
	"ComponentBoundEvent",
	"ComponentBeginOverlapSignature",
	"OnInputFocusReceived",
	"Focus Recieved PauseEvent",
	"GetActiveLane"
};
const std::vector<std::string> EndingFilterList = {
		"UpdateFunc",
		"FinishedFunc",
		"ReceiveHit",
};
bool SlowModeInsteadOfPauseMenu = true;
bool isGameSlowed = false;
bool HasSavedSetPlayerDilation = false;
bool Tennis_OnlyAccelleratorBall = false;
bool BigBallMode = false;
float BackupPlayerTimeDilation = 0;
CG::AScramSportManagerTennis_Blueprint_C* TennisManagerinstance;

bool DoNotLogEvent(const std::string& funcname)
{
	std::regex FuncExample1(R"(Function\s([A-Za-z0-9]+(_[A-Za-z0-9]+)+)\.([A-Za-z0-9]+(_[A-Za-z0-9]+)+)\.)");
	auto PurgeStepOne = std::regex_replace(funcname, FuncExample1, "");

	std::regex FuncExample2(R"(Function\s[A-Za-z0-9]+\.[A-Za-z0-9]+\.)");
	auto PurgeStepTwo = std::regex_replace(PurgeStepOne, FuncExample2, "");

	std::regex FuncExample3(R"(Function\s[A-Za-z0-9]+\.[A-Za-z0-9]+_[A-Za-z0-9]+\.)");
	auto Purged = std::regex_replace(PurgeStepTwo, FuncExample3, "");
	std::string PurgedToLower = Purged;
	std::transform(PurgedToLower.begin(), PurgedToLower.end(), PurgedToLower.begin(), ::tolower);

	//for (auto filter : EndingFilterList)
	//{
	//	std::regex EndOfString(R"()" + filter + R"($)", std::regex_constants::icase);
	//	if (std::regex_search(Purged.begin(), Purged.end(), EndOfString, std::regex_constants::match_any)) {
	//		return true;
	//	}
	//}

	//for (auto filter : FilterList)
	//{
	//	std::regex Anywhere(filter, std::regex_constants::icase);
	//	if (std::regex_search(Purged.begin(), Purged.end(), Anywhere, std::regex_constants::match_any)) {
	//		return true;
	//	}
	//}
	for (auto filter : EndingFilterList)
	{
		std::string lowerFilter = filter;

		std::transform(lowerFilter.begin(), lowerFilter.end(), lowerFilter.begin(), ::tolower);

		if (PurgedToLower.find(lowerFilter) != std::string::npos)
		{
			return true;
		}
	}

	for (auto filter : FilterList)
	{
		std::string lowerFilter = filter;
		std::transform(lowerFilter.begin(), lowerFilter.end(), lowerFilter.begin(), ::tolower);
		if (PurgedToLower.find(lowerFilter) != std::string::npos)
		{
			return true;
		}
	}

	return false;
}
bool LoggerActive = false;

bool AllowAllFunctions = true;
void ReportCustomEvent(const std::string& funcname) {
	if (!LoggerActive) return;

	auto BlockLogging = DoNotLogEvent(funcname);
	if (BlockLogging) return;

	// If AllowAllFunctions is true, we report all events.
	// Otherwise, we proceed to check if the remaining string contains any of the specified class names.
	if (AllowAllFunctions) {
		ConsoleTools::ConsoleWrite(funcname);
		return;
	}

	// Strip the function name from the input string
	std::string eventNameWithoutFunction = funcname.substr(0, funcname.find("("));

	// Check if the remaining string matches any of the specified class names
	for (const auto& ClassName : ClassNames) {
		if (eventNameWithoutFunction.find(ClassName) != std::string::npos) {
			ConsoleTools::ConsoleWrite(funcname);
			return;
		}
	}
}

void ToggleDebugMenu()
{
	auto TargetClass = CG::UObject::FindObjects<CG::AFrontEndManager_C>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->ToggleDebugMenu();
			}
		}
	}
}

void CreateDebugMenu()
{
	auto TargetClass = CG::UObject::FindObjects<CG::AFrontEndManager_C>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->CreateDebugMenu();
			}
		}
	}
}

void KillCameraCovers()
{
	auto TargetClass = CG::UObject::FindObjects<CG::AScramCameraCover>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->K2_DestroyActor();
			}
		}
	}
}

void CheckPermittedArea()
{
	auto TargetClass = CG::UObject::FindObjects<CG::AScramPlayer>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->CheckPermittedArea = false;
			}
		}
	}
}
void FuckCameraCovers()
{
	auto maxFloatValue = static_cast<float>(9999999999);
	auto TargetClass = CG::UObject::FindObjects<CG::AScramCameraCover>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->K2_DestroyActor();
			}
		}
	}
}

void ExpandBoundsToMakeTriggerShutTheFuckUp()
{
	auto maxFloatValue = static_cast<float>(9999999999);
	auto TargetClass = CG::UObject::FindObjects<CG::AScramPlayerTrigger>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				if (mods->Length != maxFloatValue)
				{
					mods->Length = maxFloatValue;
				}
				if (mods->Width != maxFloatValue)
				{
					mods->Width = maxFloatValue;
				}
			}
		}
	}
}

void Set_AI_Score(int score)
{
	if(TennisManagerinstance != nullptr)
	{
		TennisManagerinstance->ScorePlayer2 = score;
		TennisManagerinstance->PointMade(TennisManagerinstance->ScorePlayer1, score);
	}

}

void Set_Player_Score(int score)
{
	if (TennisManagerinstance != nullptr)
	{
		TennisManagerinstance->ScorePlayer1 = score;
		TennisManagerinstance->PointMade(score, TennisManagerinstance->ScorePlayer2);
	}
}
void TennisForceAiServe()
{
	if (TennisManagerinstance != nullptr)
	{
		TennisManagerinstance->ServeSwitch(false);
	}
}

CG::AWorldSettings* GetWorldSettings()
{
	auto world = (*CG::UWorld::GWorld);
	if (world != nullptr)
	{
		if (world->PersistentLevel != nullptr)
		{
			return world->PersistentLevel->WorldSettings;
		}
	}
	return nullptr;
}

CG::ULocalPlayer* GetActiveLocalPlayer()
{
	auto world = (*CG::UWorld::GWorld);
	if (world != nullptr && world->OwningGameInstance != nullptr && world->OwningGameInstance->LocalPlayers.Count() > 0)
	{
		auto localPlayer = world->OwningGameInstance->LocalPlayers[0];
		if (localPlayer != nullptr && localPlayer->PlayerController != nullptr)
		{
			return localPlayer;
		}
	}
	return nullptr;
}

CG::APlayerController* GetActivePlayerController()
{
	auto LocalPlayer = GetActiveLocalPlayer();
	if (LocalPlayer != nullptr)
	{
		return LocalPlayer->PlayerController;
	}
	return nullptr;
}

void SpawnCheatManager(CG::APlayerController* Pc)
{
	if (Pc != nullptr)
	{
		if (Pc->CheatManager == nullptr)
		{
			if (CG::UCheatManager* Cm = static_cast<CG::UCheatManager*>(Pc->CheatClass->CreateDefaultObject()))
			{
				if (Cm != nullptr)
				{
					Cm->Outer = Pc;
					Pc->CheatManager = Cm;
					//Cm->ReceiveInitCheatManager();
					//Pc->EnableCheats();
					ConsoleTools::ConsoleWrite("Spawned " + Cm->GetFullName() + " !");
					//SpawnConsole();
				}
			}
		}
	}
}
struct Ball_Data
{
	CG::AActor* Ball;
	CG::FVector Original_Scale;
	CG::FVector Scaled_Value;
};
float Scale_Adjuster = static_cast<float>(2);
Ball_Data CurrentBall;
void BigBallModeFunc(CG::AActor* Active_Ball_Instance)
{
	if (Active_Ball_Instance == nullptr)
		return;
	auto root = Active_Ball_Instance->RootComponent;
	if (root == nullptr)
		return;

	if (CurrentBall.Ball == nullptr || CurrentBall.Ball != Active_Ball_Instance)
	{
		ConsoleTools::ConsoleWrite(
			"Original Ball scale is X: " + std::to_string(root->RelativeScale3D.X) +
			" Y: " + std::to_string(root->RelativeScale3D.Y) +
			" Z: " + std::to_string(root->RelativeScale3D.Z));

		CurrentBall.Ball = Active_Ball_Instance;
		CurrentBall.Original_Scale = root->RelativeScale3D;
		auto AdjustedScale = root->RelativeScale3D;
		AdjustedScale.X += Scale_Adjuster;
		AdjustedScale.Y += Scale_Adjuster;
		AdjustedScale.Z += Scale_Adjuster;
		CurrentBall.Scaled_Value = AdjustedScale;
		ConsoleTools::ConsoleWrite(
			"Modified Ball scale is X: " + std::to_string(AdjustedScale.X) +
			" Y: " + std::to_string(AdjustedScale.Y) +
			" Z: " + std::to_string(AdjustedScale.Z));
	}

	if (BigBallMode)
	{
		root->RelativeScale3D = CurrentBall.Scaled_Value;
	}
	else
	{
		root->RelativeScale3D = CurrentBall.Original_Scale;
	}
}

bool AutoCheatManager = true;
void ExecutorThread()
{
	while (true)
	{
		try {
			KillCameraCovers();
			CheckPermittedArea();
			ExpandBoundsToMakeTriggerShutTheFuckUp();
			FuckCameraCovers();
		}
		catch (...) {}
	}
}

static CG::ATN_AcceleratorBall_C* AccelleratorInstance = nullptr;

CG::ATN_AcceleratorBall_C* GetCapturedAccelleratorInstance()
{
	if (AccelleratorInstance != nullptr)
	{
		return AccelleratorInstance;
	}

	auto TargetClass = CG::UObject::FindObjects<CG::ATN_AcceleratorBall_C>();
	if (!TargetClass.empty())
	{
		for (auto& ball : TargetClass)
		{
			if (ball != nullptr && ball->BounceChargedSFX != nullptr)
			{
				AccelleratorInstance = ball;
				return ball;
			}
		}
	}

	return nullptr; // Return nullptr if no active instance is found
}

void ToggleDebugMenuCommand()
{
	ToggleDebugMenu();
}

void CreateDebugMenuCommand()
{
	CreateDebugMenu();
}

void TennisFastBallModeCommand()
{
	Tennis_OnlyAccelleratorBall = !Tennis_OnlyAccelleratorBall;
	if (Tennis_OnlyAccelleratorBall)
	{
		ConsoleTools::ConsoleWrite("Only Accellerator Ball Enabled!");
	}
	else
	{
		ConsoleTools::ConsoleWrite("Only Accellerator Ball Disabled!");
	}
}
void SlowGameInsteadOfPauseCommand()
{
	SlowModeInsteadOfPauseMenu = !SlowModeInsteadOfPauseMenu;
	if (SlowModeInsteadOfPauseMenu)
	{
		ConsoleTools::ConsoleWrite("Game will Slow Down instead of pausing now!");
	}
	else
	{
		ConsoleTools::ConsoleWrite("Game will work as normal with the pause menu!");
	}
}
void BigBallModeCommand()
{
	BigBallMode = !BigBallMode;
	if (BigBallMode)
	{
		ConsoleTools::ConsoleWrite("Big Ball Mode Enabled!");
	}
	else
	{
		ConsoleTools::ConsoleWrite("Big Ball Mode Disabled!");
	}
}

void SetAIScoreCommand()
{
	ConsoleTools::ConsoleWrite("Put AI Score Here:");
	int score;
	std::cin >> score;
	Set_AI_Score(score);
}

void SetPlayerScoreCommand()
{
	ConsoleTools::ConsoleWrite("Put Player Score Here:");
	int score;
	std::cin >> score;
	Set_Player_Score(score);
}
void Scale_AdjusterCommand()
{
	ConsoleTools::ConsoleWrite("Enter Ball Scale Value:");
	float scale;
	std::cin >> scale;
	Scale_Adjuster = scale;
}

void HelpCommand()
{
	ConsoleTools::ConsoleWrite("Sport Scramble Mod Console Available commands:");
	ConsoleTools::ConsoleWrite("help [DESC]: This page.");
	ConsoleTools::ConsoleWrite("toggledebugmenu [DESC]: Toggles Debug Menu!");
	ConsoleTools::ConsoleWrite("spawndebugmenu [DESC]: Creates Debug Menu!");
	ConsoleTools::ConsoleWrite("set_ai_score (value) [DESC]: Set AI Score (Tennis)?!");
	ConsoleTools::ConsoleWrite("set_player_score (value) [DESC]: Set Player Score (Tennis)?!");
	ConsoleTools::ConsoleWrite("tennis_speedball [DESC]: Toggles And enforces all tennis balls to be Only Accelerators!");
	ConsoleTools::ConsoleWrite("slowmodecheat [DESC]: Toggles and enforces a slow mode instead of pause menu!");
	ConsoleTools::ConsoleWrite("tennis_ai_serve [DESC]: Make the AI serve the ball in tennis !");
	ConsoleTools::ConsoleWrite("tennis_bigball [DESC]: Toggles and enforces all tennis balls to be triple it's size.!");
	ConsoleTools::ConsoleWrite("scale_adjuster <float> [DESC]: Control how much the ball will increase of it's size!");
}

// Define the command map as a global variable
std::unordered_map<std::string, std::function<void()>> commandMap = {
	{"help", HelpCommand},
	{"toggledebugmenu", ToggleDebugMenuCommand},
	{"spawndebugmenu", CreateDebugMenuCommand},
	{"tennis_speedball", TennisFastBallModeCommand},
	{"set_ai_score", SetAIScoreCommand},
	{"set_player_score", SetPlayerScoreCommand},
	{"slowmodecheat", SlowGameInsteadOfPauseCommand},
	{"tennis_ai_serve", TennisForceAiServe},
	{"tennis_bigball", BigBallModeCommand},
	{"scale_adjuster", Scale_AdjusterCommand}
};

void ConsoleInput()
{
	ConsoleTools::ConsoleWrite("ModConsole Commands:");
	std::string input;
	while (true)
	{
		std::cin >> input;

		// Convert input to lowercase
		std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c) {
			return std::tolower(c);
			});

		auto it = commandMap.find(input);
		if (it != commandMap.end())
		{
			// Execute the corresponding command function
			it->second();
		}
		else
		{
			ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
		}
	}
}

bool ends_with(const std::string& mainStr, const std::string& toMatch)
{
	if (mainStr.size() >= toMatch.size() &&
		mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
		return true;
	else
		return false;
}

void HkProcessEvent(CG::UObject* thiz, CG::UFunction* function, void* parms)
{
	auto maxFloatValue = static_cast<float>(9999999999);
	if (!thiz || !function) {
		// Either thiz or function is null, so exit early
		return;
	}

	if (!thiz->Class) {
		// Internal class is null, so exit early
		return;
	}

	const std::string func = function->GetFullName();
	if (func == "Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerOutOfBoundary") return;
	if (func == "Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerExitBoundary__DelegateSignature") return;
	if (func == "Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerOutOfBoundary") return;
	if (func == "Function SportsScramble.ScramPlayerTrigger.OnPlayerExit") return;
	if (func == "Function SportsScramble.ScramCameraCover.EnqueueVignette") return;


	if(func.find("ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C") != std::string::npos)
	{
		auto instance = static_cast<CG::AScramSportManagerTennis_Blueprint_C*>(thiz);
		if(TennisManagerinstance == nullptr)
		{
			TennisManagerinstance = instance;
			ConsoleTools::ConsoleWrite("Tennis Manager Instance Captured!");
		}
	}
	if (func.find("SportsScramble.ScramBall") != std::string::npos)
	{
		auto instance = static_cast<CG::AScramBall*>(thiz);
		if (instance != nullptr)
		{
			if (instance->GetProxyGrabbable() != nullptr)
			{
				instance->CanBeGrabbed = true;
			}
			if (!instance->CanBeGrabbed)
			{
				instance->CanBeGrabbed = true;
			}
			if (instance->mImmuneToInstruments)
			{
				instance->SetImmuneToInstruments(false);
			}
		}
	}
	if (func.find("SportsScramble.ScramPlayerTrigger") != std::string::npos)
	{
		auto instance = static_cast<CG::AScramPlayerTrigger*>(thiz);
		if (instance != nullptr)
		{
			if (instance->Length != maxFloatValue)
			{
				instance->Length = maxFloatValue;
			}
			if (instance->Width != maxFloatValue)
			{
				instance->Width = maxFloatValue;
			}
		}
	}
	if (func == "Function SportsScramble.ScramPlayer.ConstrainToPlayArea")
	{
		auto instance = static_cast<CG::AScramPlayer*>(thiz);
		auto params = static_cast<CG::AScramPlayer_ConstrainToPlayArea_Params*>(parms);
		if (instance != nullptr && params != nullptr)
		{
			params->Radius = maxFloatValue;
		}
	}
	if (func == "SportsScramble.ScramPlayer.GetPlayAreaTransform")
	{
		auto instance = static_cast<CG::AScramPlayer*>(thiz);
		auto params = static_cast<CG::AScramPlayer_GetPlayAreaTransform_Params*>(parms);
		if (instance != nullptr && params != nullptr)
		{
			params->ReturnValue.Scale3D = CG::FVector(maxFloatValue, maxFloatValue, maxFloatValue);
		}
	}
	if (func == "Function ScramPlayerController_BP.ScramPlayerController_BP_C.InpActEvt_Pause_K2Node_InputActionEvent_1")
	{
		auto settings = GetWorldSettings();
		auto Player = GetActivePlayerController();
		if (settings != nullptr && Player != nullptr)
		{
			if (SlowModeInsteadOfPauseMenu)
			{
				if (!isGameSlowed)
				{
					if (!HasSavedSetPlayerDilation)
					{
						BackupPlayerTimeDilation = Player->CustomTimeDilation;
						HasSavedSetPlayerDilation = true;
					}
					settings->timeDilation = static_cast<float>(0.09);
					Player->CustomTimeDilation = static_cast<float>(3.15);
					ConsoleTools::ConsoleWrite("[Sport Scramble] :  Time Slowed!");
					//ConsoleTools::ConsoleWrite("[Sport Scramble] :  Set Time Dilation : " + std::to_string(settings->timeDilation));
					//ConsoleTools::ConsoleWrite("[Sport Scramble] :  Set Player Time Dilation : " + std::to_string(Player->CustomTimeDilation));

					isGameSlowed = true;
				}
				else
				{
					ConsoleTools::ConsoleWrite("[Sport Scramble] :  Time Restored!");
					settings->timeDilation = static_cast<float>(1);
					if (HasSavedSetPlayerDilation)
					{
						Player->CustomTimeDilation = static_cast<float>(BackupPlayerTimeDilation);
						HasSavedSetPlayerDilation = false;
					}
					else
					{
						Player->CustomTimeDilation = static_cast<float>(1);
					}
					//ConsoleTools::ConsoleWrite("[Sport Scramble] :  Restored Time Dilation : " + std::to_string(settings->timeDilation));
					//ConsoleTools::ConsoleWrite("[Sport Scramble] :  Restored Player Time Dilation : " + std::to_string(Player->CustomTimeDilation));
					isGameSlowed = false;
				}
				return;
			}
			else
			{
				if (settings->timeDilation != static_cast<float>(1))
				{
					settings->timeDilation = static_cast<float>(1);
					if (HasSavedSetPlayerDilation)
					{
						Player->CustomTimeDilation = static_cast<float>(BackupPlayerTimeDilation);
						HasSavedSetPlayerDilation = false;
					}
					else
					{
						Player->CustomTimeDilation = static_cast<float>(1);
					}
				}
			}
		}
	}
	if (func == "Function TN_Ball_Base.TN_Ball_Base_C.Ball Hit")
	{
		auto instance = static_cast<CG::ATN_Ball_Base_C*>(thiz);
		auto params = static_cast<CG::ATN_Ball_Base_C_BallHit_Params*>(parms);
		if (instance != nullptr && params != nullptr)
		{
			std::async(std::launch::async, BigBallModeFunc, instance);
			auto name = instance->GetFullName();
			ConsoleTools::ConsoleWrite("[Sport Scramble] :  Ball Hit : " + name);
		}
	}

	if (func == "Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallSpawned")
	{
		auto instance = static_cast<CG::AScramSportManagerTennis_Blueprint_C*>(thiz);
		auto params = static_cast<CG::AScramSportManagerTennis_Blueprint_C_BallSpawned_Params*>(parms);
		if (instance != nullptr && params != nullptr)
		{
			auto name = params->Ball->GetFullName();
			std::async(std::launch::async, BigBallModeFunc, params->Ball);
			ConsoleTools::ConsoleWrite("[Sport Scramble] :  Ball Spawned : " + name);
		}
	}
	if (func == "Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallSpawned")
	{
		auto instance = static_cast<CG::AScramSportManagerTennis_Blueprint_C*>(thiz);
		auto params = static_cast<CG::AScramSportManagerTennis_Blueprint_C_BallGrabbed_Params*>(parms);
		if (instance != nullptr && params != nullptr)
		{
			auto name = params->Ball->GetFullName();
			std::async(std::launch::async, BigBallModeFunc, params->Ball);
			ConsoleTools::ConsoleWrite("[Sport Scramble] :  Ball Spawned : " + name);
		}
		}

	ReportCustomEvent(func);

	try {
		if (thiz != nullptr && function != nullptr)
		{
			oProcessEvent(thiz, function, parms);
		}
	}
	catch (...) {}
}

uintptr_t GetBaseAddress(const std::wstring& moduleName)
{
	return  reinterpret_cast<uintptr_t>(GetModuleHandleW(moduleName.c_str()));
}

uintptr_t GetBaseAddress()
{
	return GetBaseAddress(L"SportsScramble-Win64-Shipping.exe");
}

void StartProcessEventHook()
{
	uintptr_t mBaseAddress = GetBaseAddress();
	uintptr_t ProcessEventOffset = 0x6694E0;
	uintptr_t ProcessEventAddress = mBaseAddress + ProcessEventOffset;

	auto peFunc = reinterpret_cast<ProcessEvent>(ProcessEventAddress);
	bool processEventHooked = MH_CreateHook(peFunc, reinterpret_cast<void*>(HkProcessEvent), reinterpret_cast<void**>(&oProcessEvent)) == MH_OK && MH_EnableHook(peFunc) == MH_OK;
	if (processEventHooked)
	{
		ConsoleTools::ConsoleWrite("Hooked Process Event!");
	}
	else
	{
		ConsoleTools::ConsoleWrite("Failed to Hook Process Event!");
	}
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	if (!CG::InitSdk())
	{
		// TODO: Should handle that
		return FALSE;
	}

	// Console (Used Mainly for Debug Purpose) (not needed)
	ConsoleTools::ShowConsole();
	bool init_hook = false;
	do
	{
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
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		MH_Initialize();
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		//kiero::shutdown();
		break;
	}
	return TRUE;
}