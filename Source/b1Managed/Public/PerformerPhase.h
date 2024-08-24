#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerformerPhase.generated.h"

class UPerformerActionBase;
class UPerformerConditionBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerPhase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerformerConditionBase* NextCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPerformerActionBase*> Actions;
    
public:
    UPerformerPhase();

};

