#include <regex>
#include "pch.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK/Headers/BasicTypes.h"
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
#include <unordered_map>
#include <functional>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <vector>

#include "SDK/Headers/CenterReturnWall_ACenterReturnWall_C.h"
#include "SDK/Headers/CoreUObject_UFunction.h"
#include "SDK/Headers/Engine_ABlockingVolume.h"
#include "SDK/Headers/Engine_ACameraBlockingVolume.h"
#include "SDK/Headers/Engine_APlayerController.h"
#include "SDK/Headers/Engine_AWorldSettings.h"
#include "SDK/Headers/Engine_UCheatManager.h"
#include "SDK/Headers/Engine_UConsole.h"
#include "SDK/Headers/Engine_UEngine.h"
#include "SDK/Headers/Engine_UGameInstance.h"
#include "SDK/Headers/Engine_ULocalPlayer.h"
#include "SDK/Headers/Engine_USceneComponent.h"
#include "SDK/Headers/FrontEndManager_AFrontEndManager_C.h"
#include "SDK/Headers/ScramCameraCover_BP_AScramCameraCover_BP_C.h"
#include "SDK/Headers/ScramPlayerBoundary_BP_AScramPlayerBoundary_BP_C.h"
#include "SDK/Headers/ScramSportManagerTennis_Blueprint_AScramSportManagerTennis_Blueprint_C.h"
#include "SDK/Headers/SportsScramble_AScramPlayerTrigger.h"
#include "SDK/Headers/TN_Ball_Base_ATN_Ball_Base_C.h"
#include "SDK/Headers/Engine_UGameplayStatics.h"
#include "SDK/Headers/Engine_UGameViewportClient.h"
#include "SDK/Headers/Engine_ULevel.h"
#include "SDK/Headers/Engine_UWorld.h"
#include "SDK/Headers/ManagerTennis_LocalHelper_AManagerTennis_LocalHelper_C.h"
#include "SDK/Headers/ScramPlayer_BP_AScramPlayer_BP_C.h"
#include "SDK/Headers/SportsScramble_PARAMS.h"
#include "SDK/Headers/TN_AcceleratorBall_ATN_AcceleratorBall_C.h"

#pragma once
#pragma warning(disable: 4717)
#pragma warning(disable: 4806)
#pragma warning(disable: 305)


struct Command {
	std::function<void(std::vector<std::string>)> handler;  
	std::string description;
};

std::unordered_map<std::string, Command> commandMap;

typedef void(__thiscall* ProcessEvent)(CG::CoreUObject::UObject*, CG::CoreUObject::UFunction*, void*);
ProcessEvent oProcessEvent;
uintptr_t UObjectProcessEvent_Offset = 0x662510;
void HelpCommand(std::vector<std::string> args);



CG::ScramSportManagerTennis_Blueprint::AScramSportManagerTennis_Blueprint_C* TennisManagerinstance;
CG::TN_Ball_Base::ATN_Ball_Base_C* Tn_Ball;
CG::CoreUObject::FVector TN_Original_Scale;
CG::CoreUObject::FVector TN_Scaled_Value;
float Scale_Adjuster = static_cast <float> (1);
bool SlowModeInsteadOfPauseMenu = true;
bool isGameSlowed = false;
bool HasSavedSetPlayerDilation = false;
bool Tennis_OnlyAccelleratorBall = false;
bool BigBallMode = true;
float BackupPlayerTimeDilation = 0;
bool LoggerActive = false;
bool DebugMessages = true;



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
		return std::stof(str); // Convert string to float
	}
	catch (const std::invalid_argument& e) {
		std::cerr << "Invalid argument: " << e.what() << std::endl;
		return 0.0f; // Return a default value or handle as needed
	}
	catch (const std::out_of_range& e) {
		std::cerr << "Out of range: " << e.what() << std::endl;
		return 0.0f; // Return a default value or handle as needed
	}
}


void DebugPrint(const std::string& text) {
	if (DebugMessages) {
		ConsoleTools::ConsoleWrite(text);
	}
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

	if(instance->FadedOut)
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
	auto TargetClass = CG::CoreUObject::UObject::FindObjects < CG::FrontEndManager::AFrontEndManager_C >();
	if (!TargetClass.empty()) {
		for (auto& mods : TargetClass) {
			if (mods != nullptr) {
				mods->ToggleDebugMenu();
			}
		}
	}
}

void CreateDebugMenu() {
	auto TargetClass = CG::CoreUObject::UObject::FindObjects  < CG::FrontEndManager::AFrontEndManager_C >();
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
	auto TargetClass = CG::CoreUObject::UObject::FindObjects  < CG::Engine::ACameraBlockingVolume>();
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

	auto TargetClass = CG::CoreUObject::UObject::FindObjects  < CG::Engine::ABlockingVolume>();
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
	auto TargetClass = CG::CoreUObject::UObject::FindObjects  < CG::ScramCameraCover_BP::AScramCameraCover_BP_C>();
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
	auto TargetClass = CG::CoreUObject::UObject::FindObjects  < CG::SportsScramble::AScramPlayerTrigger >();
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
	auto TargetClass = CG::CoreUObject::UObject::FindObjects  < CG::ScramPlayerBoundary_BP::AScramPlayerBoundary_BP_C >();
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
	auto TargetClass = CG::CoreUObject::UObject::FindObjects <CG::CenterReturnWall::ACenterReturnWall_C>();
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
		if(helper != nullptr)
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
void FindProcessEventIndex()
{
	int32_t index = 0;

	while (true)
	{
		// Get the object by index
		CG::CoreUObject::UObject* SomeObj = CG::CoreUObject::UObject::GetGlobalObjects()[index];

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
				Print("Found matching offset! using table index: " + std::to_string(i));

				std::ostringstream oss;
				oss << "PEIndex: 0x" << std::hex << i;
				Print(oss.str());

				return; // Exit the function after finding the match
			}
		}

		// Move to the next object if no match was found
		index++;
	}
}





void CreateNewBallScale(CG::TN_Ball_Base::ATN_Ball_Base_C* instance, CG::Engine::USceneComponent* root) {
	if (instance != nullptr) return;
	DebugPrint("Current Ball is " + instance->GetFullName());
	DebugPrint(
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
	DebugPrint(
		"Modified Ball scale is X: " + std::to_string(AdjustedScale.X) +
		" Y: " + std::to_string(AdjustedScale.Y) +
		" Z: " + std::to_string(AdjustedScale.Z));
}

void BigBallModeFunc(CG::TN_Ball_Base::ATN_Ball_Base_C* instance) {
	if (instance == nullptr)
		return;

	auto root = instance->RootComponent;
	if (root == nullptr)
		return;

	if (instance->GetFullName().find("TN_AcceleratorBall_C") != std::string::npos) {
		DebugPrint("Found Accelerator Ball");
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


void InitializeCheatManagerAndConsole(CG::Engine::APlayerController* PlayerController, CG::Engine::UEngine* Engine)
{
	auto statics = CG::CoreUObject::UObject::FindObjects <CG::Engine::UGameplayStatics>()[0];
	if (!statics || !Engine || !PlayerController)
	{
		DebugPrint("Failed to retrieve required instances!");
		return;
	}

	bool Cheat_spawned = false;
	bool Console_spawned = false;

	// Spawn CheatManager for the PlayerController
	if (!PlayerController->CheatManager && PlayerController->CheatClass)
	{
		if (auto CheatObject = statics->STATIC_SpawnObject(PlayerController->CheatClass, PlayerController))
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
		if (auto ConsoleObject = statics->STATIC_SpawnObject(Engine->ConsoleClass, Engine->GameViewport))
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

	if(Cheat_spawned && Console_spawned)
	{
		AutoCheatManager = false;
	}
	else
	{
		if(!Cheat_spawned)
		{
			DebugPrint("Failed to spawn CheatManager!");
		}
		if(!Console_spawned)
		{
			DebugPrint("Failed to spawn ViewPort Console!");
		}
		AutoCheatManager = true;
	}
}

CG::Engine::UEngine* GetEngine(int instance = 0)
{
	auto engines = CG::CoreUObject::UObject::FindObjects <CG::Engine::UEngine>();

	// Adjust index to ensure it's within bounds
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

static CG::TN_AcceleratorBall::ATN_AcceleratorBall_C* AccelleratorInstance = nullptr;

CG::TN_AcceleratorBall::ATN_AcceleratorBall_C* GetCapturedAccelleratorInstance() {
	if (AccelleratorInstance != nullptr) {
		return AccelleratorInstance;
	}

	auto TargetClass = CG::CoreUObject::UObject::FindObjects  < CG::TN_AcceleratorBall::ATN_AcceleratorBall_C >();
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
		Print("Only Accellerator Ball Enabled!");
	}
	else {
		Print("Only Accellerator Ball Disabled!");
	}
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
	{"set_ai_score", {[](std::vector<std::string> args) { if (!args.empty()) Set_AI_Score(std::stoi(args[0])); }, "(value) [DESC]: Set AI Score (Tennis)?!"}},
	{"set_player_score", {[](std::vector<std::string> args) { if (!args.empty()) Set_Player_Score(std::stoi(args[0])); }, "(value) [DESC]: Set Player Score (Tennis)?!"}},
	{"tennis_speedball", {[](std::vector<std::string> args) { TennisFastBallModeCommand(); }, "[DESC]: Toggles and enforces all tennis balls to be only accelerators!"}},
	{"slowmodecheat", {[](std::vector<std::string> args) { SlowGameInsteadOfPauseCommand(); }, "[DESC]: Toggles and enforces a slow mode instead of pause menu!"}},
	{"tennis_ai_serve", {[](std::vector<std::string> args) { TennisForceAiServe(); }, "[DESC]: Make the AI serve the ball in tennis!"}},
	{"tennis_bigball", {[](std::vector<std::string> args) { BigBallModeCommand(); }, "[DESC]: Toggles and enforces all tennis balls to be triple their size!"}},
	{"scale_adjuster", {[](std::vector<std::string> args) { if (!args.empty()) Scale_AdjusterCommand(ConvertToFloat(args[0])); }, "<float> [DESC]: Control how much the ball will increase in size!"}},
	{"indexfinder", {[](std::vector<std::string> args) { FindProcessEventIndex(); }, "[DESC]: Find the ProcessEvent Index!"}},
	{"proclogger", {[](std::vector<std::string> args) { ToggleProcLogger(); }, "[DESC]: Toggle Process Event Logger!"}},
	{"debuglog", {[](std::vector<std::string> args) { ToggleDebugLogs(); }, "[DESC]: Toggle Debug Messages!"}},
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
		"SportsScramble.ScramCameraCover",
		"ScramCameraCover_BP.ScramCameraCover_BP_C",
		"ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C",
		"SportsScramble.ScramPlayerTrigger"
	};

	for (const auto& blockFunc : blockFuncs) {
		if (func.find(blockFunc) != std::string::npos) {
			return true;
		}
	}

	return false;
}

// Helper function for handling BigBallMode logic
bool HandleBigBallMode(const std::string& func) {
	const std::unordered_set<std::string> bigBallFunctions = {
		"Function TN_Ball_Base.TN_Ball_Base_C.PlayNormalHitFX",
		"Function TN_Ball_Base.TN_Ball_Base_C.PlayChargeSliceBounceFX",
		"Function TN_Ball_Base.TN_Ball_Base_C.PlayChargeBounceFX",
		"Function TN_Ball_Base.TN_Ball_Base_C.PlayChargedSliceFX",
		"Function TN_Ball_Base.TN_Ball_Base_C.PlaySliceFX",
		"Function TN_Ball_Base.TN_Ball_Base_C.PlayChargedFX",
		"Function TN_Ball_Base.TN_Ball_Base_C.PlayImbuedFX",
		"Function TN_Ball_Base.TN_Ball_Base_C.NetPlayImbuedFX"
	};

	return BigBallMode && bigBallFunctions.find(func) != bigBallFunctions.end();
}

// Helper function for handling ReceiveTick function
void HandleTennisBallInstance(CG::CoreUObject::UObject* thiz, bool& modified) {
	auto instance = static_cast<CG::TN_Ball_Base::ATN_Ball_Base_C*>(thiz);
	if (instance) {
		std::async(std::launch::async, BigBallModeFunc, instance);
		modified = true;
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

	// Handle BigBallMode
	if (HandleBigBallMode(func)) {
		block = true;
	}


	if (func.find("TN_Ball_Base.TN_Ball_Base_C") != std::string::npos)
	{
		if (BigBallMode)
		{
			HandleTennisBallInstance(thiz, modified);
		}
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