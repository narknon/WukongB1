#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_NetMapConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_NetMapConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> NetMapObjects;
    
    UBGWDataAsset_NetMapConfig();

};

