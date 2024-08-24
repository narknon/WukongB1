#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_OverlapFuncLib.generated.h"

class AActor;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_OverlapFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_OverlapFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxOverlapComponentsByProfile(const UObject* WorldContextObject, const FVector BoxPos, FVector BoxExtent, FName ProfileName, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxOverlapActorsByProfile(const UObject* WorldContextObject, const FVector BoxPos, FVector BoxExtent, FName ProfileName, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
};

