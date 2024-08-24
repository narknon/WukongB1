#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSDataShareAPIHelper.generated.h"

UCLASS(Blueprintable)
class GSDATASHARE_API UGSDataShareAPIHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSDataShareAPIHelper();

    UFUNCTION(BlueprintCallable)
    static bool IsAssetExist(const FString& AssetPath);
    
};

