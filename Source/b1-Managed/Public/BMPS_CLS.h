#pragma once
#include "CoreMinimal.h"
#include "BMPS_Base.h"
#include "BMPS_CLS.generated.h"

class UMoviePipeline;

UCLASS(Blueprintable)
class UBMPS_CLS : public UBMPS_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideBlendInSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInSpeed;
    
    UBMPS_CLS();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDisplayTextCS() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupForPipelineCS(UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TeardownForPipelineCS(UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IgnoreTransientFiltersCS() const;
    
};

