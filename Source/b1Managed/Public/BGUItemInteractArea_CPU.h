#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUItemInteractArea_CPU.generated.h"

class AActor;
class UBoxComponent;

UCLASS(Blueprintable)
class ABGUItemInteractArea_CPU : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AreaBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridUnitLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ItemList;
    
    ABGUItemInteractArea_CPU(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
};

