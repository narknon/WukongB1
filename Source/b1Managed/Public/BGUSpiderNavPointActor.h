#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGUSpiderNavPointActor.generated.h"

class UArrowComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABGUSpiderNavPointActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsGroundPoint: 1;
    
    ABGUSpiderNavPointActor(const FObjectInitializer& ObjectInitializer);

};

