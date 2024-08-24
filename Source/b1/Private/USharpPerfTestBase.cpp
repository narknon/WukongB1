#include "USharpPerfTestBase.h"

AUSharpPerfTestBase::AUSharpPerfTestBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IntProp = 514;
}


float AUSharpPerfTestBase::TestFastFuncExport(int32 p1, float p2, int32 p3, bool bP4) {
    return 0.0f;
}

int32 AUSharpPerfTestBase::StructAsClassGetInt(const FUSharpTestStructAsClass& InVal) {
    return 0;
}

FUSharpTestStructAsClass AUSharpPerfTestBase::StructAsClassCreate(int32 RawValue) {
    return FUSharpTestStructAsClass{};
}

void AUSharpPerfTestBase::InvokeMultiDelegateNoDyn(int32 AttrID, int32 RealNewValue, int32 RealOrgValue, int32 ExpectChangeValue) {
}

void AUSharpPerfTestBase::InvokeMultiDelegate(int32 AttrID, int32 RealNewValue, int32 RealOrgValue, int32 ExpectChangeValue) {
}



void AUSharpPerfTestBase::EmptyCallableFuncWithParams2(FName p1, const FString& p2, FText p3) {
}

void AUSharpPerfTestBase::EmptyCallableFuncWithParams(int32 p1, float p2, int32 p3, bool bP4) {
}

void AUSharpPerfTestBase::EmptyCallableFunc() {
}




