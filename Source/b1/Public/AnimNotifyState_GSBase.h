#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EGsEnAnimNS.h"
#include "UStGSNotifyParam.h"
#include "AnimNotifyState_GSBase.generated.h"

class AActor;
class ABGUCharacter;
class UObject;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_GSBase : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsEnAnimNS AnimNSType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTriggerEndByCrossMontageBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCheckAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBePlacedInASCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanUseQueuedType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isPreload;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PreloadedAssets;
    
public:
    UAnimNotifyState_GSBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDataOnNotifyStateReplace(const UAnimNotifyState* NewNotifyState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSValidateInputCS(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GSOnSectionManuallyChanged(ABGUCharacter* OwnerChar, float RemainingDuration) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GSNotifyTickCS(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GSNotifyEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GSNotifyDebugPreTickCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GSNotifyDebugPreEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GSNotifyDebugPreBeginCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GSNotifyDebugPostTickCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GSNotifyDebugPostEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GSNotifyDebugPostBeginCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GSNotifyBeginCS(FUStGSNotifyParam NotifyParam, float TotalDuration) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GSAllowCrossSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FSoftObjectPath> GetSoftReferences() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UObject*> GetPreloadedAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetModifySpeedRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetJumpableSectionPrefix() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGsEnAnimNS GetAnimNSType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddPreloadedAsset(UObject* Obj) const;
    
};

