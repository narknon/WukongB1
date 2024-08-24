#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "EGSHitDestructibleStrengthLevel.h"
#include "BGWDataAsset_DestructibleImpulseConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_DestructibleImpulseConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGSHitDestructibleStrengthLevel, float> DestructibleHitImpulseMap;
    
    UBGWDataAsset_DestructibleImpulseConfig();

};

