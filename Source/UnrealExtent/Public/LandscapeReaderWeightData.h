#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LandscapeReaderWeightData.generated.h"

USTRUCT(BlueprintType)
struct FLandscapeReaderWeightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PhysicMatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LayerUsageDebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> arrData;
    
    UNREALEXTENT_API FLandscapeReaderWeightData();
};

