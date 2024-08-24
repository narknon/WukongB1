#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUBattleSC.generated.h"

class UBUS_MessageDistributionCenter;

UCLASS(Blueprintable)
class ABGUBattleSC : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_MessageDistributionCenter* MessageDistributionCenter;
    
public:
    ABGUBattleSC(const FObjectInitializer& ObjectInitializer);

};

