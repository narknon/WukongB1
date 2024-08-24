#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IntPtr.h"
#include "BGUFuncLibCSDelegateRegister.generated.h"

UCLASS(Blueprintable)
class B1_API UBGUFuncLibCSDelegateRegister : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibCSDelegateRegister();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_SetFloatProperty(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_SetEnumProperty(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_SetCollisionResponseProperty(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_ResetProperty(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_BTTaskTick(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_BTTaskExecute(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_BTTaskAbort(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_BTServiceTick(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_BTServiceSearchStart(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_BTServiceDeactivation(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_BTServiceActivation(const FIntPtr& FuncPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Register_BTDecoratorCheckCondition(const FIntPtr& FuncPtr);
    
};

