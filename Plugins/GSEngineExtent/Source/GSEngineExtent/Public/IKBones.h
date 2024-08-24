#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "IKBones.generated.h"

USTRUCT(BlueprintType)
struct FIKBones {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKFootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference FKFootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBonesInLimb;
    
    GSENGINEEXTENT_API FIKBones();
};

