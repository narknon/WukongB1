#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_GiveBackControlRight.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_GiveBackControlRight : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendOutTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EViewTargetBlendFunction CameraBlendOutFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendOutFuncExp;
    
    UBED_MovieNode_GiveBackControlRight();

};

