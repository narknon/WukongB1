#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "EANTriggerEffectTargetType.h"
#include "BAN_PlayDBCWithTargetInfo.generated.h"

class UBGWDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_PlayDBCWithTargetInfo : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EANTriggerEffectTargetType DBCOwnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EANTriggerEffectTargetType MinorTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset* DBC;
    
    UBAN_PlayDBCWithTargetInfo();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

