#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGU3rdCameraBase.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class B1_API ABGU3rdCameraBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
    ABGU3rdCameraBase(const FObjectInitializer& ObjectInitializer);

};

