#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUSimpleActorBaseCS.h"
#include "BGUDialogueProxyActor.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class ABGUDialogueProxyActor : public ABGUSimpleActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComp;
    
    ABGUDialogueProxyActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
};

