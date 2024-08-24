#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "QuestActorType.h"
#include "BUS_QuestDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_QuestDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    QuestActorType QuestActorType;
    
    UBUS_QuestDataComp(const FObjectInitializer& ObjectInitializer);

};

