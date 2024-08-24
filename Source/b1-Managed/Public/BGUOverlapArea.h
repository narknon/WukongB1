#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUOverlapArea.generated.h"

UCLASS(Blueprintable)
class ABGUOverlapArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    ABGUOverlapArea(const FObjectInitializer& ObjectInitializer);

};

