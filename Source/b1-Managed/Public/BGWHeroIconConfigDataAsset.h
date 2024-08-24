#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "HeroIconInfo.h"
#include "BGWHeroIconConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWHeroIconConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeroIconInfo> HeroIconInfoList;
    
    UBGWHeroIconConfigDataAsset();

};

