#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "DeathDissolvePlayType.h"
#include "NormalDeadAMInfo.h"
#include "BGWDataAsset_UnitDeathDispConfig.generated.h"

class UAnimMontage;
class UBUC_DispLibDispBaseConfigDataAsset;

UCLASS(Blueprintable)
class UBGWDataAsset_UnitDeathDispConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NormalDeadAMPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnitResName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNormalDeadAMInfo> NormalDeadAMInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBUC_DispLibDispBaseConfigDataAsset* NormalDissolveDBC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeathDissolvePlayType DeathDissolvePlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BurnStateDotDeadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PoisonStateDotDeadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FreezeStateDotDeadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ImmobilizingDeadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OceanSeaDeadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractCricketDeadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SuicideDeadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AirDeadMontage_Fall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AirDeadMontage_WithDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FallDeadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> NormalDeadAMList;
    
    UBGWDataAsset_UnitDeathDispConfig();

    UFUNCTION(BlueprintCallable)
    void SetDefaultDBCAsset(UBUC_DispLibDispBaseConfigDataAsset* _NormalDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Burn_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Burn_AbnormalStateDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Thunder_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Thunder_AbnormalStateDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Poison_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Poison_AbnormalStateDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Freeze_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Freeze_AbnormalStateDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Yin_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Yin_AbnormalStateDissolveDBC, UBUC_DispLibDispBaseConfigDataAsset* Yang_AbnormalStateDeadDBC, UBUC_DispLibDispBaseConfigDataAsset* Yang_AbnormalStateDissolveDBC);
    
};

