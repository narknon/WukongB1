#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_ProceduralSpawnSceneItemDataConfigComp.generated.h"

class UBGWProceduralSpawnSceneItemDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ProceduralSpawnSceneItemDataConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWProceduralSpawnSceneItemDataAsset* ProceduralSceneItemDataAsset;
    
    UBUS_ProceduralSpawnSceneItemDataConfigComp(const FObjectInitializer& ObjectInitializer);

};

