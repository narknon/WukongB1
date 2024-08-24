#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_ManipulateStreamingSource.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_ManipulateStreamingSource : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> StreamingSourcePositions;
    
    UBED_MovieNode_ManipulateStreamingSource();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

