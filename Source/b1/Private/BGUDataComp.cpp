#include "BGUDataComp.h"

UBGUDataComp::UBGUDataComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mUBUC_AIComponent = NULL;
    this->mUBUC_ACharacterComponent = NULL;
}

void UBGUDataComp::InitWithCharacter(ABGUCharacter* Character) {
}

void UBGUDataComp::InitWithAIController(ABGUAIController* AIController) {
}


