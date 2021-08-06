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
using namespace std;




void ConsoleWrite(string text)
{
	cout << text + "\n";
}

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



#pragma region Console Parts.

void DeAttach(const HMODULE hModule)
{
	FreeLibraryAndExitThread(hModule, 0);
}

bool allocate_console() {
	if (AllocConsole() != NULL) {
		SetConsoleTitle(TEXT("Sport Scramble VR MOD Console Built by xAstroBoy#1337!"));
		freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
		freopen_s(reinterpret_cast<FILE**>(stdin), "CONIN$", "r", stdin);
		freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);
		return true;
	}
	return false;
}



#pragma endregion



void ConsoleInput()
{
	cout << " \n ";

	cout << "\nModConsole Commands:  ";
	string input;
	cin >> input;

	if (input == "help")
	{
		cout << "Sport Scramble Mod Console Available commands:\n";
		cout << "help  [DESC]:  This page. \n";
		cout << "KillBounds [DESC]: Remove any game Boundaries!\n";
		cout << "ToggleDebugMenu [DESC]: Toggles Debug Menu!\n";
		cout << "CreateDebugMenu [DESC]: Creates Debug Menu!\n";
		cout << "Enable_Instance_DebugMode [DESC]: Enables Debug Mode!\n";
		cout << "Disable_Instance_DebugMode [DESC]: Disables Debug Mode!\n";
		cout << "Enable_Debug_Balls [DESC]: Enables Debug Items?!\n";
		cout << "Disable_Debug_Balls [DESC]: Disables Debug Items?!\n";
		cout << "Set_AI_Score (value) [DESC]: Set AI Score (Tennis)?!\n";
		cout << "Set_Player_Score (value) [DESC]: Set Player Score (Tennis)?!\?!\n";
		cout << "Enable_BigMode (value) [DESC]: Enable Player BigMode !\?!\n";
		cout << "Disable_BigMode (value) [DESC]: Disable Player BigMode!\?!\n";

		ConsoleInput();
	}
	else if (input == "KillBounds")
	{
		KillCameraCovers();
		CheckPermittedArea();
		ConsoleWrite("Killed Bounds");
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
		ConsoleWrite("Put AI Score Here:");
		int score;
		cin >> score; // input the length 
		Set_AI_Score(score);
		ConsoleInput();
	}
	else if (input == "Set_Player_Score")
	{
		ConsoleWrite("Put Player Score Here:");
		int score;
		cin >> score; // input the length 
		Set_AI_Score(score);
		ConsoleInput();
	}
	else
	{
		cout << "\n Command Not found. Type help for command list. \n";
		ConsoleInput();
	}
}



DWORD WINAPI OnAttach(const HMODULE hModule)
{
	allocate_console();
	CG::InitSdk();

	cout << "\nThis Cheat has been coded by xAstroBoy#1337, enjoy! \n";

	ConsoleInput();

	return 0;
}


BOOL APIENTRY  DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	DisableThreadLibraryCalls(hModule);
	HANDLE hThread = nullptr;
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		hThread = CreateThread(nullptr, NULL, LPTHREAD_START_ROUTINE(OnAttach), hModule, NULL, nullptr);
		//if (hThread)
		//	CloseHandle(hThread);
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}