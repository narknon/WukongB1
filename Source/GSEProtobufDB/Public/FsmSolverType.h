#pragma once
#include "CoreMinimal.h"
#include "FsmSolverType.generated.h"

UENUM(BlueprintType)
enum class FsmSolverType : uint8 {
    Normal,
    FriendlyBattleNpc,
    AssistantPartner,
    GroupAi,
    SummonAi,
    NeutralAnimalBattle,
    NeutralAnimalEscape,
};

