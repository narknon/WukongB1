#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWTransPreviewConfigDataAsset.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class UBGWTransPreviewConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimMontage*> AnimInConfigMap;
    
    UBGWTransPreviewConfigDataAsset();

};

