#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_GSSetCollisionEnabledByTag.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSSetCollisionEnabledByTag : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionCompTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionEnabled::Type EnableType;
    
    UBANS_GSSetCollisionEnabledByTag();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};
