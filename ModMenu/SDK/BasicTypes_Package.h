#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#define UE4
#define GOBJECTS_CHUNKS

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Forwards
	// --------------------------------------------------
	class UObject;

	// --------------------------------------------------
	// # Global functions
	// --------------------------------------------------
	bool InitSdk(const std::wstring& moduleName, uintptr_t gObjectsOffset, uintptr_t gNamesOffset, uintptr_t gWorldOffset);
	bool InitSdk();
	void blankVoid();
	template<typename Fn>
    Fn GetVFunction(const void* instance, size_t index)
    {
        auto vtable = *static_cast<const void***>(const_cast<void*>(instance));
        if (vtable != nullptr)
        {
            try
            {

                auto VtableIndex = vtable[index];
                if (VtableIndex != nullptr)
                {
                    return reinterpret_cast<Fn>(const_cast<void(*)>(VtableIndex));
                }
            }
			catch (...)
			{
                    // Handle the exception if any
                    // You can choose to log an error, throw a different exception, or take appropriate action
            }

        }
        return nullptr;
    }

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#include "BasicTypes_Structs.h"
#include "BasicTypes_Classes.h"

