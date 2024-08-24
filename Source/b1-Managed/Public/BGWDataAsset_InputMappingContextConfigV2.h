#pragma once
#include "CoreMinimal.h"
#include "CustomizedInputType.h"
#include "BGWDataAsset.h"
#include "InputMappingContextConfigV2.h"
#include "InputMappingContextTagV2.h"
#include "BGWDataAsset_InputMappingContextConfigV2.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_InputMappingContextConfigV2 : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChordActionDelayConflictActionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CustomizedInputType DefaultCustomizedInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<InputMappingContextTagV2, FInputMappingContextConfigV2> Configs;
    
    UBGWDataAsset_InputMappingContextConfigV2();

};

