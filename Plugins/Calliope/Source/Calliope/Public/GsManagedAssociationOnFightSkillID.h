#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedAssociationOnFightSkillID.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedAssociationOnFightSkillID : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnFightSkillID;
    
    FGsManagedAssociationOnFightSkillID();
};

