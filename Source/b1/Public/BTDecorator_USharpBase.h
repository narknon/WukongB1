#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_USharpBase.generated.h"

class AAIController;

UCLASS(Blueprintable)
class B1_API UBTDecorator_USharpBase : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
public:
    UBTDecorator_USharpBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetNodeNameInCS(const FString& NewNodeName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshNodeInfoInEditor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
};

