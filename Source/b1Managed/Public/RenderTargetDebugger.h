#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RenderTargetDebugger.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ARenderTargetDebugger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RT_Debug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_RTPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh_Previewer;
    
public:
    ARenderTargetDebugger(const FObjectInitializer& ObjectInitializer);

};

