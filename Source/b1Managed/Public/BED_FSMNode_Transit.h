#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_SubGraph.h"
#include "BED_FSMNode_Transit.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_FSMNode_Transit : public UBED_FSMNode_SubGraph {
    GENERATED_BODY()
public:
    UBED_FSMNode_Transit();

};

