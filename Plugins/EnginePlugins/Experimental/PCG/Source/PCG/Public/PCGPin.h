#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PCGPinProperties.h"
#include "PCGPin.generated.h"

class UPCGEdge;
class UPCGNode;

UCLASS(Blueprintable)
class PCG_API UPCGPin : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGNode* Node;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UPCGEdge*> Edges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGPinProperties Properties;
    
    UPCGPin();

    UFUNCTION(BlueprintCallable)
    void SetToolTip(const FText& InTooltip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTooltip() const;
    
};

