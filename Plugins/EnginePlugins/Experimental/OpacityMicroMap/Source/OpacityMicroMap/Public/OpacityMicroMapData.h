#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OpacityMicromapUsageCount.h"
#include "OpacityMicroMapData.generated.h"

UCLASS(Blueprintable)
class OPACITYMICROMAP_API UOpacityMicroMapData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ArrayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> DescArrayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOpacityMicromapUsageCount> DescArrayHistogram;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> IndexBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Is16BitIndexBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOpacityMicromapUsageCount> IndexHistogram;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VersionHash[20];
    
    UOpacityMicroMapData();

};

