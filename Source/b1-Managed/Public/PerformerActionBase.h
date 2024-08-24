#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerformerActionBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerActionBase : public UObject {
    GENERATED_BODY()
public:
    UPerformerActionBase();

};

