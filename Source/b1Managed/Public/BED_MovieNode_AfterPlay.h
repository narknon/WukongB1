#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode_Event.h"
#include "BED_MovieNode_AfterPlay.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_MovieNode_AfterPlay : public UBED_MovieNode_Event {
    GENERATED_BODY()
public:
    UBED_MovieNode_AfterPlay();

};

