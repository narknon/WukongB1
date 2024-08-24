#pragma once
#include "CoreMinimal.h"
#include "LayerData.h"
#include "AllLayerData.generated.h"

USTRUCT(BlueprintType)
struct FAllLayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLayerData> AllLayerData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> HeightData;
    
    UNREALEXTENT_API FAllLayerData();
};

