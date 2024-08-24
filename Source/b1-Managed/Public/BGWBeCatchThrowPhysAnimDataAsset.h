#pragma once
#include "CoreMinimal.h"
#include "BGWBasePhysAnimDataAsset.h"
#include "BGWBeCatchThrowPhysAnimDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWBeCatchThrowPhysAnimDataAsset : public UBGWBasePhysAnimDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneNameBelowToSimulatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsBlendWeight;
    
    UBGWBeCatchThrowPhysAnimDataAsset();

};

