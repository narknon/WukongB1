#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "PriorityActionQueInfo.h"
#include "BGWPriorityActionQueDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWPriorityActionQueDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPriorityActionQueInfo> PriorityActionMap;
    
    UBGWPriorityActionQueDataAsset();

};

