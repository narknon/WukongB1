#pragma once
#include "CoreMinimal.h"
#include "EGsStreamingLevelState.h"
#include "GsManagedParamBase.h"
#include "GsManagedStreamingLevel.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedStreamingLevel : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PersistentLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StreamingLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsStreamingLevelState State;
    
    FGsManagedStreamingLevel();
};

