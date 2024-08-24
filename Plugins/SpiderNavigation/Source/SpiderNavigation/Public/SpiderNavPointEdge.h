#pragma once
#include "CoreMinimal.h"
#include "SpiderNavPoint.h"
#include "SpiderNavPointEdge.generated.h"

UCLASS(Blueprintable)
class ASpiderNavPointEdge : public ASpiderNavPoint {
    GENERATED_BODY()
public:
    ASpiderNavPointEdge(const FObjectInitializer& ObjectInitializer);

};

