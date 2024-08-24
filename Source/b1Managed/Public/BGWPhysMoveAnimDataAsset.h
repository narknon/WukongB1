#pragma once
#include "CoreMinimal.h"
#include "BGWBasePhysAnimDataAsset.h"
#include "BGWPhysMoveAnimDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWPhysMoveAnimDataAsset : public UBGWBasePhysAnimDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneNameToSimulatePhysics;
    
    UBGWPhysMoveAnimDataAsset();

};

