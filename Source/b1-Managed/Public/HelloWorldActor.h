#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HelloWorldActor.generated.h"

UCLASS(Blueprintable)
class AHelloWorldActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value123;
    
    AHelloWorldActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CallMe();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

