#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUSimpleSplineActor.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class ABGUSimpleSplineActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComp;
    
    ABGUSimpleSplineActor(const FObjectInitializer& ObjectInitializer);

};

