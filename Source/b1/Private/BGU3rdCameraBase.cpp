#include "BGU3rdCameraBase.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

ABGU3rdCameraBase::ABGU3rdCameraBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->FollowCamera->SetupAttachment(CameraBoom);
}


