#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "MatParam.h"
#include "BGWDataAsset_StaticMeshActorSetting.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable)
class UBGWDataAsset_StaticMeshActorSetting : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatParam> MaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DurationTime;
    
    UBGWDataAsset_StaticMeshActorSetting();

};

