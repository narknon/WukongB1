#include "BGUTakePhotoActor.h"
#include "CineCameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "BUS_SpringArmComponent.h"

ABGUTakePhotoActor::ABGUTakePhotoActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (UCapsuleComponent*)RootComponent;
    this->CameraBoom1 = CreateDefaultSubobject<UBUS_SpringArmComponent>(TEXT("CameraBoom1"));
    this->BoomPerformance = CreateDefaultSubobject<USceneComponent>(TEXT("BoomPerformance"));
    this->FollowCamera = CreateDefaultSubobject<UCineCameraComponent>(TEXT("FollowCamera"));
    this->BoomPerformance->SetupAttachment(CameraBoom1);
    this->CameraBoom1->SetupAttachment(RootComponent);
    this->FollowCamera->SetupAttachment(BoomPerformance);
}


