#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "PerformerTag.h"
#include "Templates/SubclassOf.h"
#include "BUC_PerformerMappingConfigDataAsset.generated.h"

class ABGUPerformerActorCS;

UCLASS(Blueprintable)
class UBUC_PerformerMappingConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABGUPerformerActorCS>, FPerformerTag> PerformerTagMapping;
    
    UBUC_PerformerMappingConfigDataAsset();

};

