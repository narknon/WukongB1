#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGBaseTextureData.h"
#include "PCGTextureData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class PCG_API UPCGTextureData : public UPCGBaseTextureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTexture2D> Texture;
    
    UPCGTextureData();

    UFUNCTION(BlueprintCallable)
    void Initialize(UTexture2D* InTexture, const FTransform& InTransform);
    
};

