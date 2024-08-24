#pragma once
#include "CoreMinimal.h"
#include "CalliopeMoviePipelineSetting.h"
#include "BMPS_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class UBMPS_Base : public UCalliopeMoviePipelineSetting {
    GENERATED_BODY()
public:
    UBMPS_Base();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetFooterTextCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetCategoryTextCS() const;
    
};

