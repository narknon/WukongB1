#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGUChapterCameraActor.generated.h"

class UBUS_SpringArmComponent;
class UCineCameraComponent;
class UPointLightComponent;
class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable)
class ABGUChapterCameraActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SpringArmComponent* CameraBoom1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BoomPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCineCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* FollowPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLineTraceDistance;
    
    ABGUChapterCameraActor(const FObjectInitializer& ObjectInitializer);

};

