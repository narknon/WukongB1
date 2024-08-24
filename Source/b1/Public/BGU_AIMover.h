#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/Object.h"
#include "BGU_AIMoverRequest.h"
#include "BUE_OnMoveCompleteDelegate.h"
#include "BGU_AIMover.generated.h"

class AController;
class UPathFollowingComponent;

UCLASS(Blueprintable)
class B1_API UBGU_AIMover : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUE_OnMoveComplete FBUE_OnMoveComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* OwnerCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComponent;
    
public:
    UBGU_AIMover();

    UFUNCTION(BlueprintCallable)
    void ResetRequest();
    
    UFUNCTION(BlueprintCallable)
    void MoveTo(const FBGU_AIMoverRequest& request);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutOfRange();
    
    UFUNCTION(BlueprintCallable)
    void Init(AController* OwnerAICtrl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequestID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPathFollowingComponent* GetPathFollowingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPathFollowingStatus::Type> GetMoveStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void AbortMove();
    
};

