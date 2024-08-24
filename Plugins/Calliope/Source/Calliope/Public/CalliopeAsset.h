#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Blueprint.h"
#include "GameplayTagContainer.h"
#include "CalliopeGuid.h"
#include "CalliopeParameters.h"
#include "ECalliopeViewType.h"
#include "EGsManagedParamType.h"
#include "GsSmartParamObject.h"
#include "Templates/SubclassOf.h"
#include "CalliopeAsset.generated.h"

class UCalliopeAsset;
class UCalliopeNode;
class UEdGraphSchema;

UCLASS(Blueprintable)
class CALLIOPE_API UCalliopeAsset : public UObject, public IGsSmartParamObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CustomInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CustomOutputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FCalliopeGuid, UCalliopeNode*> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UCalliopeNode*> PreloadedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCalliopeNode*> ActiveNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCalliopeNode*> RecordedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExecuteHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditedDocumentInfo> LastEditedDocuments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> BranchGraphNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEdGraphSchema> BranchGraphSchema;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CategorySorting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> NeedPreloadAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCalliopeParameters CalliopeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SearchNodeGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SearchNodeIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCalliopeAsset* TemplateAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCalliopeAsset*> ActiveInstances;
    
public:
    UCalliopeAsset();

    UFUNCTION(BlueprintCallable)
    void UpdateParameterActorReferenceAndAliasName(const FString& ObjectPath, const FString& ActorGuid, const FName& AliasName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterNode(const FCalliopeGuid& NodeGuid);
    
    UFUNCTION(BlueprintCallable)
    void StartInstance();
    
    UFUNCTION(BlueprintCallable)
    void StartAsSubInstance(UCalliopeAsset* ParentInstance, const FCalliopeGuid& InSubNodeGuid);
    
    UFUNCTION(BlueprintCallable)
    void SetSubGraphAssetInPIE(const FCalliopeGuid& InGuid, UCalliopeAsset* CalliopeAsset);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBranchGraph(const FName& GraphName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterNode(const FCalliopeGuid& NewGuid, UCalliopeNode* NewNode);
    
    UFUNCTION(BlueprintCallable)
    void RecordOutput(const FCalliopeGuid& InGuid, const FName& InPinName);
    
    UFUNCTION(BlueprintCallable)
    void RecordOnlyNode(const FCalliopeGuid& InGuid);
    
    UFUNCTION(BlueprintCallable)
    void RecordInput(const FCalliopeGuid& InGuid, const FName& InPinName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreFinishInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostStartInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostRefreshAssetInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostDuplicateInCS(bool bDuplicateForPIE);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshAssetInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNodeDeactivate(const UCalliopeNode* Node);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNodeActivate(const UCalliopeNode* Node);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEditorOnlyCS() const;
    
    UFUNCTION(BlueprintCallable)
    void HarvestNodeConnections();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ECalliopeViewType GetViewType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UClass* GetStartNodeClassInBranchGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UClass* GetStartNodeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UClass* GetRerouteNodeClassInBranchGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UClass* GetRerouteNodeClass() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetParameterTaskStateIDByConfigGuid(const FCalliopeGuid& InConfigGuid, int32& OutTaskStageID);
    
    UFUNCTION(BlueprintCallable)
    bool GetParameterSequenceIDByConfigGuid(const FCalliopeGuid& InConfigGuid, int32& OutSequenceID);
    
    UFUNCTION(BlueprintCallable)
    bool GetParameterDisplayNameByConfigGuid(const FCalliopeGuid& InConfigGuid, const FString& InPropertyName, FString& OutDisplayName);
    
    UFUNCTION(BlueprintCallable)
    bool GetParameterConfigGuidByActorGuid(const EGsManagedParamType& ParamType, const FString& ParamValueString, const int32 ParamValueInt, const FName& ParamValueName, FCalliopeGuid& OutGuid);
    
    UFUNCTION(BlueprintCallable)
    bool GetParameterBuffIDByConfigGuid(const FCalliopeGuid& InConfigGuid, int32& OutBuffID);
    
    UFUNCTION(BlueprintCallable)
    bool GetParameterActorGuidByConfigGuid(const FCalliopeGuid& InConfigGuid, FString& OutActorGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TMap<FCalliopeGuid, UCalliopeNode*> GetNodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCalliopeNode* GetNode(const FCalliopeGuid& InGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetExtraDefaultOutputNodesInBranchGraph(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetExtraDefaultOutputNodes(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetExtraDefaultInputNodesInBranchGraph(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetExtraDefaultInputNodes(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FName> GetCustomOutputs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FName> GetCustomInputs() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExportToData();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSubGraphReconstructionRequested();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateNode(const FCalliopeGuid& InGuid);
    
    UFUNCTION(BlueprintCallable)
    static UCalliopeAsset* CreateInstance(UObject* Owner, UCalliopeAsset* CalliopeAsset, const FString& InstancePrefixName);
    
    UFUNCTION(BlueprintCallable)
    void ClearRecordData();
    
    UFUNCTION(BlueprintCallable)
    void ClearParameters();
    
    UFUNCTION(BlueprintCallable)
    void ClearInvalidBranchGraph();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BroadcastRegenerateToolbars() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AssignParameterUnitTamerReference(const FCalliopeGuid& InConfigGuid, const FString& ObjectPath);
    
    UFUNCTION(BlueprintCallable)
    bool AddParameter(const EGsManagedParamType& ParamType, const FString& ObjectPath, const FString& ActorGuid, const FName& AliasName, int32 State, FCalliopeGuid& OutConfigGuid);
    
    UFUNCTION(BlueprintCallable)
    void AddBranchGraph(const FName& GraphName);
    

    // Fix for true pure virtual functions not being implemented
};

