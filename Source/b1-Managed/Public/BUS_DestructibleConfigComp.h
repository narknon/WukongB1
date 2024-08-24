#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "DestructibleMassLevel.h"
#include "DestructibleStrengthLevel.h"
#include "EGSHitDestructibleStrengthLevel.h"
#include "BUS_DestructibleConfigComp.generated.h"

class UAkAudioEvent;
class UBGWDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DestructibleConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DestructibleMassLevel MassLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DestructibleStrengthLevel StrengthLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyedDebrisLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebrisDissipationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGSHitDestructibleStrengthLevel> CanParryStrengthLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DestructibleParryEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset* DestructibleParryDispConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestructionDropInfoID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CanBeHitByBullet: 1;
    
    UBUS_DestructibleConfigComp(const FObjectInitializer& ObjectInitializer);

};

