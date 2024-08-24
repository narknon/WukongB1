#pragma once
#include "CoreMinimal.h"
#include "SceneItemSurfaceType.h"
#include "BAID_Base.h"
#include "BAID_CheckSurfaceType.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckSurfaceType : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SceneItemSurfaceType SurfaceType;
    
    UBAID_CheckSurfaceType();

};

