#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "CoinFXNum.h"
#include "BGWDataAsset_CoinDropFXNumConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_CoinDropFXNumConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCoinFXNum> CoinDropFXNumArray;
    
    UBGWDataAsset_CoinDropFXNumConfig();

};

