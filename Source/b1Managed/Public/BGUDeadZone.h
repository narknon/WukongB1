#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUDeadZone.generated.h"

UCLASS(Blueprintable)
class ABGUDeadZone : public ABGUAreaBase {
    GENERATED_BODY()
public:
    ABGUDeadZone(const FObjectInitializer& ObjectInitializer);

};

