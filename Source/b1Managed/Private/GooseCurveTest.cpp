#include "GooseCurveTest.h"

UGooseCurveTest::UGooseCurveTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProgressCurve = NULL;
    this->Time = 0.00f;
}

void UGooseCurveTest::BeginPlayInCS_Implementation() {
}

void UGooseCurveTest::TickComponentInCS_Implementation(float DeltaTime) {
}


