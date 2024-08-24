#pragma once
#include "CoreMinimal.h"
#include "BUI_ProjectileDebugInfo.h"
#include "BUI_BulletDebugInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_BulletDebugInfo : public UBUI_ProjectileDebugInfo {
    GENERATED_BODY()
public:
    UBUI_BulletDebugInfo();

};

