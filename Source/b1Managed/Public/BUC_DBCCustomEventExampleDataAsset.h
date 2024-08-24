#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DispLibDBCCustomEventDataAssetBase.h"
#include "BUC_DBCCustomEventExampleDataAsset.generated.h"

UCLASS(Blueprintable)
class UBUC_DBCCustomEventExampleDataAsset : public UDispLibDBCCustomEventDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MyBool: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MyLinearColor;
    
    UBUC_DBCCustomEventExampleDataAsset();

};

