#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "EFXAnimalSpawnMomentType.h"
#include "BUS_NeutralFXAnimalSpawnConfigComp.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_NeutralFXAnimalSpawnConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Outside_Dist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Outside_Spd_Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> RandomNiagaraTemplateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float destroyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFXAnimalSpawnMomentType SpawnMomentType;
    
    UBUS_NeutralFXAnimalSpawnConfigComp(const FObjectInitializer& ObjectInitializer);

};

