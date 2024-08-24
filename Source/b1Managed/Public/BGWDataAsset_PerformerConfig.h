#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "PerformerInfo.h"
#include "BGWDataAsset_PerformerConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_PerformerConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPerformerInfo> PerformerInfoMapping;
    
    UBGWDataAsset_PerformerConfig();

};

