#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGSSweepCheckShapeType.h"
#include "GSSweepCheckShapeInfo.generated.h"

USTRUCT(BlueprintType)
struct B1_API FGSSweepCheckShapeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSSweepCheckShapeType SweepCheckShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShapeParamVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShapeParamFloat;
    
    FGSSweepCheckShapeInfo();
};

