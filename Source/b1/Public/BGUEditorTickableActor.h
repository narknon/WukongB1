#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BGUEditorTickableActor.generated.h"

UCLASS(Blueprintable)
class B1_API ABGUEditorTickableActor : public AActor {
    GENERATED_BODY()
public:
    ABGUEditorTickableActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    FVector GetViewportCameraLocation();
    
};

