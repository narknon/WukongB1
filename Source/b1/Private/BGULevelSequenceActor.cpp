#include "BGULevelSequenceActor.h"
#include "BGULevelSequenceInstanceData.h"

ABGULevelSequenceActor::ABGULevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBGULevelSequenceInstanceData>(TEXT("InstanceData"))) {
}


