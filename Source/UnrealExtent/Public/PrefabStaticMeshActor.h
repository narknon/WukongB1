#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "PrefabStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API APrefabStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    APrefabStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

