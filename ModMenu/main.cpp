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

typedef void(__thiscall* ProcessEvent)(CG::UObject*, CG::UFunction*, void*);
ProcessEvent oProcessEvent;

std::string bool_as_text(bool b)
{
	std::stringstream converter;
	converter << std::boolalpha << b;   // flag boolalpha calls converter.setf(std::ios_base::boolalpha)
	return converter.str();
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
bool LoggerActive = true;

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
		ConsoleTools::ConsoleWrite("Enable_Instance_DebugMode [DESC]: Enables Debug Mode!");
		ConsoleTools::ConsoleWrite("Disable_Instance_DebugMode [DESC]: Disables Debug Mode!");
		ConsoleTools::ConsoleWrite("Enable_Debug_Balls [DESC]: Enables Debug Items?!");
		ConsoleTools::ConsoleWrite("Disable_Debug_Balls [DESC]: Disables Debug Items?!");
		ConsoleTools::ConsoleWrite("Set_AI_Score (value) [DESC]: Set AI Score (Tennis)?!");
		ConsoleTools::ConsoleWrite("Set_Player_Score (value) [DESC]: Set Player Score (Tennis)?!");
		ConsoleTools::ConsoleWrite("Enable_BigMode (value) [DESC]: Enable Player BigMode !");
		ConsoleTools::ConsoleWrite("Disable_BigMode (value) [DESC]: Disable Player BigMode!");

		ConsoleInput();
	}
	else if (input == "KillBounds")
	{
		KillCameraCovers();
		CheckPermittedArea();
		ExpandBoundsToMakeTriggerShutTheFuckUp();
		ConsoleTools::ConsoleWrite("Killed Bounds");
		ConsoleInput();
	}
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
	else if (input == "Enable_Instance_DebugMode")
	{
		Enable_Instance_DebugMode();
		ConsoleInput();
	}
	else if (input == "Disable_Instance_DebugMode")
	{
		Disable_Instance_DebugMode();
		ConsoleInput();
	}
	else if (input == "Enable_Debug_Balls")
	{
		Enable_Debug_Balls();
		ConsoleInput();
	}
	else if (input == "Disable_Debug_Balls")
	{
		Disable_Debug_Balls();
		ConsoleInput();
	}
	else if (input == "Enable_BigMode")
	{
		Enable_BigMode();
		ConsoleInput();
	}
	else if (input == "Disable_BigMode")
	{
		Disable_BigMode();
		ConsoleInput();
	}
	else if (input == "Set_AI_Score")
	{
		ConsoleTools::ConsoleWrite("Put AI Score Here:");
		int score;
		std::cin >> score; // input the length
		Set_AI_Score(score);
		ConsoleInput();
	}
	else if (input == "Set_Player_Score")
	{
		ConsoleTools::ConsoleWrite("Put Player Score Here: ");
		int score;
		std::cin >> score; // input the length
		Set_AI_Score(score);
		ConsoleInput();
	}
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

const std::vector<std::string> ClassNames = {
	"PauseCapsule.PauseCapsule_C",
};
const std::vector<std::string> FilterList = {
		"BlueprintUpdateCamera",
		"ExecuteUbergraph_",
		"BlueprintModifyCamera",
		"K2_DestroyActor",
		"BlueprintModifyPostProcess",
		"ReceiveTick",
		"OnMotionControllerUpdated",
		"BlueprintUpdateAnimation",
		"BlueprintPostEvaluateAnimation"
		"__UpdateFunc",
		"Timeline_FadeOut__UpdateFunc",
		"Timeline_BlackPulse__UpdateFunc",
		"Timeline_BlackPulse__FinishedFunc"
};

bool AllowAllFunctions = false;
void ReportCustomEvent(const std::string& EventName) {
	if (!LoggerActive) return;
	std::string Function = EventName.substr(EventName.find_last_of(".") + 1);

	for (const auto& filter : FilterList) {
		if (Function.find(filter) != std::string::npos) {
			// This function matches a filter or has a similar pattern, so we don't want to report it.
			return;
		}
	}

	// If AllowAllFunctions is true, we report all events.
	// Otherwise, we proceed to check if the remaining string contains any of the specified class names.
	if (AllowAllFunctions) {
		ConsoleTools::ConsoleWrite(EventName);
		return;
	}

	// Strip the function name from the input string
	std::string eventNameWithoutFunction = EventName.substr(0, EventName.find("("));

	// Check if the remaining string matches any of the specified class names
	for (const auto& ClassName : ClassNames) {
		if (eventNameWithoutFunction.find(ClassName) != std::string::npos) {
			ConsoleTools::ConsoleWrite(EventName);
			return;
		}
	}
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


	if (func == "Function PauseCapsule.PauseCapsule_C.ReceiveBeginPlay")
	{
		auto instance = static_cast<CG::APauseCapsule_C*>(thiz);
		if (instance != nullptr)
		{
			instance->CreateCapsule();
		}
	}
		if (func == "Function PauseCapsule.PauseCapsule_C.Unpause")
	{
		auto instance = static_cast<CG::APauseCapsule_C*>(thiz);
		if (instance != nullptr)
		{
			ReportCustomEvent(func);
			oProcessEvent(thiz, function, parms);
			instance->RemoveCapsule();
			instance->QueuedRemoveCapsule();
			instance->RemoveThisActor();
			//instance->ReceiveEndPlay(CG::EEndPlayReason::RemovedFromWorld);
			//if(instance->PlayerController != nullptr)
			//{
			//	instance->PlayerController->UnpauseGame();
			//	instance->PlayerController->QueuedUnpauseGame();
			//}
			return;
		}
	}

	if (func == "Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerOutOfBoundary") return;
	if (func == "Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerExitBoundary__DelegateSignature") return;
	if (func == "Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerOutOfBoundary") return;
	//if (func == "Function PauseCapsule.PauseCapsule_C.BlackPulse") return;
	if (func == "Function SportsScramble.ScramPlayerTrigger.OnPlayerExit") return;
	if (func == "Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__FinishedFunc") return;
	if (func == "Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__UpdateFunc") return;
	ReportCustomEvent(func);

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