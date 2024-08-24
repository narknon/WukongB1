#pragma once
#include "CoreMinimal.h"
#include "SplineWidget.h"
#include "GSTalentSplineWidget.generated.h"

UCLASS(Blueprintable)
class UGSTalentSplineWidget : public USplineWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChildID;
    
    UGSTalentSplineWidget();

};

