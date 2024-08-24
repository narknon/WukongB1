#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "BGWVolumeBase.generated.h"

UCLASS(Abstract, Blueprintable)
class B1_API ABGWVolumeBase : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    ABGWVolumeBase(const FObjectInitializer& ObjectInitializer);

};

