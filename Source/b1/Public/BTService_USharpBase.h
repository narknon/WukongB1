#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_USharpBase.generated.h"

class AAIController;
class AActor;

UCLASS(Blueprintable)
class B1_API UBTService_USharpBase : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowEventDetails: 1;
    
public:
    UBTService_USharpBase();

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
    bool IsServiceActive() const;
    
};

