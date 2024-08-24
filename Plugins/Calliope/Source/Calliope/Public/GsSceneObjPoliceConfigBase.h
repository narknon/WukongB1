#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GsSceneObjPoliceConfigBase.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsSceneObjPoliceConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConfigGuid;
    
    FGsSceneObjPoliceConfigBase();
};

