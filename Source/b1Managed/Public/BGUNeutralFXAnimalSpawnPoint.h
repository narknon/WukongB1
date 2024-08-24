#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUNeutralFXAnimalSpawnPoint.generated.h"

class UBUS_NeutralFXAnimalSpawnConfigComp;
class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ABGUNeutralFXAnimalSpawnPoint : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_NeutralFXAnimalSpawnConfigComp* ConfigComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBox_OutSide;
    
    ABGUNeutralFXAnimalSpawnPoint(const FObjectInitializer& ObjectInitializer);

};

