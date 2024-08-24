#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "MatParam.h"
#include "BGWDataAsset_PostProcessMatSetting.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class UBGWDataAsset_PostProcessMatSetting : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> PostProcessMatInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatParam> PostProcessMatParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Weights;
    
    UBGWDataAsset_PostProcessMatSetting();

};

