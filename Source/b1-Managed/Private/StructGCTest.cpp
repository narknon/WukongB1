#include "StructGCTest.h"

AStructGCTest::AStructGCTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DA = NULL;
    this->bDoGCCheck = false;
    this->SMCActor = NULL;
    this->SMC = NULL;
    this->QueueData = NULL;
}

void AStructGCTest::DoInit() {
}

void AStructGCTest::DoCheck() {
}

void AStructGCTest::DestroyFX() {
}


