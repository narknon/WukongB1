#pragma once
#include "CoreMinimal.h"
#include "BANS_GSBase.h"
#include "BANS_GSPreciseDodge.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSPreciseDodge : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UBANS_GSPreciseDodge();

};

