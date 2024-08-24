#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_GSSetCompVisibility.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSSetCompVisibility : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ForOwnerActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ForWeaponActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CompTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedRecoverInEnd: 1;
    
    UBANS_GSSetCompVisibility();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyTickCS(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

