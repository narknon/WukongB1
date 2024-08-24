#include "BGUSpiderCharacter.h"
#include "BGUSpiderMovementComponent.h"

ABGUSpiderCharacter::ABGUSpiderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBGUSpiderMovementComponent>(TEXT("CharMoveComp"))) {
}


