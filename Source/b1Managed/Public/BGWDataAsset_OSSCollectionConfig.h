#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_OSSCollectionConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_OSSCollectionConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Battle_SpellFire_AngelUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Battle_SpellFire_DistanceUnit;
    
    UBGWDataAsset_OSSCollectionConfig();

};

