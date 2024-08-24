#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GSMapAreaDetailData.generated.h"

UCLASS(Blueprintable)
class UGSMapAreaDetailData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, uint8> MapAreaData;
    
    UGSMapAreaDetailData();

};

