#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "PCGVolume.generated.h"

class UPCGComponent;

UCLASS(Blueprintable)
class PCG_API APCGVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGComponent* PCGComponent;
    
    APCGVolume(const FObjectInitializer& ObjectInitializer);

};

