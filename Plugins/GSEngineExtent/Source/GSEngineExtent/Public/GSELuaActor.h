#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GSELuaActor.generated.h"

UCLASS(Blueprintable)
class GSENGINEEXTENT_API AGSELuaActor : public AActor {
    GENERATED_BODY()
public:
    AGSELuaActor(const FObjectInitializer& ObjectInitializer);

};

