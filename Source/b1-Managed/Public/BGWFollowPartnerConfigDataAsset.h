#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWFollowPartnerConfigDataAsset.generated.h"

class UBUC_DispLibDispBaseConfigDataAsset;
class UEnvQuery;

UCLASS(Blueprintable)
class UBGWFollowPartnerConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* SeqShowingFinishMoveEQSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBUC_DispLibDispBaseConfigDataAsset* HiddenSelfDBC;
    
    UBGWFollowPartnerConfigDataAsset();

};

