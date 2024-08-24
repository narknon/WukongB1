#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PCGContext.h"
#include "PCGPoint.h"
#include "PCGBlueprintHelpers.generated.h"

class AActor;
class UPCGComponent;
class UPCGData;
class UPCGSettings;
class UPCGSpatialData;

UCLASS(Blueprintable)
class PCG_API UPCGBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGBlueprintHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetSeedFromPosition(UPARAM(Ref) FPCGPoint& InPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocalCenter(UPARAM(Ref) FPCGPoint& InPoint, const FVector& InLocalCenter);
    
    UFUNCTION(BlueprintCallable)
    static void SetExtents(UPARAM(Ref) FPCGPoint& InPoint, const FVector& InExtents);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetTransformedBounds(const FPCGPoint& InPoint);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetTaskId(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetTargetActor(UPARAM(Ref) FPCGContext& Context, UPCGSpatialData* SpatialData);
    
    UFUNCTION(BlueprintCallable)
    static UPCGSettings* GetSettings(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FRandomStream GetRandomStream(const FPCGPoint& InPoint, const UPCGSettings* OptionalSettings, const UPCGComponent* OptionalComponent);
    
    UFUNCTION(BlueprintCallable)
    static UPCGComponent* GetOriginalComponent(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetLocalCenter(const FPCGPoint& InPoint);
    
    UFUNCTION(BlueprintCallable)
    static UPCGData* GetInputData(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetExtents(const FPCGPoint& InPoint);
    
    UFUNCTION(BlueprintCallable)
    static UPCGComponent* GetComponent(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetActorLocalBoundsPCG(AActor* InActor, bool bIgnorePCGCreatedComponents);
    
    UFUNCTION(BlueprintCallable)
    static UPCGData* GetActorData(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetActorBoundsPCG(AActor* InActor, bool bIgnorePCGCreatedComponents);
    
    UFUNCTION(BlueprintCallable)
    static UPCGData* CreatePCGDataFromActor(AActor* InActor, bool bParseActor);
    
    UFUNCTION(BlueprintCallable)
    static int32 ComputeSeedFromPosition(const FVector& InPosition);
    
};

