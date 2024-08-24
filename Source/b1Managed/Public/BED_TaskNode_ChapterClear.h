#pragma once
#include "CoreMinimal.h"
#include "BED_TaskNode.h"
#include "BED_TaskNode_ChapterClear.generated.h"

UCLASS(Blueprintable)
class UBED_TaskNode_ChapterClear : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChapterID;
    
    UBED_TaskNode_ChapterClear();

};

