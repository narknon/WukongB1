#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GsNPCReferenceInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsNPCReferenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConfigGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Tamer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AliasName;
    
    FGsNPCReferenceInfo();
};

