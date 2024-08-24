#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BGURuntimeMeshActor.generated.h"

UCLASS(Blueprintable)
class ABGURuntimeMeshActor : public AActor {
    GENERATED_BODY()
public:
    ABGURuntimeMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSliceRuntimeMesh(FVector PlanePosition, FVector PlaneNormal, float ApplyForce);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

