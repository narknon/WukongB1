#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorCompContainer.generated.h"

class UActorDataContainer;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class B1_API UActorCompContainer : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorDataContainer* DataContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* EventCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TeamID;
    
public:
    UActorCompContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTeamID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void FillEventCollection(UObject* DataObj);
    
    UFUNCTION(BlueprintCallable)
    void FillDataContainer(UActorDataContainer* DataObj);
    
};

