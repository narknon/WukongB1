#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode_Event.h"
#include "BED_MovieNode_OnSkipping.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_MovieNode_OnSkipping : public UBED_MovieNode_Event {
    GENERATED_BODY()
public:
    UBED_MovieNode_OnSkipping();

};

