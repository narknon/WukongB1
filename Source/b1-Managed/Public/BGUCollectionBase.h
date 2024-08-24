#pragma once
#include "CoreMinimal.h"
#include "BGUInteractiveActorBase.h"
#include "BGUCollectionBase.generated.h"

class UBUS_CollectionConfigComp;

UCLASS(Blueprintable)
class ABGUCollectionBase : public ABGUInteractiveActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_CollectionConfigComp* CollectionConfigComp;
    
    ABGUCollectionBase(const FObjectInitializer& ObjectInitializer);

};

