#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "MonsterManualInfo.h"
#include "BGWMonsterManualConfigDataAsset.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable)
class UBGWMonsterManualConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPCBook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMonsterManualInfo> MonsterManualInfoMap;
    
    UBGWMonsterManualConfigDataAsset();

};

