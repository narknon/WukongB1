#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSAnimKeyStateBlenderUtil.generated.h"

class UGSAnimKeyStateBlender;

UCLASS(Blueprintable)
class GSANIMATIONKEYBLENDER_API UGSAnimKeyStateBlenderUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSAnimKeyStateBlenderUtil();

    UFUNCTION(BlueprintCallable)
    static void UnRegAnimKeyStateBlenderObjForTick(UGSAnimKeyStateBlender* AnimKeyStateBlender);
    
    UFUNCTION(BlueprintCallable)
    static void RegAnimKeyStateBlenderObjForTick(UGSAnimKeyStateBlender* AnimKeyStateBlender);
    
};

