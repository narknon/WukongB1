#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "InteractInfoTemplateType.h"
#include "InteractInfoTemplateWithLOD.h"
#include "BGWDataAsset_InteractInfoTemplateMap.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_InteractInfoTemplateMap : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<InteractInfoTemplateType, FInteractInfoTemplateWithLOD> TemplateMap;
    
    UBGWDataAsset_InteractInfoTemplateMap();

};

