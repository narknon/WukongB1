#pragma once
#include "CoreMinimal.h"
#include "CalliopeGuid.h"
#include "ECalliopeViewType.h"
#include "GameplayTagContainer.h"
#include "BED_CalliopeAssetBase.h"
#include "BED_ProcessAsset.generated.h"

class UCalliopeNode;

UCLASS(Blueprintable)
class UBED_ProcessAsset : public UBED_CalliopeAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CustomDetectConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SubMachineStateTags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FCalliopeGuid, FGameplayTagContainer> NodeBranchGraphNames;
    
public:
    UBED_ProcessAsset();

    UFUNCTION(BlueprintCallable)
    bool HasRevertCondition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECalliopeViewType GetViewType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterNode(const FCalliopeGuid& NewGuid, UCalliopeNode* NewNode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterNode(const FCalliopeGuid& NodeGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEditorOnlyCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanManageStates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetStartNodeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRefreshAssetInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetRerouteNodeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostRefreshAssetInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExtraDefaultInputNodes(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExtraDefaultOutputNodes(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetStartNodeClassInBranchGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetRerouteNodeClassInBranchGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExtraDefaultInputNodesInBranchGraph(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExtraDefaultOutputNodesInBranchGraph(TArray<UClass*>& OutClasses) const;
    
};

