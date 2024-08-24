#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BED_StateNode.h"
#include "CompositeTransitionCondition_State.h"
#include "DetectUnitCondition.h"
#include "StateNodeChildActorControl.h"
#include "BED_StateNode_Single.generated.h"

class UBED_StateAsset;
class UCalliopeAsset;
class UObject;

UCLASS(Blueprintable)
class UBED_StateNode_Single : public UBED_StateNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBED_StateAsset* SubStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBED_StateAsset* SubGraphAssetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDetectUnitCondition> DetectUnitConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompositeTransitionCondition_State> OtherConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateNodeChildActorControl ChildActorCollection;
    
    UBED_StateNode_Single();

private:
    UFUNCTION(BlueprintCallable)
    void JumpToEnterStateNode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSubGraphNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSelectNodeInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrePropertyChanged(const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetAssetToEditInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextInputsInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubGraphAssetInPIE(UCalliopeAsset* InSubGraphAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

