#pragma once
#include "CoreMinimal.h"
#include "PCGDistanceShape.h"
#include "PCGSettings.h"
#include "PCGDistanceSettings.generated.h"

UCLASS(Blueprintable)
class UPCGDistanceSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutputDistanceVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetDensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaximumDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    PCGDistanceShape SourceShape;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    PCGDistanceShape TargetShape;
    
    UPCGDistanceSettings();

};

