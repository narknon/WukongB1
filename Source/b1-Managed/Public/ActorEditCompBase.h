#pragma once
#include "CoreMinimal.h"
#include "EditorOnlyCompBase.h"
#include "ActorEditCompBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UActorEditCompBase : public UEditorOnlyCompBase {
    GENERATED_BODY()
public:
    UActorEditCompBase(const FObjectInitializer& ObjectInitializer);

};

