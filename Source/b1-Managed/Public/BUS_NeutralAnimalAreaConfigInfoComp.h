#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "AnimalDistributionSpawnTendency.h"
#include "AnimalSpawnPosType.h"
#include "AnimalSpawnRotType.h"
#include "AnimalSpawnTemplate.h"
#include "BUS_NeutralAnimalAreaConfigInfoComp.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_NeutralAnimalAreaConfigInfoComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawDebug: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DestroyAllAnimalWhenPlaySeq: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DontSpawnInCloudMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AnimalDistributionSpawnTendency DistributionSpawnTendency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PresetCD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnCD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyProtectCD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AnimalSpawnPosType SpawnPosType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimalSpawnTemplate> AnimalTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EQSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AnimalSpawnRotType SpawnRotType;
    
    UBUS_NeutralAnimalAreaConfigInfoComp(const FObjectInitializer& ObjectInitializer);

};

