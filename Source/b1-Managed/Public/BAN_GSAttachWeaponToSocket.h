#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_GSAttachWeaponToSocket.generated.h"

class UAnimationAsset;
class UCurveVector;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSAttachWeaponToSocket : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AttachmentLocationRule;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AttachmentRotationRule;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AttachmentScaleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WeaponNeedPlayAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WeaponScaleUseCurve: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* WeaponScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WeaponNeedDoCallBP: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponCallBPFloatParam;
    
    UBAN_GSAttachWeaponToSocket();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
};

