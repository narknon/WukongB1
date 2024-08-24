#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "Templates/SubclassOf.h"
#include "BGWDataAsset_SpecialBoneConfig.generated.h"

class ABGUCharacterCS;

UCLASS(Blueprintable)
class UBGWDataAsset_SpecialBoneConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGUCharacterCS> UnitBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SweepCheckBoneBlackList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SweepCheckBoneWhiteList;
    
    UBGWDataAsset_SpecialBoneConfig();

};

