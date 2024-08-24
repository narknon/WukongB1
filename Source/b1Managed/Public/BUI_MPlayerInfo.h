#pragma once
#include "CoreMinimal.h"
#include "BUI_MBarBase.h"
#include "BUI_MPlayerInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_MPlayerInfo : public UBUI_MBarBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UBUI_MPlayerInfo();

};

