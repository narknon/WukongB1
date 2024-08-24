#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.h"
#include "BANS_GSAttachDropItemToSocket.generated.h"

class ABGUDropItemActorCS;
class UCurveVector;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSAttachDropItemToSocket : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AttachmentLocationRule;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AttachmentRotationRule;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AttachmentScaleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ScaleUseCurve: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CallBPFunc: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CallBPFloatParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TriggerEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerEffectDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUDropItemActorCS* InteractItem;
    
public:
    UBANS_GSAttachDropItemToSocket();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
};

