#include <regex>

#include "pch.h"
#include "CheatsCode.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK.h"
#include <thread>
#pragma once
#pragma warning(disable: 4717)
#pragma warning(disable: 4806)
#pragma warning(disable: 305)

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include "mem.h"
#include <limits>
#include <exception>
#include <typeinfo>
#include <stdexcept>
#include <thread>
#include <algorithm> // For std::transform
#include <cctype>    // For std::tolower
#include <future>
#include <regex>     // For std::regex_search
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>

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

	for (auto filter : EndingFilterList)
	{
		std::regex EndOfString(R"()" + filter + R"($)", std::regex_constants::icase);
		if (std::regex_search(Purged.begin(), Purged.end(), EndOfString, std::regex_constants::match_any)) {
			return true;
		}
	}

	for (auto filter : FilterList)
	{
		std::regex Anywhere(filter, std::regex_constants::icase);
		if (std::regex_search(Purged.begin(), Purged.end(), Anywhere, std::regex_constants::match_any)) {
			return true;
		}
	}
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

void Enable_Instance_DebugMode()
{
	auto TargetClass = CG::UObject::FindObjects<CG::UScramGameInstance_C>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->DebugMode = 1;
			}
		}
	}
}

void Disable_Instance_DebugMode()
{
	auto TargetClass = CG::UObject::FindObjects<CG::UScramGameInstance_C>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->DebugMode = 0;
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

void Enable_Debug_Balls()
{
	auto TargetClass = CG::UObject::FindObjects<CG::UScramGameInstance_C>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->DebugBallsAllowed = true;
			}
		}
	}
}

void Disable_Debug_Balls()
{
	auto TargetClass = CG::UObject::FindObjects<CG::UScramGameInstance_C>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->DebugBallsAllowed = false;
			}
		}
	}
}

void Set_AI_Score(int score)
{
	auto TargetClass = CG::UObject::FindObjects<CG::AScramSportManagerTennis_Blueprint_C>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->ScorePlayer2 = score;
			}
		}
	}
}

void Set_Player_Score(int score)
{
	auto TargetClass = CG::UObject::FindObjects<CG::AScramSportManagerTennis_Blueprint_C>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->ScorePlayer1 = score;
			}
		}
	}
}

void Enable_BigMode()
{
	auto TargetClass = CG::UObject::FindObjects<CG::AScramPlayer_BP_C>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->BigMode = true;
			}
		}
	}
}

void Disable_BigMode()
{
	auto TargetClass = CG::UObject::FindObjects<CG::AScramPlayer_BP_C>();
	if (!TargetClass.empty())
	{
		for (auto& mods : TargetClass)
		{
			if (mods != nullptr)
			{
				mods->BigMode = false;
			}
		}
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

bool AutoCheatManager = true;
void ExecutorThread()
{
	while (true)
	{
		try {
			KillCameraCovers();
			CheckPermittedArea();
			ExpandBoundsToMakeTriggerShutTheFuckUp();
		}
		catch (...) {}
	}
}

static CG::ATN_AcceleratorBall_C* savedInstance = nullptr;

CG::ATN_AcceleratorBall_C* GetActiveAcceleratorBallInstance()
{
	if (savedInstance != nullptr)
	{
		return savedInstance;
	}

	auto TargetClass = CG::UObject::FindObjects<CG::ATN_AcceleratorBall_C>();
	if (!TargetClass.empty())
	{
		for (auto& ball : TargetClass)
		{
			if (ball != nullptr && ball->BounceChargedSFX != nullptr)
			{
				savedInstance = ball;
				return ball;
			}
		}
	}

	return nullptr; // Return nullptr if no active instance is found
}


bool SlowModeInsteadOfPauseMenu = true;
bool isGameSlowed = false;
bool HasSavedSetPlayerDilation = false;
float BackupPlayerTimeDilation = 0;
void ConsoleInput()
{
	ConsoleTools::ConsoleWrite("ModConsole Commands:  ");
	std::string input;
	std::cin >> input;

	if (input == "help")
	{
		ConsoleTools::ConsoleWrite("Sport Scramble Mod Console Available commands:");
		ConsoleTools::ConsoleWrite("help  [DESC]:  This page. ");
		ConsoleTools::ConsoleWrite("KillBounds [DESC]: Remove any game Boundaries!");
		ConsoleTools::ConsoleWrite("ToggleDebugMenu [DESC]: Toggles Debug Menu!");
		ConsoleTools::ConsoleWrite("CreateDebugMenu [DESC]: Creates Debug Menu!");
		//ConsoleTools::ConsoleWrite("Enable_Instance_DebugMode [DESC]: Enables Debug Mode!");
		//ConsoleTools::ConsoleWrite("Disable_Instance_DebugMode [DESC]: Disables Debug Mode!");
		//ConsoleTools::ConsoleWrite("Enable_Debug_Balls [DESC]: Enables Debug Items?!");
		//ConsoleTools::ConsoleWrite("Disable_Debug_Balls [DESC]: Disables Debug Items?!");
		//ConsoleTools::ConsoleWrite("Set_AI_Score (value) [DESC]: Set AI Score (Tennis)?!");
		//ConsoleTools::ConsoleWrite("Set_Player_Score (value) [DESC]: Set Player Score (Tennis)?!");
		//ConsoleTools::ConsoleWrite("Enable_BigMode (value) [DESC]: Enable Player BigMode !");
		//ConsoleTools::ConsoleWrite("Disable_BigMode (value) [DESC]: Disable Player BigMode!");
		//ConsoleTools::ConsoleWrite("TennisFastBallMode [DESC]: Toggles And enforces all tennis balls to be Only Accellerators!");
		ConsoleTools::ConsoleWrite("slowmodetoggles [DESC]: Toggles and enforces a slow mode instead of pause menu!");

		ConsoleInput();
	}
	else if (input == "slowmodetoggles")
	{
		SlowModeInsteadOfPauseMenu != SlowModeInsteadOfPauseMenu;
		if (SlowModeInsteadOfPauseMenu)
		{
			ConsoleTools::ConsoleWrite("Toggleable SlowMode Enabled!");
		}
		else
		{
			ConsoleTools::ConsoleWrite("Toggleable SlowMode Disabled!");
		}
		ConsoleInput();
	}

	/*else if (input == "KillBounds")
	{
		KillCameraCovers();
		CheckPermittedArea();
		ExpandBoundsToMakeTriggerShutTheFuckUp();
		ConsoleTools::ConsoleWrite("Killed Bounds");
		ConsoleInput();
	}*/
	else if (input == "ToggleDebugMenu")
	{
		ToggleDebugMenu();
		ConsoleInput();
	}
	else if (input == "CreateDebugMenu")
	{
		CreateDebugMenu();
		ConsoleInput();
	}
	//else if (input == "Enable_Instance_DebugMode")
	//{
	//	Enable_Instance_DebugMode();
	//	ConsoleInput();
	//}
	//else if (input == "Disable_Instance_DebugMode")
	//{
	//	Disable_Instance_DebugMode();
	//	ConsoleInput();
	//}
	//else if (input == "Enable_Debug_Balls")
	//{
	//	Enable_Debug_Balls();
	//	ConsoleInput();
	//}
	//else if (input == "Disable_Debug_Balls")
	//{
	//	Disable_Debug_Balls();
	//	ConsoleInput();
	//}
	//else if (input == "Enable_BigMode")
	//{
	//	Enable_BigMode();
	//	ConsoleInput();
	//}
	//else if (input == "Disable_BigMode")
	//{
	//	Disable_BigMode();
	//	ConsoleInput();
	//}
	//else if (input == "TennisFastBallMode")
	//{
	//	Tennis_OnlyAccelleratorBall = !Tennis_OnlyAccelleratorBall;
	//	ConsoleInput();
	//}

	//else if (input == "Set_AI_Score")
	//{
	//	ConsoleTools::ConsoleWrite("Put AI Score Here:");
	//	int score;
	//	std::cin >> score; // input the length
	//	Set_AI_Score(score);
	//	ConsoleInput();
	//}
	//else if (input == "Set_Player_Score")
	//{
	//	ConsoleTools::ConsoleWrite("Put Player Score Here: ");
	//	int score;
	//	std::cin >> score; // input the length
	//	Set_AI_Score(score);
	//	ConsoleInput();
	//}
	else
	{
		ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
		ConsoleInput();
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
					settings->timeDilation = static_cast<float>(0.15);
					Player->CustomTimeDilation = static_cast<float>(3.15);
					ConsoleTools::ConsoleWrite("[Sport Scramble] :  Game Paused!");
					ConsoleTools::ConsoleWrite("[Sport Scramble] :  Set Time Dilation : " + std::to_string(settings->timeDilation));
					ConsoleTools::ConsoleWrite("[Sport Scramble] :  Set Player Time Dilation : " + std::to_string(Player->CustomTimeDilation));

					isGameSlowed = true;
				}
				else
				{
					ConsoleTools::ConsoleWrite("[Sport Scramble] :  Game Unpaused!");
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
					ConsoleTools::ConsoleWrite("[Sport Scramble] :  Restored Time Dilation : " + std::to_string(settings->timeDilation));
					ConsoleTools::ConsoleWrite("[Sport Scramble] :  Restored Player Time Dilation : " + std::to_string(Player->CustomTimeDilation));
					isGameSlowed = false;
				}
				// avoid Player from being affected by the pause

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

	if (func == "Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerOutOfBoundary") return;
	if (func == "Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerExitBoundary__DelegateSignature") return;
	if (func == "Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerOutOfBoundary") return;
	if (func == "Function SportsScramble.ScramPlayerTrigger.OnPlayerExit") return;

	std::async(std::launch::async, ReportCustomEvent, func);


	try {
		oProcessEvent(thiz, function, parms);
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