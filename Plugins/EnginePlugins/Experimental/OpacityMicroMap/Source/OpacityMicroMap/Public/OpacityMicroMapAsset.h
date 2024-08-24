#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "OpacityMicroMapAsset.generated.h"

class UOpacityMicroMapCollection;

UCLASS(Blueprintable, EditInlineNew)
class OPACITYMICROMAP_API UOpacityMicroMapAsset : public UAssetUserData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOpacityMicroMapCollection* Collection;
    
public:
    UOpacityMicroMapAsset();

};

