#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ConstructionSystemBuildUI.generated.h"

class UConstructionSystemComponent;
class UConstructionSystemUIAsset;

UINTERFACE(Blueprintable)
class UConstructionSystemBuildUI : public UInterface {
    GENERATED_BODY()
};

class IConstructionSystemBuildUI : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUIAsset(UConstructionSystemUIAsset* UIAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConstructionSystem(UConstructionSystemComponent* ConstructionSystem);
    
};

