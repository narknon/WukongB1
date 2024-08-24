#pragma once
#include "CoreMinimal.h"
#include "PCSEW_Base.h"
#include "PCSEW_KJLRandomLightning.generated.h"

class AActor;
class UNiagaraSystem;

UCLASS(Blueprintable)
class UPCSEW_KJLRandomLightning : public UPCSEW_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* LightningBeam;
    
public:
    UPCSEW_KJLRandomLightning();

};

