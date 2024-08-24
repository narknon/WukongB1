#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BWC_DispLibEnvSettings.h"
#include "BWC_DispLibLocalFogWrapper.generated.h"

UCLASS(Blueprintable)
class ABWC_DispLibLocalFogWrapper : public AActor {
    GENERATED_BODY()
public:
    ABWC_DispLibLocalFogWrapper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLocalFogParameter(const FBWC_DispLibEnvSettings& InSettings, const FVector2D& WindDir);
    
};

