#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "CalliopeConnectedPin.h"
#include "CalliopeGuid.h"
#include "CalliopePin.h"
#include "ECalliopeNodeStyle.h"
#include "ECalliopeViewType.h"
#include "GsCalliopeNodeParam.h"
#include "GsSceneObjPoliceConfig.h"
#include "GsSmartParamObject.h"
#include "CalliopeNode.generated.h"

class AActor;
class UCalliopeAsset;
class UCalliopeNode;
class UEdGraphNode;

UCLASS(Abstract, Blueprintable)
class CALLIOPE_API UCalliopeNode : public UObject, public IGsSmartParamObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEdGraphNode* GraphNode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsContextPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECalliopeNodeStyle NodeStyle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCalliopePin> InputPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCalliopePin> OutputPins;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCalliopeConnectedPin> Connections;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NodeGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNodeHasError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBossPhaseRequireActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InputNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OutputNames;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsCalliopeNodeParam ParentNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSceneObjPoliceConfig SceneObjPoliceConfig;
    
    UCalliopeNode();

    UFUNCTION(BlueprintCallable)
    void UnBindAssetOnSubGraphReconstructionRequested(UCalliopeAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SyncSceneObjPoliceConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubGraphAssetInPIE(UCalliopeAsset* InSubGraphAsset) const;
    
    UFUNCTION(BlueprintCallable)
    void SetOutputPins(const TArray<FCalliopePin>& InOutputPins);
    
    UFUNCTION(BlueprintCallable)
    void SetInputPins(const TArray<FCalliopePin>& InInputPins);
    
    UFUNCTION(BlueprintCallable)
    void SetConnections(TMap<FName, FCalliopeConnectedPin>& InConnections);
    
    UFUNCTION(BlueprintCallable)
    void ResetRecordsInCS();
    
    UFUNCTION(BlueprintCallable)
    void RefreshSceneObjPoliceConfig(UCalliopeNode* PreviousNode);
    
    UFUNCTION(BlueprintCallable)
    void RefreshParentNode();
    
    UFUNCTION(BlueprintCallable)
    void RecordOutput(const FName& PinName);
    
    UFUNCTION(BlueprintCallable)
    void RecordInput(const FName& PinName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrePropertyChanged(const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostLoadInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectNodeInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshAssetInCS() const;
    
    UFUNCTION(BlueprintCallable)
    void LogError(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    UCalliopeAsset* LoadAssetInCS(TSoftObjectPtr<UCalliopeAsset> AssetPtr);
    
    UFUNCTION(BlueprintCallable)
    void JumpToMe();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSubGraphNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPreloaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayInEditor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutputConnectTo(FCalliopeGuid TargetNodeGuid) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCalliopeWasActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsCalliopeNeverActivated();
    
    UFUNCTION(BlueprintCallable)
    bool IsCalliopeActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBranchGraphNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBattleStateNode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetStatusStringInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCalliopeGuid> GetParentNodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCalliopePin> GetOutputPins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetOutputNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetNodeDescriptionInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCalliopePin> GetInputPins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetInputNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FCalliopeGuid GetGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEdGraphNode* GetGraphNodeInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGraphIdentifierInCS(FName& OutGraphIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGraphGuidInCS(FCalliopeGuid& OutGraphGuid) const;
    
    UFUNCTION(BlueprintCallable)
    FCalliopePin GetDefaultOutputPin();
    
    UFUNCTION(BlueprintCallable)
    FCalliopePin GetDefaultInputPin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextInputsInCS();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FCalliopeConnectedPin> GetConnections();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCalliopeConnectedPin GetConnection(const FName OutputName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCalliopeAsset* GetCalliopeAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetBranchGraphToEditInCS(FString& OutBranchGraphIdentifier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UObject* GetAssetToEditInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetAssetPathInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetActorToFocusInCS();
    
    UFUNCTION(BlueprintCallable)
    void ForceRefreshDetailView();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteOnReconstructionRequested();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cleanup();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCanPassNodeInfo(FCalliopeGuid PreviousNodeGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanUserAddOutputInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanUserAddInputInCS() const;
    
    UFUNCTION(BlueprintCallable)
    void BindAssetOnSubGraphReconstructionRequested(UCalliopeAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void AssignInteractorGroupIDPolice(int32 InIndex, int32 InGroupIDIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddOutputPins(TArray<FName> PinNames);
    
    UFUNCTION(BlueprintCallable)
    void AddInputPins(TArray<FName> PinNames);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    

    // Fix for true pure virtual functions not being implemented
};

