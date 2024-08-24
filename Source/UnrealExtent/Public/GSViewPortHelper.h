#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GSOnViewPortResizedDelegate.h"
#include "GSViewPortHelper.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSViewPortHelper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnViewPortResized OnViewPortResized;
    
    UGSViewPortHelper();

};

