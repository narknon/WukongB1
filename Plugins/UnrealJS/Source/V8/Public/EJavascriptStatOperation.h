#pragma once
#include "CoreMinimal.h"
#include "EJavascriptStatOperation.generated.h"

UENUM(BlueprintType)
enum class EJavascriptStatOperation : uint8 {
    Invalid,
    SetLongName,
    AdvanceFrameEventGameThread,
    AdvanceFrameEventRenderThread,
    CycleScopeStart,
    CycleScopeEnd,
    SpecialMessageMarker,
    Set,
    Clear,
    Add,
    Subtract,
    ChildrenStart,
    ChildrenEnd,
    Leaf,
    MaxVal,
    Memory,
};

