#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUGhostActorBase.generated.h"

class UPoseableMeshComponent;

UCLASS(Blueprintable)
class ABGUGhostActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* PoseableMeshComp;
    
    ABGUGhostActorBase(const FObjectInitializer& ObjectInitializer);

};

