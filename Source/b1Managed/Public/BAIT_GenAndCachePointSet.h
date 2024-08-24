#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "PointsGenExtParam.h"
#include "PointsGenType.h"
#include "BAIT_GenAndCachePointSet.generated.h"

UCLASS(Blueprintable)
class UBAIT_GenAndCachePointSet : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PointsGenType GenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointsGenExtParam GenExtParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegisterID;
    
    UBAIT_GenAndCachePointSet();

};

