#pragma once
#include "CoreMinimal.h"
#include "B1ReplicationGraph.h"
#include "B1ReplicationGraphCS.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class UB1ReplicationGraphCS : public UB1ReplicationGraph {
    GENERATED_BODY()
public:
    UB1ReplicationGraphCS();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddNetworkActorCS(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveNetworkActorCS(AActor* Actor);
    
};

