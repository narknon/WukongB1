#pragma once
#include "CoreMinimal.h"
#include "B1DBC_ExtraSetting.h"
#include "BUC_DispLibDispBaseConfigDataAsset.h"
#include "BGWDataAsset_B1DBC.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_B1DBC : public UBUC_DispLibDispBaseConfigDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FB1DBC_ExtraSetting ExtraSetting;
    
    UBGWDataAsset_B1DBC();

};

