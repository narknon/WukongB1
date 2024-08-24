#pragma once
#include "CoreMinimal.h"
#include "CalliopeAsset.h"
#include "CalliopeGuid.h"
#include "ECalliopeViewType.h"
#include "ActorGuidOption.h"
#include "SmartActorGuidObj.h"
#include "BED_CalliopeAssetBase.generated.h"

class AActor;
class UBED_QuestNode_ObserveByCondition;
class UBED_QuestNode_SubGraph;
class UCalliopeNode;

UCLASS(Abstract, Blueprintable)
class UBED_CalliopeAssetBase : public UCalliopeAsset, public ISmartActorGuidObj {
    GENERATED_BODY()
public:
    UBED_CalliopeAssetBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetActorGuid(AActor* InActor, FString& OutActorGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanManageStates() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UBED_QuestNode_SubGraph*> GetSubGraphNodes();
    
    UFUNCTION(BlueprintCallable)
    bool ExportDataByExtern();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetActorGuidOptions(const FString& PropertyName, TArray<FActorGuidOption>& OutOptions) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UBED_QuestNode_ObserveByCondition*> GetObserveActorNodes();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCalliopeNode* GetNode(const FCalliopeGuid& InGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FCalliopeGuid, UCalliopeNode*> GetNodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECalliopeViewType GetViewType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterNode(const FCalliopeGuid& NewGuid, UCalliopeNode* NewNode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExportToData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterNode(const FCalliopeGuid& NodeGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNodeActivate(UCalliopeNode* Node);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetCustomInputs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNodeDeactivate(UCalliopeNode* Node);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetCustomOutputs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetStartNodeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreFinishInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostStartInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostDuplicateInCS(bool bDuplicateForPIE);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetRerouteNodeClass() const;
    
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
    

    // Fix for true pure virtual functions not being implemented
};

