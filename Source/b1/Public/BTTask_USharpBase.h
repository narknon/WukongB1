#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AITypes.h"
#include "BTTask_USharpBase.generated.h"

class AAIController;
class AActor;

UCLASS(Blueprintable)
class B1_API UBTTask_USharpBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntervalCountdown TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
public:
    UBTTask_USharpBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetNodeNameInCS(const FString& NewNodeName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshNodeInfoInEditor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaskExecuting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaskAborting() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishExecute(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FinishAbort();
    
};

