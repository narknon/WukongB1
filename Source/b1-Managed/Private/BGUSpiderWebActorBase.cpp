#include "BGUSpiderWebActorBase.h"
#include "NiagaraComponent.h"

ABGUSpiderWebActorBase::ABGUSpiderWebActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->WebComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SpiderWeb"));
    this->VisibleDistance = 10000;
}

void ABGUSpiderWebActorBase::ReceiveData_Implementation() {
}

void ABGUSpiderWebActorBase::ReceiveBeginPlay_Implementation() {
}


