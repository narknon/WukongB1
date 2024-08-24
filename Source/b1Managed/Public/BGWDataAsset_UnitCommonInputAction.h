#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_UnitCommonInputAction.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_UnitCommonInputAction : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CommonInputAction;
    
    UBGWDataAsset_UnitCommonInputAction();

};

