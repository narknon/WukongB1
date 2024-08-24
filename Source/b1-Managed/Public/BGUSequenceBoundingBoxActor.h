#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "BGUSequenceBoundingBoxActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ABGUSequenceBoundingBoxActor : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    ABGUSequenceBoundingBoxActor(const FObjectInitializer& ObjectInitializer);

};

