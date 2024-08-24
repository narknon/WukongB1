#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "GSEArteriesBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSEARTERIES_API UGSEArteriesBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UGSEArteriesBoxComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetSurfacePointsClockWise(bool bBottomSurface);
    
};

