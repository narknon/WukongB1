#pragma once
#include "CoreMinimal.h"
#include "Engine/Texture2DDynamic.h"
#include "Engine/Texture.h"
#include "ESubChannelType.h"
#include "SubstanceTexture2D.generated.h"

class USubstanceGraphInstance;

UCLASS(Blueprintable)
class SUBSTANCECORE_API USubstanceTexture2D : public UTexture2DDynamic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubstanceGraphInstance* ParentInstance;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCooked;
    
    USubstanceTexture2D();

    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESubChannelType> GetChannel();
    
};

