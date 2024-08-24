#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_SetStreamingManagerViewSource.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_SetStreamingManagerViewSource : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> StreamingSourcePositions;
    
    UBED_MovieNode_SetStreamingManagerViewSource();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

