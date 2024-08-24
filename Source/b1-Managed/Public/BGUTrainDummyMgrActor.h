#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUTrainDummyMgrActor.generated.h"

class UBUS_TrainDummyMgrConfigComp;

UCLASS(Blueprintable)
class ABGUTrainDummyMgrActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_TrainDummyMgrConfigComp* ZBBTrainMgrConfigComp;
    
public:
    ABGUTrainDummyMgrActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
};

