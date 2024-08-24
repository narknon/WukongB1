#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DoNNavigationQueryData.h"
#include "DonNavigationHelper.generated.h"

class AActor;
class ADonNavigationManager;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class DONAINAVIGATION_API UDonNavigationHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDonNavigationHelper();

    UFUNCTION(BlueprintCallable)
    static void OnUpdateDynamicCollision(UPrimitiveComponent* Mesh, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    static void OnNextSegment(UObject* Object, FVector NextPoint);
    
    UFUNCTION(BlueprintCallable)
    static void OnLocomotionEnd(UObject* Object, const bool bLocomotionSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void OnLocomotionBegin(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void OnLocomotionAbort(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetQueryDataVolumeSolutionOptimizedNum(const FDoNNavigationQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetQueryDataVolumeSolutionNum(const FDoNNavigationQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ADonNavigationManager* DonNavigationManagerForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADonNavigationManager* DonNavigationManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddMovementInputCustom(UObject* Object, FVector WorldDirection, float ScaleValue);
    
};

