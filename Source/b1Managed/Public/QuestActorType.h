#pragma once
#include "CoreMinimal.h"
#include "QuestActorType.generated.h"

UENUM(BlueprintType)
enum class QuestActorType : uint8 {
    None,
    Overlap,
    DynamicObstacle,
    Spawn,
    Checker,
    CovertTimer,
    HLMQuest,
    PlayerChecker,
    SpawnWaves,
    BirthDecideArea,
};

