#pragma once
#include "CoreMinimal.h"
#include "B1ReplicationGraphCS.h"
#include "B1ReplicationGraphForStandAloneHookCS.generated.h"

UCLASS(Blueprintable, NonTransient)
class UB1ReplicationGraphForStandAloneHookCS : public UB1ReplicationGraphCS {
    GENERATED_BODY()
public:
    UB1ReplicationGraphForStandAloneHookCS();

};

