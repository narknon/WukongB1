#pragma once
#include "CoreMinimal.h"
#include "BGP_AIPlayerControllerCS.h"
#include "BGP_AIPlayerControllerB1.generated.h"

UCLASS(Blueprintable)
class ABGP_AIPlayerControllerB1 : public ABGP_AIPlayerControllerCS {
    GENERATED_BODY()
public:
    ABGP_AIPlayerControllerB1(const FObjectInitializer& ObjectInitializer);

};

