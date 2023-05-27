#pragma once
#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include "kiero/kiero.h"
#include "kiero/minhook/include/MinHook.h"
#include "ConsoleUtils.h"
#include "CheatsCode.h"



typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;