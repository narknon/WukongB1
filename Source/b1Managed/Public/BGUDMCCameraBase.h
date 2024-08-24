#pragma once
#include "CoreMinimal.h"
#include "BGU3rdCameraBase.h"
#include "BGUDMCCameraBase.generated.h"

UCLASS(Blueprintable)
class ABGUDMCCameraBase : public ABGU3rdCameraBase {
    GENERATED_BODY()
public:
    ABGUDMCCameraBase(const FObjectInitializer& ObjectInitializer);

};

