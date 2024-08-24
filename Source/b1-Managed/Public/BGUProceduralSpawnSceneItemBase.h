#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUActorBaseCS.h"
#include "BGUProceduralSpawnSceneItemBase.generated.h"

class UBUS_ProceduralSpawnSceneItemDataConfigComp;

UCLASS(Blueprintable)
class ABGUProceduralSpawnSceneItemBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ProceduralSpawnSceneItemDataConfigComp* ProceduralSpawnSceneItemDataConfigComp;
    
    ABGUProceduralSpawnSceneItemBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
};

