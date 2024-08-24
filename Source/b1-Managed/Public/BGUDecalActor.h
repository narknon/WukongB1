#pragma once
#include "CoreMinimal.h"
#include "BGUFXActorBase.h"
#include "BGUDecalActor.generated.h"

class UBUS_DecalConfigComp;
class UDecalComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ABGUDecalActor : public ABGUFXActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_DecalConfigComp* DecalConfigComp;
    
    ABGUDecalActor(const FObjectInitializer& ObjectInitializer);

};

