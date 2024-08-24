#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DoNNavigationQueryParams.h"
#include "EDonNavigationQueryStatus.h"
#include "DoNNavigationQueryData.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FDoNNavigationQueryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoNNavigationQueryParams QueryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathSolutionOptimized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDonNavigationQueryStatus QueryStatus;
    
    DONAINAVIGATION_API FDoNNavigationQueryData();
};

