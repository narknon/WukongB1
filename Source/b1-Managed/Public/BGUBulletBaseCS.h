#pragma once
#include "CoreMinimal.h"
#include "BGUProjectileBaseActor.h"
#include "BGUBulletBaseCS.generated.h"

UCLASS(Blueprintable)
class ABGUBulletBaseCS : public ABGUProjectileBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttachBoneName;
    
    ABGUBulletBaseCS(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BulletDataMigrateTool();
    
};

