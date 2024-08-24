#pragma once
#include "CoreMinimal.h"
#include "BGP_PlayerStateCS.h"
#include "BGP_PlayerStateB1.generated.h"

UCLASS(Blueprintable)
class ABGP_PlayerStateB1 : public ABGP_PlayerStateCS {
    GENERATED_BODY()
public:
    ABGP_PlayerStateB1(const FObjectInitializer& ObjectInitializer);

};

