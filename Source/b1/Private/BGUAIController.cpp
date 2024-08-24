#include "BGUAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BGUCrowdFollowingComponent.h"

ABGUAIController::ABGUAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBGUCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->BrainComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComp"));
    this->BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    this->BehaviorComp = (UBehaviorTreeComponent*)BrainComponent;
    this->AIPerceptionComp = (UAIPerceptionComponent*)PerceptionComponent;
}


