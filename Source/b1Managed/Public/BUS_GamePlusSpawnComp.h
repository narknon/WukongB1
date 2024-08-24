#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "GamePlusSpawnConfig.h"
#include "TaskCollectionState.h"
#include "BUS_GamePlusSpawnComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_GamePlusSpawnComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGamePlusSpawnConfig> GamePlusSpawnConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskStageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TaskCollectionState TaskStageStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectionCountMax;
    
    UBUS_GamePlusSpawnComp(const FObjectInitializer& ObjectInitializer);

};

