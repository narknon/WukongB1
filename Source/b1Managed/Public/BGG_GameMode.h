#pragma once
#include "CoreMinimal.h"
#include "BGWGameMode.h"
#include "BGG_GameMode.generated.h"

class AActor;
class AController;
class UActorCompContainerCS;
class UActorDataContainer;
class UBGS_GSEventCollection;

UCLASS(Blueprintable, NonTransient)
class ABGG_GameMode : public ABGWGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorDataContainer* DataComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainerCS* ActorCompContainerCS;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerAllocNum;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBGS_GSEventCollection* EventCollection;
    
public:
    ABGG_GameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPlayCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* ChoosePlayerStart(AController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostSeamlessTravelCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSeamlessTravelActorListCS(bool bToTransition, TArray<AActor*>& ActorList);
    
};

