#pragma once
#include "CoreMinimal.h"
#include "EBGW_TextureSysMemMask.generated.h"

UENUM(BlueprintType)
enum class EBGW_TextureSysMemMask : uint8 {
    None,
    SystemUI,
    Vfx_NonStreamed,
    LandScape = 4,
    GrayBox_HeightMap = 8,
    Vfx_Atlas = 16,
};

