#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GSEQT_Overlap.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGSEQT_Overlap : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvOverlapData OverlapData;
    
    UGSEQT_Overlap();

};

