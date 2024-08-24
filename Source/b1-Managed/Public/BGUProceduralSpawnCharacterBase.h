#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUActorBaseCS.h"
#include "BGUProceduralSpawnCharacterBase.generated.h"

class UBUS_ProceduralSpawnCharacterDataConfigComp;

UCLASS(Blueprintable)
class ABGUProceduralSpawnCharacterBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ProceduralSpawnCharacterDataConfigComp* ProceduralSpawnCharacterDataConfigComp;
    
    ABGUProceduralSpawnCharacterBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
};

