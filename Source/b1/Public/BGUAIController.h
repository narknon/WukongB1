#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "BGUAIController.generated.h"

class UAIPerceptionComponent;
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(Blueprintable, Config=Game)
class ABGUAIController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* AIPerceptionComp;
    
    ABGUAIController(const FObjectInitializer& ObjectInitializer);

};

