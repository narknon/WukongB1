#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BED_MovieNode.h"
#include "EAIMoveSpeedType.h"
#include "BED_MovieNode_PlayerBlendPosition.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_PlayerBlendPosition : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> AlternativeTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendPositionAcceptRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIMoveSpeedType MoveSpeedType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendPositionInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDistance;
    
    UBED_MovieNode_PlayerBlendPosition();

};

