#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "BGWActorVisibilityVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class B1_API ABGWActorVisibilityVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    ABGWActorVisibilityVolume(const FObjectInitializer& ObjectInitializer);

};

