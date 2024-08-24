#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "GameFramework/Volume.h"
#include "BGWBlockingVolume.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API ABGWBlockingVolume : public AVolume, public INavRelevantInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNavModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaskFillCollisionUnderneathForNavmesh;
    
    ABGWBlockingVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

