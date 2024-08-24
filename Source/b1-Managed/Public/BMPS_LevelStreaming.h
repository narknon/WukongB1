#pragma once
#include "CoreMinimal.h"
#include "BMPS_Base.h"
#include "LevelLoadState.h"
#include "BMPS_LevelStreaming.generated.h"

class UMoviePipeline;

UCLASS(Blueprintable)
class UBMPS_LevelStreaming : public UBMPS_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, LevelLoadState> GeometryLevelsLoadSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, LevelLoadState> SeqLevelsLoadSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, LevelLoadState> ItemLevelsLoadSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, LevelLoadState> OtherLevelsLoadSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, LevelLoadState> MonsterLevelsLoadSetting;
    
    UBMPS_LevelStreaming();

    UFUNCTION(BlueprintCallable)
    void RefreshCurrentLevelNames();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDisplayTextCS() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupForPipelineCS(UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TeardownForPipelineCS(UMoviePipeline* InPipeline);
    
};

