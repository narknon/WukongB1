#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "EBGUSimpleState.h"
#include "BAN_GSSetSimpleState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSSetSimpleState : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUSimpleState SimpleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsRemove: 1;
    
    UBAN_GSSetSimpleState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

