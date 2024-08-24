#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HelloUSharpDelegateDelegate.h"
#include "HelloUStructTest.h"
#include "Templates/SubclassOf.h"
#include "HelloUFromUSharp.generated.h"

class UClass;
class UHelloUTestComp;

UCLASS(Blueprintable)
class AHelloUFromUSharp : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value123;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value456;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelloUSharpDelegate DelegateTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHelloUTestComp* TestComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TestArr2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ActorClass4;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelloUStructTest Struct;
    
public:
    AHelloUFromUSharp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CallMe(const FString& Arg1);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

