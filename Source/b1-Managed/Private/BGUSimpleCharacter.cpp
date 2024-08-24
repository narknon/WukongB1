#include "BGUSimpleCharacter.h"
#include "BUS_SimpleBGUDataComp.h"

ABGUSimpleCharacter::ABGUSimpleCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_SimpleBGUDataComp>(TEXT("UBGUDataComp"))) {
}


