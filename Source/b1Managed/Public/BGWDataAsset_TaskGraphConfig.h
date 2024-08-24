#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_TaskGraphConfig.generated.h"

class UCalliopeAsset;

UCLASS(Blueprintable)
class UBGWDataAsset_TaskGraphConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCalliopeAsset* TaskGraphAsset;
    
    UBGWDataAsset_TaskGraphConfig();

};

