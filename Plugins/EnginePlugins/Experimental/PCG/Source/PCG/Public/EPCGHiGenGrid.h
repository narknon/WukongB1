#pragma once
#include "CoreMinimal.h"
#include "EPCGHiGenGrid.generated.h"

UENUM()
enum class EPCGHiGenGrid : uint32 {
    Uninitialized,
    Grid32 = 32,
    Grid64 = 64,
    Grid128 = 128,
    Grid256 = 256,
    Grid512 = 512,
    Grid1024 = 1024,
    Grid2048 = 2048,
    GridMin = Grid32,
    GridMax = Grid2048,
    Unbounded = 4096,
    GenerationDefault = 8192,
};

