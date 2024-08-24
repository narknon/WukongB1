#pragma once
#include "CoreMinimal.h"
#include "USharpPerfTestBase.h"
#include "SharpPerfTest.generated.h"

UCLASS(Blueprintable)
class ASharpPerfTest : public AUSharpPerfTestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CSIntProperty;
    
    ASharpPerfTest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DelegateCB(int32 p1, int32 p2, int32 p3, int32 p4);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickInCS(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

