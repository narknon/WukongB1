#pragma once
#include "CoreMinimal.h"
#include "BGUCharacterCS.h"
#include "BGUSimpleCharacter.generated.h"

UCLASS(Blueprintable)
class ABGUSimpleCharacter : public ABGUCharacterCS {
    GENERATED_BODY()
public:
    ABGUSimpleCharacter(const FObjectInitializer& ObjectInitializer);

};

