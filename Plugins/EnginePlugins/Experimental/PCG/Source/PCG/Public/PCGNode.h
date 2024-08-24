#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PCGNode.generated.h"

class UPCGEdge;
class UPCGGraph;
class UPCGNode;
class UPCGPin;
class UPCGSettings;
class UPCGSettingsInterface;

UCLASS(Blueprintable)
class PCG_API UPCGNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NodeTitle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSettingsInterface* SettingsInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPCGNode*> OutboundNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UPCGEdge*> InboundEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UPCGEdge*> OutboundEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPCGPin*> InputPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPCGPin*> OutputPins;
    
public:
    UPCGNode();

    UFUNCTION(BlueprintCallable)
    bool RemoveEdgeTo(FName FromPinLable, UPCGNode* To, FName ToPinLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGSettings* GetSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGGraph* GetGraph() const;
    
    UFUNCTION(BlueprintCallable)
    UPCGNode* AddEdgeTo(FName FromPinLabel, UPCGNode* To, FName ToPinLabel);
    
};

