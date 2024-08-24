#pragma once
#include "CoreMinimal.h"
#include "EPCGSpawnActorGenerationTrigger.generated.h"

UENUM(BlueprintType)
enum class EPCGSpawnActorGenerationTrigger : uint8 {
    Default,
    ForceGenerate,
    DoNotGenerateInEditor,
    DoNotGenerate,
};

