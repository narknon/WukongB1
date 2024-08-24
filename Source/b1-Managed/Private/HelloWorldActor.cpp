#include "HelloWorldActor.h"

AHelloWorldActor::AHelloWorldActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Value123 = 0;
}

void AHelloWorldActor::CallMe() {
}

void AHelloWorldActor::ReceiveBeginPlay_Implementation() {
}


