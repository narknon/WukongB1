#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "GSFocusWidget.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSFocusWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
    UGSFocusWidget();

};

