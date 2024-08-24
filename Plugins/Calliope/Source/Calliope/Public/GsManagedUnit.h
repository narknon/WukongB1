#pragma once
#include "CoreMinimal.h"
#include "EGsUnitResetType.h"
#include "GsManagedSceneObjBase.h"
#include "GsManagedUnit.generated.h"

class AActor;
class ACharacter;

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedUnit : public FGsManagedSceneObjBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACharacter> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Tamer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsUnitResetType State;
    
    FGsManagedUnit();
};

