#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "GSEArteriesSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSEARTERIES_API UGSEArteriesSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplineClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BindedBoxExtent;
    
public:
    UGSEArteriesSplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGSArteriesSplineMinUnitLength(float Length);
    
    UFUNCTION(BlueprintCallable)
    bool MakeGSArteriesSplineClosedAsRect(float CloseDistance);
    
    UFUNCTION(BlueprintCallable)
    bool IsGSArteriesSplineClosed();
    
    UFUNCTION(BlueprintCallable)
    void BindSplineToBoxExtent(FVector InBoxExtent);
    
};

