#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_LandscapeFuncLib.generated.h"

class AActor;
class UTexture2D;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_LandscapeFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_LandscapeFuncLib();

    UFUNCTION(BlueprintCallable)
    static FVector SaveLandscapeWeight(const FString& PackagePath, AActor* LandscapeActor);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* SaveLandscapeLayerWeightTex(const FString& PackagePath, const FString& AssetName, AActor* LandscapeActor, const FString& LayerName);
    
    UFUNCTION(BlueprintCallable)
    static void RecreateLandscapeActorByProxy(AActor* LandscapeProxy);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetLandscapeOriginOffset(AActor* LandscapeActor);
    
    UFUNCTION(BlueprintCallable)
    static void AddLocationsToStreamingManager(TArray<FVector> Locations, float Duration);
    
};

