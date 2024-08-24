#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BaseActorComp.h"
#include "GSEventCollectionBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGSEventCollectionBase : public UBaseActorComp {
    GENERATED_BODY()
public:
    UGSEventCollectionBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndPlayInCS(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeCS();
    
};

