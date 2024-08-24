#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BUC_AIComponent.generated.h"

class ABGUAIController;
class UAIPerceptionComponent;

UCLASS(Blueprintable)
class B1_API UBUC_AIComponent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* PerceptionComp;
    
    UBUC_AIComponent();

};

