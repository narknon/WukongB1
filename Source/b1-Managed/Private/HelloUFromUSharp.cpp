#include "HelloUFromUSharp.h"
#include "HelloUTestComp.h"

AHelloUFromUSharp::AHelloUFromUSharp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Value123 = 0;
    this->TestComp = CreateDefaultSubobject<UHelloUTestComp>(TEXT("TestComp"));
    this->ActorClass = NULL;
    this->ActorClass4 = NULL;
}

void AHelloUFromUSharp::CallMe(const FString& Arg1) {
}

void AHelloUFromUSharp::ReceiveBeginPlay_Implementation() {
}


