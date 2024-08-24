#pragma once
#include "CoreMinimal.h"
#include "BED_StateNode.h"
#include "BED_StateNode_Join.generated.h"

UCLASS(Blueprintable)
class UBED_StateNode_Join : public UBED_StateNode {
    GENERATED_BODY()
public:
    UBED_StateNode_Join();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUserAddInputInCS() const;
    
};

