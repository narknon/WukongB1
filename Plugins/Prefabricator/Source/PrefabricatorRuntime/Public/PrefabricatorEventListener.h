#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PrefabricatorEventListener.generated.h"

class APrefabActor;

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API UPrefabricatorEventListener : public UObject {
    GENERATED_BODY()
public:
    UPrefabricatorEventListener();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostSpawn(APrefabActor* Prefab);
    
};

