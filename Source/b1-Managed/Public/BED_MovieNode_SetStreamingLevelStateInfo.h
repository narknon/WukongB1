#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode.h"
#include "MovieLevelStateRequestConfig.h"
#include "BED_MovieNode_SetStreamingLevelStateInfo.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_SetStreamingLevelStateInfo : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieLevelStateRequestConfig> LevelStateRequestConfig;
    
    UBED_MovieNode_SetStreamingLevelStateInfo();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

