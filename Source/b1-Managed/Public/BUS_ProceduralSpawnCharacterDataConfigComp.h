#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_ProceduralSpawnCharacterDataConfigComp.generated.h"

class UBGWProceduralSpawnCharacterWaveConfigDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ProceduralSpawnCharacterDataConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWProceduralSpawnCharacterWaveConfigDataAsset* ProceduralWaveCharacterConfigAsset;
    
    UBUS_ProceduralSpawnCharacterDataConfigComp(const FObjectInitializer& ObjectInitializer);

};

