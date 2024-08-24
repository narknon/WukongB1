#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "GSEnvQueryManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class B1_API UGSEnvQueryManager : public UEnvQueryManager {
    GENERATED_BODY()
public:
    UGSEnvQueryManager();

};

