#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "TortoiseRotateTriggerBoxInfo.h"
#include "BUS_TortoiseMoveMgrActorConfigComp.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TortoiseMoveMgrActorConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Tortoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelMoveAttachedBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FakeMoveLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TortoiseUnitResIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FTortoiseRotateTriggerBoxInfo> TortoiseRotationTriggerBoxInfoMap;
    
public:
    UBUS_TortoiseMoveMgrActorConfigComp(const FObjectInitializer& ObjectInitializer);

};

