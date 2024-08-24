#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "Templates/SubclassOf.h"
#include "BUS_TrainDummyMgrConfigComp.generated.h"

class ABGUTamerBase;
class UBGWDataAsset_TrainDummyConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TrainDummyMgrConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGUTamerBase> TrainDummyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerRoleDataConfigID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TrainDummyConfig* TrainDummyConfig;
    
    UBUS_TrainDummyMgrConfigComp(const FObjectInitializer& ObjectInitializer);

};

