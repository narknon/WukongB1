#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "BGUOnMontagePlayDelegateDelegate.h"
#include "OnMontagePlayNotifyDelegateDelegate.h"
#include "BGUPlayMontageCallbackProxy.generated.h"

class UAnimMontage;
class UBGUPlayMontageCallbackProxy;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class B1_API UBGUPlayMontageCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBGUOnMontagePlayDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBGUOnMontagePlayDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBGUOnMontagePlayDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontagePlayNotifyDelegate OnNotifyBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontagePlayNotifyDelegate OnNotifyEnd;
    
    UBGUPlayMontageCallbackProxy();

    UFUNCTION(BlueprintCallable)
    bool PlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool bSnapShot, const FName StartingSection, const FName ExceptAdditiveSlot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    static UBGUPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(int32 ReqIdx, UAnimMontage* MontageToPlay);
    
};

