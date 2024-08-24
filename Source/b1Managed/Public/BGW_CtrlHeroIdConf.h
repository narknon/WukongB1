#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGW_CtrlHeroIdConf.generated.h"

UCLASS(Blueprintable)
class UBGW_CtrlHeroIdConf : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> HeroBPArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeroCtrlRotaSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeroCtrlSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeroCtrlDebounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimDeadZoneRadius;
    
    UBGW_CtrlHeroIdConf();

};

