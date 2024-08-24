#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OMMBlueprintLibrary.generated.h"

class UObject;
class UStaticMesh;

UCLASS(Blueprintable)
class UOMMBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOMMBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void RemoveOMMUserData(UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsThisDeviceSupportOMM(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float CalculateCurrentWorldOMMTotalDataSize(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BuildAllStaticMesh(const UObject* WorldContextObject);
    
};

