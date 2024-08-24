#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IntPtr.h"
#include "BGWCppExport.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWCppExport : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGWCppExport();

    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetAllFuncAsMap();
    
};

