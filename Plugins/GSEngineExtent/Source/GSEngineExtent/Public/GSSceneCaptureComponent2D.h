#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GSSceneCaptureComponent2D.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSENGINEEXTENT_API UGSSceneCaptureComponent2D : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UGSSceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer);

};

