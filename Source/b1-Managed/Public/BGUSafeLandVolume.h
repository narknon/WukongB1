#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUSafeLandVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ABGUSafeLandVolume : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SafeLandBox;
    
    ABGUSafeLandVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
};

