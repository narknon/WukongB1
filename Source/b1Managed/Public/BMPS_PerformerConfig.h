#pragma once
#include "CoreMinimal.h"
#include "BMPS_Base.h"
#include "BMPS_PerformerConfig.generated.h"

class UBUC_PerformerMappingConfigDataAsset;
class UMoviePipeline;

UCLASS(Blueprintable)
class UBMPS_PerformerConfig : public UBMPS_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBUC_PerformerMappingConfigDataAsset* PerformerTagMapping;
    
    UBMPS_PerformerConfig();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDisplayTextCS() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterLevelSequenceActorInitializedCS(UMoviePipeline* InPipeline);
    
};

