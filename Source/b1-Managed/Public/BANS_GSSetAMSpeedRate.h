#pragma once
#include "CoreMinimal.h"
#include "EGsEnAnimNS.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_GSSetAMSpeedRate.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSSetAMSpeedRate : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectionSpeedRate;
    
    UBANS_GSSetAMSpeedRate();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGsEnAnimNS GetAnimNSType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSValidateInputCS(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetModifySpeedRate() const;
    
};

