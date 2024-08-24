#include "BGUChapterCameraActor.h"
#include "CineCameraComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "BUS_SpringArmComponent.h"

ABGUChapterCameraActor::ABGUChapterCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USphereComponent*)RootComponent;
    this->CameraBoom1 = CreateDefaultSubobject<UBUS_SpringArmComponent>(TEXT("CameraBoom1"));
    this->BoomPerformance = CreateDefaultSubobject<USceneComponent>(TEXT("BoomPerformance"));
    this->FollowCamera = CreateDefaultSubobject<UCineCameraComponent>(TEXT("FollowCamera"));
    this->FollowPoint = CreateDefaultSubobject<UPointLightComponent>(TEXT("FollowPoint"));
    this->CameraLineTraceDistance = 0.00f;
    this->BoomPerformance->SetupAttachment(CameraBoom1);
    this->CameraBoom1->SetupAttachment(RootComponent);
    this->FollowCamera->SetupAttachment(BoomPerformance);
    this->FollowPoint->SetupAttachment(BoomPerformance);
}


