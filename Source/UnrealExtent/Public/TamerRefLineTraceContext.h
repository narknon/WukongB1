#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TamerRefLineTraceContext.generated.h"

USTRUCT(BlueprintType)
struct FTamerRefLineTraceContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TraceEnds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeight;
    
    UNREALEXTENT_API FTamerRefLineTraceContext();
};

