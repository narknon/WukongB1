#pragma once
#include "CoreMinimal.h"
#include "DonNavigationManager.h"
#include "DonNavigationManagerUnbound.generated.h"

UCLASS(Blueprintable)
class DONAINAVIGATION_API ADonNavigationManagerUnbound : public ADonNavigationManager {
    GENERATED_BODY()
public:
    ADonNavigationManagerUnbound(const FObjectInitializer& ObjectInitializer);

};

