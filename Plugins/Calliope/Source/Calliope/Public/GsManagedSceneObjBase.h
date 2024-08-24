#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedSceneObjBase.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedSceneObjBase : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedStateManaged;
    
    FGsManagedSceneObjBase();
};

