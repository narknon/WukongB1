#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DispLibEntityBase.h"
#include "DispLibDispWorld.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class ADispLibDispWorld : public ADispLibEntityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* WEFMManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* WEFM_VisualDebugFX;
    
    ADispLibDispWorld(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
};

