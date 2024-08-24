#include "IL2CPPUnitTest.h"

AIL2CPPUnitTest::AIL2CPPUnitTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CSIntProperty = 0;
}

void AIL2CPPUnitTest::CallInBP(const FString& CheckIt) {
}

void AIL2CPPUnitTest::DelegateCB(int32 p1, int32 p2, int32 p3, int32 p4) {
}

void AIL2CPPUnitTest::TestPassComplexStruct(FIL2CPPUnitTestStructOuter OuterStruct) {
}

void AIL2CPPUnitTest::TickInCS_Implementation(float DeltaTime) {
}

int32 AIL2CPPUnitTest::IntRetTest_Implementation(int32 p1, float p2, bool bP3, int32& Out1) {
    return 0;
}

bool AIL2CPPUnitTest::BoolRetTest_Implementation(int32 p1, float p2, bool bP3) {
    return false;
}

int32 AIL2CPPUnitTest::IntRetTest2_Implementation(int32 p1, float p2, bool bP3) {
    return 0;
}

void AIL2CPPUnitTest::BeginPlayInCS_Implementation() {
}


