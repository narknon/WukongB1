#include "SharpPerfTest.h"

ASharpPerfTest::ASharpPerfTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CSIntProperty = 0;
}

void ASharpPerfTest::DelegateCB(int32 p1, int32 p2, int32 p3, int32 p4) {
}

void ASharpPerfTest::TickInCS_Implementation(float DeltaTime) {
}

void ASharpPerfTest::ReceiveTick_Implementation(float DeltaSeconds) {
}

void ASharpPerfTest::ReceiveBeginPlay_Implementation() {
}


