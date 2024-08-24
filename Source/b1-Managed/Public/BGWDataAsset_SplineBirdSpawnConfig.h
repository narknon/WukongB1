#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGWDataAsset.h"
#include "Templates/SubclassOf.h"
#include "BGWDataAsset_SplineBirdSpawnConfig.generated.h"

class ABGUFXAnimalActor;

UCLASS(Blueprintable)
class UBGWDataAsset_SplineBirdSpawnConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDebug: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalRefreshCoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineUseProtectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange SplineFilterDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCoutInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange SpawnGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABGUFXAnimalActor>> FXAnimalTemplateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<ABGUFXAnimalActor>> FXAnimalTemplateMap;
    
    UBGWDataAsset_SplineBirdSpawnConfig();

};

