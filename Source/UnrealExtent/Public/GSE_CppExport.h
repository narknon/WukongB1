#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IntPtr.h"
#include "GSE_CppExport.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_CppExport : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_CppExport();

    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetUMGFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetTaskGraphFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetSplineComponentFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetSceneComponentFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetRenderFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetProfilerFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetNiagaraFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetMathFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetLineTraceFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetInputFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetGSCVarFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetGameplayTagFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetCVarFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetAsyncLineTraceReqFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetAnimFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetAIFuncAsMap();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FIntPtr> GetActorFuncAsMap();
    
};

