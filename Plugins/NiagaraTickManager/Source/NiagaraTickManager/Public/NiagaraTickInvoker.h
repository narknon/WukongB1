#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NiagaraTickInvoker.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIAGARATICKMANAGER_API UNiagaraTickInvoker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseDistance;
    
    UNiagaraTickInvoker(const FObjectInitializer& ObjectInitializer);

};

