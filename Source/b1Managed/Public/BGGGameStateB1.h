#pragma once
#include "CoreMinimal.h"
#include "BGGGameStateCS.h"
#include "BGGGameStateB1.generated.h"

UCLASS(Blueprintable)
class ABGGGameStateB1 : public ABGGGameStateCS {
    GENERATED_BODY()
public:
    ABGGGameStateB1(const FObjectInitializer& ObjectInitializer);

};

