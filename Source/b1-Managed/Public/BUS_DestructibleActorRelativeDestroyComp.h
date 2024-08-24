#pragma once
#include "CoreMinimal.h"
#include "BaseActorComp.h"
#include "BUS_DestructibleActorRelativeDestroyComp.generated.h"

class AActor;
class ABGUFXActorBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DestructibleActorRelativeDestroyComp : public UBaseActorComp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> RelativeDestroyActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ABGUFXActorBase>> RelativeDestroyDestructibles;
    
    UBUS_DestructibleActorRelativeDestroyComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
};

