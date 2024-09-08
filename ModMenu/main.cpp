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
#include <algorithm>
#include <cctype>
#include <future>
#include <regex>
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
uintptr_t UObjectProcessEvent_Offset = 0x662510;


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

const std::vector < std::string > ClassNames = {
  "PauseCapsule.PauseCapsule_C",
  "ScrambleEvent_Base.ScrambleEvent_Base_C",
};
const std::vector < std::string > FilterList = {
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
const std::vector < std::string > EndingFilterList = {
  "UpdateFunc",
  "FinishedFunc",
  "ReceiveHit",
};
bool SlowModeInsteadOfPauseMenu = true;
bool isGameSlowed = false;
bool HasSavedSetPlayerDilation = false;
bool Tennis_OnlyAccelleratorBall = false;
bool BigBallMode = true;
float BackupPlayerTimeDilation = 0;



CG::AScramSportManagerTennis_Blueprint_C* TennisManagerinstance;

bool DoNotLogEvent(const std::string& funcname) {
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
	for (auto filter : EndingFilterList) {
		std::string lowerFilter = filter;

		std::transform(lowerFilter.begin(), lowerFilter.end(), lowerFilter.begin(), ::tolower);

		if (PurgedToLower.find(lowerFilter) != std::string::npos) {
			return true;
		}
	}

	for (auto filter : FilterList) {
		std::string lowerFilter = filter;
		std::transform(lowerFilter.begin(), lowerFilter.end(), lowerFilter.begin(), ::tolower);
		if (PurgedToLower.find(lowerFilter) != std::string::npos) {
			return true;
		}
	}

	return false;
}
bool LoggerActive = false;

bool AllowAllFunctions = true;


void ReportCustomEvent(const std::string& funcname, bool blocked = false, bool modified = false) {
	if (!LoggerActive) return;

	auto BlockLogging = DoNotLogEvent(funcname);
	if (BlockLogging) return;

	// Append [BLOCKED] if the event is blocked
	std::string logMessage = funcname;
	if (blocked) {
		logMessage += " [BLOCKED]";
	}

	if (modified) {
		logMessage += " [MODIFIED]";
	}



	// If AllowAllFunctions is true, we report all events.
	// Otherwise, we proceed to check if the remaining string contains any of the specified class names.
	if (AllowAllFunctions) {
		ConsoleTools::ConsoleWrite(logMessage + " ");
		return;
	}

	// Strip the function name from the input string
	std::string eventNameWithoutFunction = funcname.substr(0, funcname.find("("));

	// Check if the remaining string matches any of the specified class names
	for (const auto& ClassName : ClassNames) {
		if (eventNameWithoutFunction.find(ClassName) != std::string::npos) {
			ConsoleTools::ConsoleWrite(logMessage);
			return;
		}
	}
}


void ToggleProcLogger()
{
	LoggerActive = !LoggerActive;
	ConsoleTools::ConsoleWrite("Process Event Logger is now " + bool_as_text(LoggerActive));
}

void ToggleAllLogFunctions()
{
	AllowAllFunctions = !AllowAllFunctions;
	ConsoleTools::ConsoleWrite("AllowAllFunctions is now " + bool_as_text(AllowAllFunctions));

}

void MaxBoundaries(CG::AScramPlayerBoundary_BP_C* PlayerBoundaryInstance) {
	if (!PlayerBoundaryInstance) {
		ConsoleTools::ConsoleWrite("Invalid AScramPlayerBoundary instance provided to MaxBoundaries. Exiting function.");
		return; // Check if the instance is valid
	}

	bool invoke = false;
	// Check each boolean property and set to true if not already true
	if (!PlayerBoundaryInstance->DebugMinimumPlayArea) {
		ConsoleTools::ConsoleWrite("DebugMinimumPlayArea is not enabled. Setting to true.");
		PlayerBoundaryInstance->DebugMinimumPlayArea = true;
		invoke = true;
	}

	if (!PlayerBoundaryInstance->DebugOverrideLocalPlayBox) {
		ConsoleTools::ConsoleWrite("DebugOverrideLocalPlayBox is not enabled. Setting to true.");
		PlayerBoundaryInstance->DebugOverrideLocalPlayBox = true;
		invoke = true;
	}

	if (!PlayerBoundaryInstance->OverridePlayArea) {
		ConsoleTools::ConsoleWrite("OverridePlayArea is not enabled. Setting to true.");
		PlayerBoundaryInstance->OverridePlayArea = true;
		invoke = true;
	}

	if (!PlayerBoundaryInstance->HazardLineVisible) {
		ConsoleTools::ConsoleWrite("HazardLineVisible is not enabled. Setting to true.");
		PlayerBoundaryInstance->HazardLineVisible = true;
		invoke = true;
	}

	if (!PlayerBoundaryInstance->DebugHazardScaleEnabled) {
		ConsoleTools::ConsoleWrite("DebugHazardScaleEnabled is not enabled. Setting to true.");
		PlayerBoundaryInstance->DebugHazardScaleEnabled = true;
		invoke = true;
	}

	// Check and set each float property to FLT_MAX if not already set
	if (PlayerBoundaryInstance->PlayAreaWidthOverride != FLT_MAX) {
		ConsoleTools::ConsoleWrite("PlayAreaWidthOverride is not at maximum (" + std::to_string(PlayerBoundaryInstance->PlayAreaWidthOverride) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->PlayAreaWidthOverride = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->PlayAreaLengthOverride != FLT_MAX) {
		ConsoleTools::ConsoleWrite("PlayAreaLengthOverride is not at maximum (" + std::to_string(PlayerBoundaryInstance->PlayAreaLengthOverride) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->PlayAreaLengthOverride = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->BaselineMarginOverride != FLT_MAX) {
		ConsoleTools::ConsoleWrite("BaselineMarginOverride is not at maximum (" + std::to_string(PlayerBoundaryInstance->BaselineMarginOverride) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->BaselineMarginOverride = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->HazardLineHeight != FLT_MAX) {
		ConsoleTools::ConsoleWrite("HazardLineHeight is not at maximum (" + std::to_string(PlayerBoundaryInstance->HazardLineHeight) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->HazardLineHeight = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->HazardLineBuffer != FLT_MAX) {
		ConsoleTools::ConsoleWrite("HazardLineBuffer is not at maximum (" + std::to_string(PlayerBoundaryInstance->HazardLineBuffer) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->HazardLineBuffer = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->HazardEdgeIncrement != FLT_MAX) {
		ConsoleTools::ConsoleWrite("HazardEdgeIncrement is not at maximum (" + std::to_string(PlayerBoundaryInstance->HazardEdgeIncrement) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->HazardEdgeIncrement = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->DebugHazardScaleRateX != FLT_MAX) {
		ConsoleTools::ConsoleWrite("DebugHazardScaleRateX is not at maximum (" + std::to_string(PlayerBoundaryInstance->DebugHazardScaleRateX) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->DebugHazardScaleRateX = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->DebugHazardScaleRateY != FLT_MAX) {
		ConsoleTools::ConsoleWrite("DebugHazardScaleRateY is not at maximum (" + std::to_string(PlayerBoundaryInstance->DebugHazardScaleRateY) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->DebugHazardScaleRateY = FLT_MAX;
		invoke = true;
	}

	if (PlayerBoundaryInstance->DebugHazardScaleCap != FLT_MAX) {
		ConsoleTools::ConsoleWrite("DebugHazardScaleCap is not at maximum (" + std::to_string(PlayerBoundaryInstance->DebugHazardScaleCap) + "). Setting to FLT_MAX.");
		PlayerBoundaryInstance->DebugHazardScaleCap = FLT_MAX;
		invoke = true;
	}

	if (invoke)
	{
		PlayerBoundaryInstance->ResetHazardLine();
	}
}


void AdjustPlayerArea(CG::AScramPlayer_BP_C* instance) {
	if (!instance) {
		ConsoleTools::ConsoleWrite("Invalid instance provided to AdjustPlayerArea. Exiting function.");
		return; // Check if the instance is valid
	}

	if(instance->FadedOut)
	{
		instance->FadedOut = false;
		ConsoleTools::ConsoleWrite("FadedOut is enabled. Disabling it!!");
	}

	// Check and set OutOfBoundaryTimeLimit to FLT_MAX if not already set
	if (instance->OutOfBoundaryTimeLimit != FLT_MAX) {
		ConsoleTools::ConsoleWrite("OutOfBoundaryTimeLimit is not at maximum (" + std::to_string(instance->OutOfBoundaryTimeLimit) + "). Setting to FLT_MAX.");
		instance->OutOfBoundaryTimeLimit = FLT_MAX;
	}

	// Check and set ReturnAreaMinimumWidth to FLT_MAX if not already set
	if (instance->ReturnAreaMinimumWidth != FLT_MAX) {
		ConsoleTools::ConsoleWrite("ReturnAreaMinimumWidth is not at maximum (" + std::to_string(instance->ReturnAreaMinimumWidth) + "). Setting to FLT_MAX.");
		instance->ReturnAreaMinimumWidth = FLT_MAX;
	}

	// Check and set ReturnAreaLateralMargin to FLT_MAX if not already set
	if (instance->ReturnAreaLateralMargin != FLT_MAX) {
		ConsoleTools::ConsoleWrite("ReturnAreaLateralMargin is not at maximum (" + std::to_string(instance->ReturnAreaLateralMargin) + "). Setting to FLT_MAX.");
		instance->ReturnAreaLateralMargin = FLT_MAX;
	}

	// Check and set ReturnAreaBackMargin to FLT_MAX if not already set
	if (instance->ReturnAreaBackMargin != FLT_MAX) {
		ConsoleTools::ConsoleWrite("ReturnAreaBackMargin is not at maximum (" + std::to_string(instance->ReturnAreaBackMargin) + "). Setting to FLT_MAX.");
		instance->ReturnAreaBackMargin = FLT_MAX;
	}

	// Check and set ReturnAreaFrontMargin to FLT_MAX if not already set
	if (instance->ReturnAreaFrontMargin != FLT_MAX) {
		ConsoleTools::ConsoleWrite("ReturnAreaFrontMargin is not at maximum (" + std::to_string(instance->ReturnAreaFrontMargin) + "). Setting to FLT_MAX.");
		instance->ReturnAreaFrontMargin = FLT_MAX;
	}

	// Check and set ReturnPointRadius to FLT_MAX if not already set
	if (instance->ReturnPointRadius != FLT_MAX) {
		ConsoleTools::ConsoleWrite("ReturnPointRadius is not at maximum (" + std::to_string(instance->ReturnPointRadius) + "). Setting to FLT_MAX.");
		instance->ReturnPointRadius = FLT_MAX;
	}

	// Check and disable CheckPermittedArea if enabled
	if (instance->CheckPermittedArea) {
		ConsoleTools::ConsoleWrite("CheckPermittedArea is enabled. Disabling it.");
		instance->CheckPermittedArea = false;
	}

	instance->PlayerExitBoundary = CG::FScriptMulticastDelegate(); // Reinitialize
	
}




void AdjustTriggerInstance(CG::AScramPlayerTrigger* instance) {
	if (!instance) {
		ConsoleTools::ConsoleWrite("Invalid instance provided to AdjustTriggerInstance. Exiting function.");
		return; // Check if the instance is valid
	}

	// Check and set Length to FLT_MAX if not already set
	if (instance->Length != FLT_MAX) {
		ConsoleTools::ConsoleWrite("Length is not at maximum (" + std::to_string(instance->Length) + "). Setting to FLT_MAX.");
		instance->Length = FLT_MAX;
	}

	// Check and set Width to FLT_MAX if not already set
	if (instance->Width != FLT_MAX) {
		ConsoleTools::ConsoleWrite("Width is not at maximum (" + std::to_string(instance->Width) + "). Setting to FLT_MAX.");
		instance->Width = FLT_MAX;
	}
}



void ToggleDebugMenu() {
	auto TargetClass = CG::UObject::FindObjects < CG::AFrontEndManager_C >();
	if (!TargetClass.empty()) {
		for (auto& mods : TargetClass) {
			if (mods != nullptr) {
				mods->ToggleDebugMenu();
			}
		}
	}
}

void CreateDebugMenu() {
	auto TargetClass = CG::UObject::FindObjects < CG::AFrontEndManager_C >();
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
	auto TargetClass = CG::UObject::FindObjects<CG::AScramPlayer_BP_C>();
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
	auto TargetClass = CG::UObject::FindObjects < CG::ACameraBlockingVolume>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					ConsoleTools::ConsoleWrite("Destroyed a Camera Blocker!");
					mods->K2_DestroyActor();
				}
			}
		}
	}
}


void DestroyBlockingVolume() {

	auto TargetClass = CG::UObject::FindObjects < CG::ABlockingVolume>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					ConsoleTools::ConsoleWrite("Destroyed a Blocking Volume!");
					mods->K2_DestroyActor();
				}
			}
		}
	}
}




void FuckCameraCovers() {
	auto TargetClass = CG::UObject::FindObjects < CG::AScramCameraCover_BP_C>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					ConsoleTools::ConsoleWrite("Destroyed a Camera Cover!");
					mods->K2_DestroyActor();
				}
			}
		}
	}
}


void ExpandBoundsToMakeTriggerShutTheFuckUp() {
	auto TargetClass = CG::UObject::FindObjects < CG::AScramPlayerTrigger >();
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
	auto TargetClass = CG::UObject::FindObjects < CG::AScramPlayerBoundary_BP_C >();
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
	auto TargetClass = CG::UObject::FindObjects<CG::ACenterReturnWall_C>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 1; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					mods->DisableWall = true;
					mods->RemoveGameElement(&bShouldRemove); // Pass the address of the bool variable
					mods->K2_DestroyActor();
					ConsoleTools::ConsoleWrite("Destroyed a CenterReturnWall instance");
				}
			}
		}
	}
}




void Set_AI_Score(int32_t score) {
	if (TennisManagerinstance != nullptr) {
		TennisManagerinstance->ScorePlayer2 = score;
		auto helper = TennisManagerinstance->LocalHelper;
		if(helper != nullptr)
		{
			helper->ScorePlayer2 = score;
		}
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
	}
}
void TennisForceAiServe() {
	if (TennisManagerinstance != nullptr) {
		TennisManagerinstance->ServeSwitch(false);
		auto helper = TennisManagerinstance->LocalHelper;
		if (helper != nullptr)
		{
			helper->SwitchServeMessage(false);
		}

	}
}

CG::AWorldSettings* GetWorldSettings() {
	auto world = (*CG::UWorld::GWorld);
	if (world != nullptr) {
		if (world->PersistentLevel != nullptr) {
			return world->PersistentLevel->WorldSettings;
		}
	}
	return nullptr;
}

CG::ULocalPlayer* GetActiveLocalPlayer() {
	auto world = (*CG::UWorld::GWorld);
	if (world != nullptr && world->OwningGameInstance != nullptr && world->OwningGameInstance->LocalPlayers.Count() > 0) {
		auto localPlayer = world->OwningGameInstance->LocalPlayers[0];
		if (localPlayer != nullptr && localPlayer->PlayerController != nullptr) {
			return localPlayer;
		}
	}
	return nullptr;
}

CG::APlayerController* GetActivePlayerController() {
	auto LocalPlayer = GetActiveLocalPlayer();
	if (LocalPlayer != nullptr) {
		return LocalPlayer->PlayerController;
	}
	return nullptr;
}
void FindProcessEventIndex()
{
	int32_t index = 0;

	while (true)
	{
		// Get the object by index
		CG::UObject* SomeObj = CG::UObject::GetGlobalObjects()[index];

		// Check if SomeObj is null
		if (SomeObj == nullptr)
		{
			index++; // Move to the next object index
			continue; // Skip this iteration and continue the loop
		}

		// Get the VTable of the object
		void** VTable = reinterpret_cast<void**>(SomeObj->VfTable);

		// Check if the VTable is null
		if (VTable == nullptr)
		{
			index++; // Move to the next object index
			continue; // Skip this iteration and continue the loop
		}

		// Loop through the VTable functions
		for (int i = 0; i < 0x100; i++)
		{
			uintptr_t vFuncAddress = reinterpret_cast<uintptr_t>(VTable[i]);

			// Calculate the offset
			uintptr_t offset = GetOffset(vFuncAddress);

			// Check if the offset matches the target
			if (offset == UObjectProcessEvent_Offset)
			{
				ConsoleTools::ConsoleWrite("Found matching offset! using table index: " + std::to_string(i));

				std::ostringstream oss;
				oss << "PEIndex: 0x" << std::hex << i;
				ConsoleTools::ConsoleWrite(oss.str());

				return; // Exit the function after finding the match
			}
		}

		// Move to the next object if no match was found
		index++;
	}
}





CG::ATN_Ball_Base_C* Tn_Ball;
CG::FVector TN_Original_Scale;
CG::FVector TN_Scaled_Value;
float Scale_Adjuster = static_cast <float> (1);

void CreateNewBallScale(CG::ATN_Ball_Base_C* instance, CG::USceneComponent* root) {
	ConsoleTools::ConsoleWrite("Current Ball is " + instance->GetFullName());
	ConsoleTools::ConsoleWrite(
		"Instance Ball scale is X: " + std::to_string(root->RelativeScale3D.X) +
		" Y: " + std::to_string(root->RelativeScale3D.Y) +
		" Z: " + std::to_string(root->RelativeScale3D.Z));

	Tn_Ball = instance;
	TN_Original_Scale = root->RelativeScale3D;
	auto AdjustedScale = root->RelativeScale3D;
	AdjustedScale.X += Scale_Adjuster;
	AdjustedScale.Y += Scale_Adjuster;
	AdjustedScale.Z += Scale_Adjuster;
	TN_Scaled_Value = AdjustedScale;
	ConsoleTools::ConsoleWrite(
		"Modified Ball scale is X: " + std::to_string(AdjustedScale.X) +
		" Y: " + std::to_string(AdjustedScale.Y) +
		" Z: " + std::to_string(AdjustedScale.Z));
}

void BigBallModeFunc(CG::ATN_Ball_Base_C* instance) {
	if (instance == nullptr)
		return;

	auto root = instance->RootComponent;
	if (root == nullptr)
		return;

	if (instance->GetFullName().find("TN_AcceleratorBall_C") != std::string::npos) {
		ConsoleTools::ConsoleWrite("Found Accelerator Ball");
		root->RelativeScale3D = TN_Original_Scale;
		Tn_Ball = nullptr;
	}
	if (Tn_Ball != nullptr && TN_Scaled_Value == root->RelativeScale3D) {
		// check if TN_Ball is the same scaled value as the current ball
		if (root->RelativeScale3D.X == TN_Scaled_Value.X && root->RelativeScale3D.Y == TN_Scaled_Value.Y && root->RelativeScale3D.Z == TN_Scaled_Value.Z) {
			Tn_Ball = instance;
		}
		else {
			CreateNewBallScale(instance, root);
		}
	}
	else {
		// create a new ball scale
		CreateNewBallScale(instance, root);
	}

	if (BigBallMode) {
		// Check if the ball scale is already modified
		if (root->RelativeScale3D.X != TN_Scaled_Value.X && root->RelativeScale3D.Y != TN_Scaled_Value.Y && root->RelativeScale3D.Z != TN_Scaled_Value.Z) {
			root->RelativeScale3D = TN_Scaled_Value;
		}
	}
	else {
		// Check if the ball scale is already set to the original scale
		if (root->RelativeScale3D.X != TN_Original_Scale.X && root->RelativeScale3D.Y != TN_Original_Scale.Y && root->RelativeScale3D.Z != TN_Original_Scale.Z) {
			root->RelativeScale3D = TN_Original_Scale;
		}
	}
}

bool AutoCheatManager = true;


void InitializeCheatManagerAndConsole(CG::APlayerController* PlayerController, CG::UEngine* Engine)
{
	auto statics = CG::UObject::FindObjects<CG::UGameplayStatics>()[0];
	if (!statics || !Engine || !PlayerController)
	{
		ConsoleTools::ConsoleWrite("Failed to retrieve required instances!");
		return;
	}

	bool Cheat_spawned = false;
	bool Console_spawned = false;

	// Spawn CheatManager for the PlayerController
	if (!PlayerController->CheatManager && PlayerController->CheatClass)
	{
		if (auto CheatObject = statics->STATIC_SpawnObject(PlayerController->CheatClass, PlayerController))
		{
			PlayerController->CheatManager = static_cast<CG::UCheatManager*>(CheatObject);
			if (PlayerController->CheatManager)
			{
				PlayerController->EnableCheats();
				ConsoleTools::ConsoleWrite("CheatManager spawned: " + PlayerController->CheatManager->GetFullName());
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
		if (auto ConsoleObject = statics->STATIC_SpawnObject(Engine->ConsoleClass, Engine->GameViewport))
		{
			if (auto ConsoleInstance = static_cast<CG::UConsole*>(ConsoleObject))
			{
				Engine->GameViewport->ViewportConsole = ConsoleInstance;
				ConsoleTools::ConsoleWrite("Console spawned: " + ConsoleInstance->GetFullName());
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

	if(Cheat_spawned && Console_spawned)
	{
		AutoCheatManager = false;
	}
	else
	{
		if(!Cheat_spawned)
		{
			ConsoleTools::ConsoleWrite("Failed to spawn CheatManager!");
		}
		if(!Console_spawned)
		{
			ConsoleTools::ConsoleWrite("Failed to spawn ViewPort Console!");
		}
		AutoCheatManager = true;
	}
}

CG::UEngine* GetEngine(int instance = 0)
{
	auto engines = CG::UObject::FindObjects<CG::UEngine>();

	// Adjust index to ensure it's within bounds
	int adjustedIndex = (instance >= engines.size()) ? engines.size() - 1 : instance;

	if (engines.empty() || adjustedIndex < 0 || adjustedIndex >= engines.size())
	{
		ConsoleTools::ConsoleWrite("Instance index is out of bounds.");
		return nullptr;
	}

	auto engineInstance = engines[adjustedIndex];
	if (engineInstance != nullptr)
	{
		return engineInstance;
	}

	ConsoleTools::ConsoleWrite("Found engine instance is nullptr.");
	return nullptr;
}



void InitializeCheatManagerAndConsole()
{
	auto engine = GetEngine(3);
	if(engine != nullptr)
	{
		InitializeCheatManagerAndConsole(GetActivePlayerController(), engine);
	}
}




void ExecutorThread() {
	while (true) {
		try {
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

static CG::ATN_AcceleratorBall_C* AccelleratorInstance = nullptr;

CG::ATN_AcceleratorBall_C* GetCapturedAccelleratorInstance() {
	if (AccelleratorInstance != nullptr) {
		return AccelleratorInstance;
	}

	auto TargetClass = CG::UObject::FindObjects < CG::ATN_AcceleratorBall_C >();
	if (!TargetClass.empty()) {
		for (auto& ball : TargetClass) {
			if (ball != nullptr && ball->BounceChargedSFX != nullptr) {
				AccelleratorInstance = ball;
				return ball;
			}
		}
	}

	return nullptr; // Return nullptr if no active instance is found
}



void ToggleDebugMenuCommand() {
	ToggleDebugMenu();
}

void CreateDebugMenuCommand() {
	CreateDebugMenu();
}

void TennisFastBallModeCommand() {
	Tennis_OnlyAccelleratorBall = !Tennis_OnlyAccelleratorBall;
	if (Tennis_OnlyAccelleratorBall) {
		ConsoleTools::ConsoleWrite("Only Accellerator Ball Enabled!");
	}
	else {
		ConsoleTools::ConsoleWrite("Only Accellerator Ball Disabled!");
	}
}
void SlowGameInsteadOfPauseCommand() {
	SlowModeInsteadOfPauseMenu = !SlowModeInsteadOfPauseMenu;
	if (SlowModeInsteadOfPauseMenu) {
		ConsoleTools::ConsoleWrite("Game will Slow Down instead of pausing now!");
	}
	else {
		ConsoleTools::ConsoleWrite("Game will work as normal with the pause menu!");
	}
}
void BigBallModeCommand() {
	BigBallMode = !BigBallMode;
	if (BigBallMode) {
		ConsoleTools::ConsoleWrite("Big Ball Mode Enabled!");
	}
	else {
		ConsoleTools::ConsoleWrite("Big Ball Mode Disabled!");
	}
}

void SetAIScoreCommand() {
	ConsoleTools::ConsoleWrite("Put AI Score Here:");
	int score;
	std::cin >> score;
	Set_AI_Score(score);
}

void SetPlayerScoreCommand() {
	ConsoleTools::ConsoleWrite("Put Player Score Here:");
	int score;
	std::cin >> score;
	Set_Player_Score(score);
}
void Scale_AdjusterCommand() {
	ConsoleTools::ConsoleWrite("Enter Ball Scale Value:");
	std::string input;
	std::cin >> input;

	Scale_Adjuster = std::stof(input);
	ConsoleTools::ConsoleWrite("Scale Adjuster set to " + std::to_string(Scale_Adjuster));
}


void ViewComponents()
{
	auto TargetClass = CG::UObject::FindObjects<CG::AScramPlayerController_BP_C>();
	if (!TargetClass.empty()) {
		if (TargetClass.size() > 1) {
			for (size_t i = 0; i < TargetClass.size(); ++i) {
				auto mods = TargetClass[i];
				if (mods != nullptr) {
					// Retrieve attached actors
					CG::TArray<class CG::AActor*> AttachedActors;
					mods->GetAttachedActors(&AttachedActors); // Pass pointer to the TArray
					ConsoleTools::ConsoleWrite("Attached Actors: " + std::to_string(AttachedActors.Count()));
					// Print out information about each attached actor
					for (int32_t Index = 0; Index < AttachedActors.Count(); ++Index) {
						auto Actor = AttachedActors[Index];
						if (Actor != nullptr) {
							auto ActorName = Actor->GetName();
							ConsoleTools::ConsoleWrite("Attached Actor: " + ActorName);
						}
					}
				}
			}
		}
	}
}



void HelpCommand() {
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
	ConsoleTools::ConsoleWrite("indexfinder [DESC]: Find the ProcessEvent Index!");
	ConsoleTools::ConsoleWrite("proclogger [DESC]: Toggle Process Event Logger!");
	ConsoleTools::ConsoleWrite("logallfunctions [DESC]: Toggle All Log Functions!");
	ConsoleTools::ConsoleWrite("viewplayer [DESC]: View Player Components!");
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
	{"scale_adjuster", Scale_AdjusterCommand},
	{"indexfinder", FindProcessEventIndex},
	{"proclogger", ToggleProcLogger},
	{"logallfunctions", ToggleAllLogFunctions},
	{"viewplayer", ViewComponents}
		
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
			it->second();
		}
		else
		{
			ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
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




void HkProcessEvent(CG::UObject* thiz, CG::UFunction* function, void* parms) {
	if (!thiz || !function) {
		// Either thiz or function is null, so exit early
		return;
	}

	if (!thiz->Class) {
		// Internal class is null, so exit early
		return;
	}
	bool block = false;
	bool modified = false;


	const std::string func = function->GetFullName();
	if (func.find("OnPlayerOutOfBoundary") != std::string::npos) block = true;
	if (func.find("PlayerExitBoundary") != std::string::npos) block = true;
	if (func.find("QueuedPlayerOutOfBoundary") != std::string::npos) block = true;
	if (func.find("EnqueueVignette") != std::string::npos) block = true;
	if (func.find("SportsScramble.ScramCameraCover") != std::string::npos) block = true;
	if (func.find("ScramCameraCover_BP.ScramCameraCover_BP_C") != std::string::npos) block = true;
	if (func.find("ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C") != std::string::npos) block = true;
	if (func.find("SportsScramble.ScramPlayerTrigger") != std::string::npos) block = true;
	if (func == "Function TN_Ball_Base.TN_Ball_Base_C.PlayNormalHitFX")
		if (BigBallMode) block = true;
	if (func == "Function TN_Ball_Base.TN_Ball_Base_C.PlayChargeSliceBounceFX")
		if (BigBallMode) block = true;
	if (func == "Function TN_Ball_Base.TN_Ball_Base_C.PlayChargeBounceFX")
		if (BigBallMode) block = true;
	if (func == "Function TN_Ball_Base.TN_Ball_Base_C.PlayChargedSliceFX")
		if (BigBallMode) block = true;
	if (func == "Function TN_Ball_Base.TN_Ball_Base_C.PlaySliceFX")
		if (BigBallMode) block = true;
	if (func == "Function TN_Ball_Base.TN_Ball_Base_C.PlayChargedFX")
		if (BigBallMode) block = true;
	if (func == "Function TN_Ball_Base.TN_Ball_Base_C.PlayImbuedFX")
		if (BigBallMode) block = true;
	if (func == "Function TN_Ball_Base.TN_Ball_Base_C.NetPlayImbuedFX")
		if (BigBallMode) block = true;

	if (func == "Function TN_Ball_Base.TN_Ball_Base_C.ReceiveTick")
	{
		auto instance = static_cast <CG::ATN_Ball_Base_C*> (thiz);
		auto params = static_cast <CG::ATN_Ball_Base_C_ReceiveTick_Params*> (parms);
		if (instance != nullptr && params != nullptr) {
			std::async(std::launch::async, BigBallModeFunc, instance);
			modified = true;
		}
	}

	if (func.find("ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C") != std::string::npos)
	{
		auto instance = static_cast <CG::AScramSportManagerTennis_Blueprint_C*> (thiz);
		if (TennisManagerinstance == nullptr)
		{
			TennisManagerinstance = instance;
			ConsoleTools::ConsoleWrite("Tennis Manager Instance Captured!");
		}
		else
		{
			if (TennisManagerinstance != instance)
			{
				ConsoleTools::ConsoleWrite("Tennis Manager Instance Updated!");
				TennisManagerinstance = instance;
			}
		}
	}

	if (func.find("SportsScramble.ScramPlayerTrigger") != std::string::npos) {
		auto instance = static_cast <CG::AScramPlayerTrigger*> (thiz);
		if (instance != nullptr) {
			AdjustTriggerInstance(instance);
			modified = true;
		}
	}
	if (func.find("ScramPlayer_BP.ScramPlayer_BP_C") != std::string::npos) {
		auto instance = static_cast <CG::AScramPlayer_BP_C*> (thiz);
		if (instance != nullptr) {
			AdjustPlayerArea(instance);
			modified = true;
		}
	}
	if (func == "Function SportsScramble.ScramPlayer.ConstrainToPlayArea") {
		auto instance = static_cast <CG::AScramPlayer*> (thiz);
		auto params = static_cast <CG::AScramPlayer_ConstrainToPlayArea_Params*> (parms);
		if (instance != nullptr && params != nullptr) {
			params->Radius = FLT_MAX;
			ConsoleTools::ConsoleWrite("ConstrainToPlayArea Patched!");
			modified = true;
		}
	}
	if (func == "Function SportsScramble.ScramPlayer.GetPlayAreaTransform") {
		auto instance = static_cast <CG::AScramPlayer*> (thiz);
		auto params = static_cast <CG::AScramPlayer_GetPlayAreaTransform_Params*> (parms);
		if (instance != nullptr && params != nullptr) {
			params->ReturnValue.Scale3D = CG::FVector(FLT_MAX, FLT_MAX, FLT_MAX);
			modified = true;
		}
	}

	if (func == "Function ScramPlayer_BP.ScramPlayer_BP_C.ExecuteUbergraph_ScramPlayer_BP")
	{
		// get instance and parameters
		auto instance = static_cast <CG::AScramPlayer_BP_C*> (thiz);
		auto params = static_cast <CG::AScramPlayer_BP_C_ExecuteUbergraph_ScramPlayer_BP_Params*> (parms);
		if (instance != nullptr && params != nullptr)
		{
			auto code = params->EntryPoint;
			if (code == 6226)
			{
				ConsoleTools::ConsoleWrite("QueuedPlayerOutOfBoundary Blocked!");
				block = true;
				modified = false;
			}
			if (code == 6544)
			{
				ConsoleTools::ConsoleWrite("HostFadeToBlack Blocked!");
				block = true;
				modified = false;
			}
			ConsoleTools::ConsoleWrite("ScramPlayer_BP_C.ExecuteUbergraph_ScramPlayer_BP : " + std::to_string(code));

		}
	}
	if (func.find("ScramPlayerController_BP_C.InpActEvt_Pause_K2Node") != std::string::npos)
	{
		auto settings = GetWorldSettings();
		auto Player = GetActivePlayerController();
		if (settings != nullptr && Player != nullptr) {
			if (SlowModeInsteadOfPauseMenu) {
				if (!isGameSlowed) {
					if (!HasSavedSetPlayerDilation) {
						BackupPlayerTimeDilation = Player->CustomTimeDilation;
						HasSavedSetPlayerDilation = true;
					}
					settings->timeDilation = static_cast <float> (0.09);
					Player->CustomTimeDilation = static_cast <float> (3.15);
					ConsoleTools::ConsoleWrite("[Sport Scramble] :  Time Slowed!");
					//ConsoleTools::ConsoleWrite("[Sport Scramble] :  Set Time Dilation : " + std::to_string(settings->timeDilation));
					//ConsoleTools::ConsoleWrite("[Sport Scramble] :  Set Player Time Dilation : " + std::to_string(Player->CustomTimeDilation));

					isGameSlowed = true;
					block = true;
				}
				else {
					ConsoleTools::ConsoleWrite("[Sport Scramble] :  Time Restored!");
					settings->timeDilation = static_cast <float> (1);
					if (HasSavedSetPlayerDilation) {
						Player->CustomTimeDilation = static_cast <float> (BackupPlayerTimeDilation);
						HasSavedSetPlayerDilation = false;
					}
					else {
						Player->CustomTimeDilation = static_cast <float> (1);
					}
					//ConsoleTools::ConsoleWrite("[Sport Scramble] :  Restored Time Dilation : " + std::to_string(settings->timeDilation));
					//ConsoleTools::ConsoleWrite("[Sport Scramble] :  Restored Player Time Dilation : " + std::to_string(Player->CustomTimeDilation));
					isGameSlowed = false;
					block = true;
				}
			}
			else {
				if (settings->timeDilation != static_cast <float> (1)) {
					settings->timeDilation = static_cast <float> (1);
					if (HasSavedSetPlayerDilation) {
						Player->CustomTimeDilation = static_cast <float> (BackupPlayerTimeDilation);
						HasSavedSetPlayerDilation = false;
						block = true;
					}
					else {
						Player->CustomTimeDilation = static_cast <float> (1);
						block = true;
					}
				}
			}
		}
	}

	ReportCustomEvent(func, block, modified);
	if(block)
	{
		return;
	}

	try {
		if (thiz != nullptr && function != nullptr ) {
			oProcessEvent(thiz, function, parms);
		}
	}
	catch (...) {}
}



void StartProcessEventHook()
{
	uintptr_t mBaseAddress = GetBaseAddress();
	uintptr_t ProcessEventAddress = mBaseAddress + UObjectProcessEvent_Offset;

	auto peFunc = reinterpret_cast<ProcessEvent>(ProcessEventAddress);
	bool processEventHooked = MH_CreateHook(peFunc, reinterpret_cast<void*>(HkProcessEvent), reinterpret_cast<void**>(&oProcessEvent)) == MH_OK && MH_EnableHook(peFunc) == MH_OK;
	if (processEventHooked)
	{
		ConsoleTools::ConsoleWrite("Hooked Object Process Event!");
	}
	else
	{
		ConsoleTools::ConsoleWrite("Failed to Hook Object Process Event!");
	}
	
}



DWORD WINAPI MainThread(LPVOID lpReserved)
{
	if (!CG::InitSdk())
	{
		// TODO: Should handle that
		return FALSE;
	}

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