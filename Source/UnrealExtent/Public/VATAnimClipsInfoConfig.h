#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VATAnimClipInfo.h"
#include "VATAnimClipsInfoConfig.generated.h"

UCLASS(Blueprintable)
class UVATAnimClipsInfoConfig : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVATAnimClipInfo> ClipConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalFrames;
    
    UVATAnimClipsInfoConfig();

};

