#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BUC_DispLibDBC_Heat.h"
#include "BUC_DispLibDBC_WEFMPermanentWind.h"
#include "BUC_DispLibDBCPermanentWEFMMotorDataAsset.generated.h"

UCLASS(Blueprintable)
class UBUC_DispLibDBCPermanentWEFMMotorDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_WEFMPermanentWind> BaseWindMotor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_Heat> BaseHeatMotor;
    
    UBUC_DispLibDBCPermanentWEFMMotorDataAsset();

};

