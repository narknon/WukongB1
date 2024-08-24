#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BED_ProcessStateNode.h"
#include "BED_ProcessStateNode_Log.generated.h"

UCLASS(Blueprintable)
class UBED_ProcessStateNode_Log : public UBED_ProcessStateNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPrintToScreen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor;
    
public:
    UBED_ProcessStateNode_Log();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

