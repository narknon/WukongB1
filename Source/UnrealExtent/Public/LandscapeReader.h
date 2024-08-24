#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESampleType.h"
#include "IntPtr.h"
#include "LandscapeReaderAllWeightData.h"
#include "LandscapeReader.generated.h"

class ALandscapeProxy;

UCLASS(Blueprintable)
class UNREALEXTENT_API ULandscapeReader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALandscapeProxy* TargetProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ProxyTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ActorSpaceExtendsMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ActorSpaceExtendsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCached;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLandscapeReaderAllWeightData LayerWeights;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> HeightData;
    
public:
    ULandscapeReader();

    UFUNCTION(BlueprintCallable)
    int32 WeightDataElementSize();
    
    UFUNCTION(BlueprintCallable)
    int32 WeightDataElementNum(int32 LayerIndex);
    
    UFUNCTION(BlueprintCallable)
    float SampleWeightData(const FVector& WorldPos, int32 LayerIndex, ESampleType SampleType);
    
    UFUNCTION(BlueprintCallable)
    float SampleHeightData(const FVector& WorldPos, ESampleType SampleType);
    
    UFUNCTION(BlueprintCallable)
    int32 HeightDataElementSize();
    
    UFUNCTION(BlueprintCallable)
    int32 HeightDataElementNum();
    
    UFUNCTION(BlueprintCallable)
    FIntPtr GetWeightDataInRect(int32 MinX, int32 MinY, int32 MaxX, int32 MaxY, int32 LayerIndex);
    
    UFUNCTION(BlueprintCallable)
    FIntPtr GetWeightData(int32 LayerIndex);
    
    UFUNCTION(BlueprintCallable)
    FIntPtr GetHeightDataInRect(int32 MinX, int32 MinY, int32 MaxX, int32 MaxY);
    
    UFUNCTION(BlueprintCallable)
    FIntPtr GetHeightData();
    
    UFUNCTION(BlueprintCallable)
    void Cache(ALandscapeProxy* NewLandscapeProxy);
    
};

