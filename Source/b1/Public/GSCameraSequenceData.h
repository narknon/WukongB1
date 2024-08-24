#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GSCameraSequenceData.generated.h"

class ACameraRig_Rail;
class ULevelSequence;

USTRUCT(BlueprintType)
struct B1_API FGSCameraSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* CameraSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACameraRig_Rail> CameraRailClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseCinematicCamera;
    
    FGSCameraSequenceData();
};

