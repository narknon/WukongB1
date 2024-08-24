#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UStCheckShape.h"
#include "UStGSNotifyParam.h"
#include "AbnormalStateAccConfig.h"
#include "BANS_GSBase.h"
#include "HitCheckConf.h"
#include "HitDestructibleActorConfig.h"
#include "TriggerEffectWithCondition.h"
#include "BANS_GSSweepCheck.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSSweepCheck : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUStCheckShape> SweepCheckShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SweepCheckShapeExtend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceUpdateDescData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbnormalStateAccConfig> AbnormalStateEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTriggerEffectWithCondition> EffectsWithCondition_Before;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EffectIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTriggerEffectWithCondition> EffectsWithCondition_After;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EffectIDListForSceneItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitChrAudioID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitChrFXWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitCheckConf HitCheckConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CanHitBackBullet: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitDestructibleActorConfig HitDestructibleConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AtkReboundingAM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LowAtkReboundingAM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SweepCheckGroupID;
    
    UBANS_GSSweepCheck();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasAbnormalStateData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ResetSweepCheckChanel(ECollisionChannel NewCollisionChanel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ReplaceEffectIDByPreID(int32 OldPreID, int32 NewPreID) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool AddAssistBreakFrozenEffectID(int32 AssistBreakFrozenEffectID) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyTickCS(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSValidateInputCS(AActor* Actor) const;
    
};

