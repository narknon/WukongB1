#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUActorBaseCS.h"
#include "BGUSplineActor.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class ABGUSplineActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ProjectionTraceExtent;
    
    ABGUSplineActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ProjectPointsToNavigation();
    
};

