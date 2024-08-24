#pragma once
#include "CoreMinimal.h"
#include "PCGPoint.h"
#include "PCGSpatialData.h"
#include "PCGPointData.generated.h"

class UPCGPointData;

UCLASS(Blueprintable)
class PCG_API UPCGPointData : public UPCGSpatialData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGPoint> Points;
    
public:
    UPCGPointData();

    UFUNCTION(BlueprintCallable)
    void SetPoints(const TArray<FPCGPoint>& InPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPCGPoint> GetPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPCGPoint GetPoint(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void CopyPointsFrom(const UPCGPointData* InData, const TArray<int32>& InDataIndices);
    
};

