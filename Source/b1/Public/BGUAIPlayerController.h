#pragma once
#include "CoreMinimal.h"
#include "BGUAIController.h"
#include "BGUAIPlayerController.generated.h"

UCLASS(Blueprintable)
class ABGUAIPlayerController : public ABGUAIController {
    GENERATED_BODY()
public:
    ABGUAIPlayerController(const FObjectInitializer& ObjectInitializer);

};

