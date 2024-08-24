#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode.h"
#include "BED_FSMNode_PS_TransactionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_FSMNode_PS_TransactionBase : public UBED_FSMNode {
    GENERATED_BODY()
public:
    UBED_FSMNode_PS_TransactionBase();

};

