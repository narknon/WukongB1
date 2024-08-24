#include "OldMKSpawnTest.h"
#include "Templates/SubclassOf.h"

AOldMKSpawnTest::AOldMKSpawnTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

AActor* AOldMKSpawnTest::SpawnActorCS(TSubclassOf<AActor> ActorClass) {
    return NULL;
}


