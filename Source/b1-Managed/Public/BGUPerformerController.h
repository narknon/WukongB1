#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUPerformerController.generated.h"

class UBGUPerformerControlConfigComp;

UCLASS(Blueprintable)
class ABGUPerformerController : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUPerformerControlConfigComp* ConfigComp;
    
    ABGUPerformerController(const FObjectInitializer& ObjectInitializer);

};

