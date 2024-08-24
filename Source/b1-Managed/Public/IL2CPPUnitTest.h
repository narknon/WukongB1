#pragma once
#include "CoreMinimal.h"
#include "USharpPerfTestBase.h"
#include "IL2CPPUnitTestStruct1.h"
#include "IL2CPPUnitTestStructOuter.h"
#include "IL2CPPUnitTest.generated.h"

UCLASS(Blueprintable)
class AIL2CPPUnitTest : public AUSharpPerfTestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CSIntProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIL2CPPUnitTestStructOuter StructArrayTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIL2CPPUnitTestStruct1> TestArrEdit;
    
    AIL2CPPUnitTest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CallInBP(const FString& CheckIt);
    
    UFUNCTION(BlueprintCallable)
    void DelegateCB(int32 p1, int32 p2, int32 p3, int32 p4);
    
    UFUNCTION(BlueprintCallable)
    void TestPassComplexStruct(FIL2CPPUnitTestStructOuter OuterStruct);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickInCS(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 IntRetTest(int32 p1, float p2, bool bP3, int32& Out1);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BoolRetTest(int32 p1, float p2, bool bP3);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 IntRetTest2(int32 p1, float p2, bool bP3);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
};

