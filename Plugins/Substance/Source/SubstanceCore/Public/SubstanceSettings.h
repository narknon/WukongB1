#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDefaultSubstanceTextureSize.h"
#include "ESubstanceEngineType.h"
#include "ESubstanceGenerationMode.h"
#include "SubstanceSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class SUBSTANCECORE_API USubstanceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MemoryBudgetMb;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CPUCores;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AsyncLoadMipClip;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAsyncSubstancesRenderedPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESubstanceGenerationMode> DefaultGenerationMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESubstanceEngineType> SubstanceEngine;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDefaultSubstanceTextureSize> DefaultSubstanceOutputSizeX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDefaultSubstanceTextureSize> DefaultSubstanceOutputSizeY;
    
    USubstanceSettings();

};

