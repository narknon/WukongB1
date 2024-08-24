#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BGUPredefinedBezierCurveHepler.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUPredefinedBezierCurveHepler : public UActorComponent {
    GENERATED_BODY()
public:
    UBGUPredefinedBezierCurveHepler(const FObjectInitializer& ObjectInitializer);

};

