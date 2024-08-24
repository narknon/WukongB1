#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorDataContainer.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class B1_API UActorDataContainer : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> mDatas;
    
public:
    UActorDataContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreECSBeginPlay();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestoryInCS();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LateECSBeginPlay();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitOnNewInCS();
    
    UFUNCTION(BlueprintCallable)
    void ClearDataObj();
    
    UFUNCTION(BlueprintCallable)
    void AddDataObjInCS(UObject* Obj);
    
};

