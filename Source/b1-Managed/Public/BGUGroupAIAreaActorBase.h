#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUGroupAIAreaActorBase.generated.h"

class UBUS_GroupAIAreaComp;
class UBoxComponent;

UCLASS(Blueprintable)
class ABGUGroupAIAreaActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_GroupAIAreaComp* GroupAIAreaComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollisionComponent;
    
public:
    ABGUGroupAIAreaActorBase(const FObjectInitializer& ObjectInitializer);

};

