#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUProceduralMapGenerator.generated.h"

class UBUS_ProceduralMapGeneratorDataConfigComp;

UCLASS(Blueprintable)
class ABGUProceduralMapGenerator : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ProceduralMapGeneratorDataConfigComp* ProceduralMapDataConfigComp;
    
    ABGUProceduralMapGenerator(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnProceduralStreamLevelLoaded(int32 ID, int32 Linkage);
    
};

