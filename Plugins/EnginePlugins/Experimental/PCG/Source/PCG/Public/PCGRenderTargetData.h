#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGBaseTextureData.h"
#include "PCGRenderTargetData.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class PCG_API UPCGRenderTargetData : public UPCGBaseTextureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPCGRenderTargetData();

    UFUNCTION(BlueprintCallable)
    void Initialize(UTextureRenderTarget2D* InRenderTarget, const FTransform& InTransform);
    
};

