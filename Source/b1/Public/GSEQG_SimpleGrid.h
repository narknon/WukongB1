#pragma once
#include "CoreMinimal.h"
#include "GSEQG_SimpleTeleport.h"
#include "GSEQG_SimpleGrid.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class B1_API UGSEQG_SimpleGrid : public UGSEQG_SimpleTeleport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridHalfSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetween;
    
    UGSEQG_SimpleGrid();

};

