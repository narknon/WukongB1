#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESubstanceTextureSize.h"
#include "SubstanceConnection.h"
#include "SubstanceUtility.generated.h"

class UMaterialInterface;
class UObject;
class USubstanceGraphInstance;
class USubstanceInstanceFactory;
class USubstanceTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class USubstanceUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USubstanceUtility();

    UFUNCTION(BlueprintCallable)
    static void SyncRendering(USubstanceGraphInstance* InstancesToRender);
    
    UFUNCTION(BlueprintCallable)
    static void SetGraphInstanceOutputSizeInt(USubstanceGraphInstance* GraphInstance, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    static void SetGraphInstanceOutputSize(USubstanceGraphInstance* GraphInstance, TEnumAsByte<ESubstanceTextureSize> Width, TEnumAsByte<ESubstanceTextureSize> Height);
    
    UFUNCTION(BlueprintCallable)
    static void ResetInputParameters(USubstanceGraphInstance* GraphInstance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USubstanceTexture2D*> GetSubstanceTextures(USubstanceGraphInstance* GraphInstance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USubstanceGraphInstance*> GetSubstances(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    static float GetSubstanceLoadingProgress();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGraphName(USubstanceGraphInstance* GraphInstance);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFactoryName(USubstanceGraphInstance* GraphInstance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnableInstanceOutputs(UObject* WorldContextObject, USubstanceGraphInstance* GraphInstance, TArray<int32> OutputIndices);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USubstanceGraphInstance* DuplicateGraphInstance(UObject* WorldContextObject, USubstanceGraphInstance* GraphInstance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisableInstanceOutputs(UObject* WorldContextObject, USubstanceGraphInstance* GraphInstance, TArray<int32> OutputIndices);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USubstanceGraphInstance* CreateGraphInstance(UObject* WorldContextObject, USubstanceInstanceFactory* Factory, int32 GraphDescIndex, const FString& InstanceName);
    
    UFUNCTION(BlueprintCallable)
    static USubstanceInstanceFactory* CreateAggregateSubstanceFactory(USubstanceInstanceFactory* OutputFactory, int32 OutputFactoryGraphIndex, USubstanceInstanceFactory* InputFactory, int32 InputFactoryGraphIndex, const TArray<FSubstanceConnection>& Connections);
    
    UFUNCTION(BlueprintCallable)
    static void CopyInputParameters(USubstanceGraphInstance* SourceGraphInstance, USubstanceGraphInstance* DestGraphInstance);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCache();
    
    UFUNCTION(BlueprintCallable)
    static void AsyncRendering(USubstanceGraphInstance* InstancesToRender);
    
};

