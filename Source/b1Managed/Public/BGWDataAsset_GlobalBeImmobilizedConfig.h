#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_GlobalBeImmobilizedConfig.generated.h"

class UBGWDataAsset_BeImmobilizedConfig;

UCLASS(Blueprintable)
class UBGWDataAsset_GlobalBeImmobilizedConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBGWDataAsset_BeImmobilizedConfig*> BeImmobilizedConfigs;
    
    UBGWDataAsset_GlobalBeImmobilizedConfig();

};

