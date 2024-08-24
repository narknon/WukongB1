#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TressFXBindingAsset.generated.h"

class USkeletalMesh;
class UTressFXAsset;

UCLASS(Blueprintable)
class TRESSFX_API UTressFXBindingAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTressFXAsset* TressFXAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* TargetSkeletalMesh;
    
    UTressFXBindingAsset();

};

