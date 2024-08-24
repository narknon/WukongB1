#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_TraceFuncLib.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_TraceFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_TraceFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CharacterCapsuleTraceSingleByProfile(const UObject* WorldContextObject, const FVector& Start, const FVector& End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, AActor* IgnoreActor, FVector& OutHitLocation);
    
};

