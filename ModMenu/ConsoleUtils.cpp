#include "pch.h"
#include "ConsoleUtils.h"

#include <iostream>
#include <sstream>
#include "stdafx.h"

namespace ConsoleTools
{
	void ConsoleWrite(const std::string text)
	{
		std::cout << text << std::endl;
	}

	void ConsoleWrite(const std::wstring text)
	{
		std::wcout << text << std::endl;
	}

	std::string bool_as_text(bool b)
	{
		std::stringstream converter;
		converter << std::boolalpha << b;   // flag boolalpha calls converter.setf(std::ios_base::boolalpha)
		return converter.str();
	}


	bool ShowConsole() {
		if (AllocConsole() != NULL) {
			SetConsoleTitle(TEXT("Sports Scramble Cheats Built by xAstroBoy!"));
			freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
			freopen_s(reinterpret_cast<FILE**>(stdin), "CONIN$", "r", stdin);
			freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);
			ConsoleWrite("This Cheat has been coded by xAstroBoy, enjoy!");
			return true;
		}
		return false;
	}

}