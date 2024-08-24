#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PostProcessMatInfo.generated.h"

class ABGUCharacterCS;
class UBGWDataAsset_PostProcessMatSetting;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UPostProcessMatInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_PostProcessMatSetting* PostProcessMatSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUCharacterCS* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FVector> LastFrameDataCache;
    
    UPostProcessMatInfo();

};

