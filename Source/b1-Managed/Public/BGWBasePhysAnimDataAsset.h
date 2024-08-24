#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWBasePhysAnimDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWBasePhysAnimDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConstraintProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysAnimProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> KinematicBones;
    
    UBGWBasePhysAnimDataAsset();

};

