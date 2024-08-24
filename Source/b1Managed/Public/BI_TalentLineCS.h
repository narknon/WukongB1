#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BI_TalentLineCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_TalentLineCS : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChildID;
    
    UBI_TalentLineCS();

};

