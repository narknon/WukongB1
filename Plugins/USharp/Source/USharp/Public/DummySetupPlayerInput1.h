#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DummySetupPlayerInput1.generated.h"

UCLASS(Blueprintable)
class USHARP_API ADummySetupPlayerInput1 : public APawn {
    GENERATED_BODY()
public:
    ADummySetupPlayerInput1(const FObjectInitializer& ObjectInitializer);

};

