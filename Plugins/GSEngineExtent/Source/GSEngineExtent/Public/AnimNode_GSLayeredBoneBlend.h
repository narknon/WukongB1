#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_LayeredBoneBlend.h"
#include "GSInputBlendPose.h"
#include "AnimNode_GSLayeredBoneBlend.generated.h"

USTRUCT(BlueprintType)
struct GSENGINEEXTENT_API FAnimNode_GSLayeredBoneBlend : public FAnimNode_LayeredBoneBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGSInputBlendPose> GS_LayerSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GS_bMeshSpaceRotationBlend;
    
    FAnimNode_GSLayeredBoneBlend();
};

