#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#include "ProjectionData.h"
#include "GSEQT_ProjectionPathFinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGSEQT_ProjectionPathFinding : public UEnvQueryTest_Pathfinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectionData ProjectionData;
    
    UGSEQT_ProjectionPathFinding();

};

