#pragma once
#include "CoreMinimal.h"
#include "LODSyncInterface.h"
#include "Components/MeshComponent.h"
#include "TressFXSDFComponent.generated.h"

class UTressFXMeshAsset;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRESSFX_API UTressFXSDFComponent : public UMeshComponent/*, public ILODSyncInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool EnableSDF;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LocalSDFId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTressFXMeshAsset* TressFXMeshAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBlendShapes;
    
    UTressFXSDFComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTressFXMeshAsset(UTressFXMeshAsset* Asset);
    

    // Fix for true pure virtual functions not being implemented
};

