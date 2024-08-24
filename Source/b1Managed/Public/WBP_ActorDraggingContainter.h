#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "WBP_ActorDraggingContainter.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UWBP_ActorDraggingContainter : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* draggableActor;
    
    UWBP_ActorDraggingContainter();

};

