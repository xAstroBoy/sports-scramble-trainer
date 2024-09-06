#pragma once
#include <string>

namespace ConsoleTools
{
	void ConsoleWrite(std::string text);
	void ConsoleWrite(std::wstring text);
	std::string bool_as_text(bool b);
	bool ShowConsole();
}
