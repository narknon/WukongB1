#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "GSEQT_Project.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGSEQT_Project : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData ProjectionData;
    
    UGSEQT_Project();

};

