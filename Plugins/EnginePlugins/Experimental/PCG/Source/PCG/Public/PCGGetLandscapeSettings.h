#pragma once
#include "CoreMinimal.h"
#include "PCGDataFromActorSettings.h"
#include "PCGGetLandscapeSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGGetLandscapeSettings : public UPCGDataFromActorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetHeightOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetLayerWeights;
    
    UPCGGetLandscapeSettings();

};

