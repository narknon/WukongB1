#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "Templates/SubclassOf.h"
#include "BUI_ProjectileDebugInfo.generated.h"

class ABGUProjectileBaseActor;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_ProjectileDebugInfo : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InfoTemp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUProjectileBaseActor* ProjectileSelf;
    
public:
    UBUI_ProjectileDebugInfo();

    UFUNCTION(BlueprintCallable)
    void OnRegistOwner(ABGUProjectileBaseActor* projectileBaseActor);
    
};

