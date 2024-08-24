#pragma once
#include "CoreMinimal.h"
#include "EPCGHiGenGrid.h"
#include "InstancedPropertyBag.h"
#include "PCGGraphInterface.h"
#include "Templates/SubclassOf.h"
#include "PCGGraph.generated.h"

class UPCGNode;
class UPCGSettings;

UCLASS(Blueprintable)
class PCG_API UPCGGraph : public UPCGGraphInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLandscapeUsesMetadata;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPCGNode*> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGNode* InputNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGNode* OutputNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag UserParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHierarchicalGeneration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGHiGenGrid HiGenGridSize;
    
public:
    UPCGGraph();

    UFUNCTION(BlueprintCallable)
    void RemoveNode(UPCGNode* InNode);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEdge(UPCGNode* From, const FName& FromLabel, UPCGNode* To, const FName& ToLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGNode* GetOutputNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGNode* GetInputNode() const;
    
    UFUNCTION(BlueprintCallable)
    UPCGNode* AddNodeOfType(TSubclassOf<UPCGSettings> InSettingsClass, UPCGSettings*& DefaultNodeSettings);
    
    UFUNCTION(BlueprintCallable)
    UPCGNode* AddNodeInstance(UPCGSettings* InSettings);
    
    UFUNCTION(BlueprintCallable)
    UPCGNode* AddNodeCopy(UPCGSettings* InSettings, UPCGSettings*& DefaultNodeSettings);
    
    UFUNCTION(BlueprintCallable)
    UPCGNode* AddEdge(UPCGNode* From, const FName& FromPinLabel, UPCGNode* To, const FName& ToPinLabel);
    
};

