#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GSEQGBase_ProjectedPoint.h"
#include "GSEQG_SphericalLineTracePointGenerator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGSEQG_SphericalLineTracePointGenerator : public UGSEQGBase_ProjectedPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange RangeDir_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange RangeDir_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange RangeDir_Z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LineTraceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineTraceMaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraceTypeQuery TraceTypeQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointMinBetween;
    
    UGSEQG_SphericalLineTracePointGenerator();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoItemGenerationCS(const TArray<FVector>& ContextLocations) const;
    
};

