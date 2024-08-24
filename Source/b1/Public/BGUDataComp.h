#pragma once
#include "CoreMinimal.h"
#include "ActorDataContainer.h"
#include "BGUDataComp.generated.h"

class ABGUAIController;
class ABGUCharacter;
class UBUC_ACharacterComponent;
class UBUC_AIComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class B1_API UBGUDataComp : public UActorDataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBUC_AIComponent* mUBUC_AIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBUC_ACharacterComponent* mUBUC_ACharacterComponent;
    
public:
    UBGUDataComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitWithCharacter(ABGUCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void InitWithAIController(ABGUAIController* AIController);
    
};

