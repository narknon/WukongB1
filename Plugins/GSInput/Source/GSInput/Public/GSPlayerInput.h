#pragma once
#include "CoreMinimal.h"
#include "EnhancedPlayerInput.h"
#include "GSPlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient)
class GSINPUT_API UGSPlayerInput : public UEnhancedPlayerInput {
    GENERATED_BODY()
public:
    UGSPlayerInput();

};

