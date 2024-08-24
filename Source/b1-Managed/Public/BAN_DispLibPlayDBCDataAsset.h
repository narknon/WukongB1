#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_DispLibPlayDBCDataAsset.generated.h"

class UBUC_DispLibDispBaseConfigDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_DispLibPlayDBCDataAsset : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBUC_DispLibDispBaseConfigDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlayByDispWorld: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainSockNameIfDW;
    
    UBAN_DispLibPlayDBCDataAsset();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

