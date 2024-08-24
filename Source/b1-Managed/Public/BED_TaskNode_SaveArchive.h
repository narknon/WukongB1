#pragma once
#include "CoreMinimal.h"
#include "BED_TaskNode.h"
#include "BED_TaskNode_SaveArchive.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UBED_TaskNode_SaveArchive : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArchiveLabel;
    
    UBED_TaskNode_SaveArchive();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

