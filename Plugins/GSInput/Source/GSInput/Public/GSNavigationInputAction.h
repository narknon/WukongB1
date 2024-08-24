#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "Types/SlateEnums.h"
#include "GSNavigationInputAction.generated.h"

UCLASS(Blueprintable)
class GSINPUT_API UGSNavigationInputAction : public UInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUINavigation> FirstTriggerNavigations;
    
    UGSNavigationInputAction();

};

