#pragma once
#include "CoreMinimal.h"
#include "GSDynamicSDFInitializer.h"
#include "BGUDynamicSDFGenerator2.generated.h"

class AActor;

UCLASS(Blueprintable)
class ABGUDynamicSDFGenerator2 : public AGSDynamicSDFInitializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachTo;
    
    ABGUDynamicSDFGenerator2(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

