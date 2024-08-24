#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGUTakePhotoActor.generated.h"

class UBUS_SpringArmComponent;
class UCapsuleComponent;
class UCineCameraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ABGUTakePhotoActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SpringArmComponent* CameraBoom1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BoomPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCineCameraComponent* FollowCamera;
    
    ABGUTakePhotoActor(const FObjectInitializer& ObjectInitializer);

};

