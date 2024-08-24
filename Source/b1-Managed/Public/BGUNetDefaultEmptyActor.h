#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUCharacter.h"
#include "BGUNetDefaultEmptyActor.generated.h"

class AController;
class UActorCompContainerCS;

UCLASS(Blueprintable)
class ABGUNetDefaultEmptyActor : public ABGUCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorCompContainerCS* ActorCompContainerCS;
    
    ABGUNetDefaultEmptyActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPossessedCS(AController* NewController);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInitializeComponentsCS();
    
};

