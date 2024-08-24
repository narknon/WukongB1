#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BUE_USharpPerfTestDelegate.h"
#include "USharpTestStructAsClass.h"
#include "USharpPerfTestBase.generated.h"

UCLASS(Blueprintable)
class B1_API AUSharpPerfTestBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntProp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUE_USharpPerfTest FBUE_USharpCallbackPerfTest;
    
    AUSharpPerfTestBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickInCS(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    float TestFastFuncExport(int32 p1, float p2, int32 p3, bool bP4);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 StructAsClassGetInt(const FUSharpTestStructAsClass& InVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUSharpTestStructAsClass StructAsClassCreate(int32 RawValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InvokeMultiDelegateNoDyn(int32 AttrID, int32 RealNewValue, int32 RealOrgValue, int32 ExpectChangeValue);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMultiDelegate(int32 AttrID, int32 RealNewValue, int32 RealOrgValue, int32 ExpectChangeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 IntRetTest2(int32 p1, float p2, bool bP3);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 IntRetTest(int32 p1, float p2, bool bP3, int32& Out1);
    
    UFUNCTION(BlueprintCallable)
    void EmptyCallableFuncWithParams2(FName p1, const FString& p2, FText p3);
    
    UFUNCTION(BlueprintCallable)
    void EmptyCallableFuncWithParams(int32 p1, float p2, int32 p3, bool bP4);
    
    UFUNCTION(BlueprintCallable)
    void EmptyCallableFunc();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BoolRetTest(int32 p1, float p2, bool bP3);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayInCS();
    
};

