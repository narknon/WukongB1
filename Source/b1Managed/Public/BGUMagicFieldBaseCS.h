#pragma once
#include "CoreMinimal.h"
#include "BGUProjectileBaseActor.h"
#include "BGUMagicFieldBaseCS.generated.h"

UCLASS(Blueprintable)
class ABGUMagicFieldBaseCS : public ABGUProjectileBaseActor {
    GENERATED_BODY()
public:
    ABGUMagicFieldBaseCS(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MagicFieldDataMigrateTool();
    
};

