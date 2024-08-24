#pragma once
#include "CoreMinimal.h"
#include "EquipPosition.h"
#include "BGWDataAsset.h"
#include "EquipFXType.h"
#include "EquipPreviewPositionConfig.h"
#include "BGWEquipPreviewConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWEquipPreviewConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EquipPosition, FEquipPreviewPositionConfig> PositionConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EquipFXType, UBGWDataAsset*> WineDBCDAMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EquipFXType, UBGWDataAsset*> WinePartnerDBCDAMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UBGWDataAsset*> LegacyActiveDBCDAMap;
    
    UBGWEquipPreviewConfigDataAsset();

};

