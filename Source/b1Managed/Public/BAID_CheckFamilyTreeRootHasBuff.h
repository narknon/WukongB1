#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckFamilyTreeRootHasBuff.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckFamilyTreeRootHasBuff : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsReverseConidtion: 1;
    
    UBAID_CheckFamilyTreeRootHasBuff();

};

