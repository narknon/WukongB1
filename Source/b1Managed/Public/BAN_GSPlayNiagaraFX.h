#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GSNiagaraSysParam.h"
#include "EGsEnAnimN.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BUC_DispLibDBC_NiagaraEventScalabilitySettings.h"
#include "DispLibDBCEffectDestroyTiming.h"
#include "DispLibDBCNiagaraForceVisibleStateMode.h"
#include "DispLibDBCPauseMode.h"
#include "DispLibDBCSnapGroundRotationMode.h"
#include "BAN_GSPlayNiagaraFX.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSPlayNiagaraFX : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EditorActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTimeAfterStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DispLibDBCEffectDestroyTiming DestroyTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideSKMTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Attached: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachLocation::Type attachLocationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 offsetInLocaSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SnapGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DispLibDBCSnapGroundRotationMode SnapGroundRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ignoreRootBoneScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SetSelfMeshParam: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OverrideSKMBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OverrideSKMSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSNiagaraSysParam> customParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DetachOnEndDispStageBegin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableShadow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TranslucentSortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PausePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DispLibDBCPauseMode PauseMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndStagePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceChangeVisibleStateDEFPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DispLibDBCNiagaraForceVisibleStateMode ForceVisibleStateDefaultMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CompTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUC_DispLibDBC_NiagaraEventScalabilitySettings ScalabilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DBC_IdentityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 hasAttachedSocket: 1;
    
    UBAN_GSPlayNiagaraFX();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGsEnAnimN GetAnimNType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FSoftObjectPath> GetSoftReferences() const;
    
};
