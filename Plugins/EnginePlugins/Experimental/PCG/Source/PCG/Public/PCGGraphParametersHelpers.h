#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PCGGraphParametersHelpers.generated.h"

class UEnum;
class UObject;
class UPCGGraphInstance;

UCLASS(Blueprintable)
class PCG_API UPCGGraphParametersHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGGraphParametersHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetVectorParameter(UPCGGraphInstance* GraphInstance, const FName Name, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformParameter(UPCGGraphInstance* GraphInstance, const FName Name, const FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringParameter(UPCGGraphInstance* GraphInstance, const FName Name, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoftObjectParameter(UPCGGraphInstance* GraphInstance, const FName Name, const TSoftObjectPtr<UObject>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoftClassParameter(UPCGGraphInstance* GraphInstance, const FName Name, const TSoftClassPtr<UObject>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotatorParameter(UPCGGraphInstance* GraphInstance, const FName Name, const FRotator& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNameParameter(UPCGGraphInstance* GraphInstance, const FName Name, const FName Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt64Parameter(UPCGGraphInstance* GraphInstance, const FName Name, const int64 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt32Parameter(UPCGGraphInstance* GraphInstance, const FName Name, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatParameter(UPCGGraphInstance* GraphInstance, const FName Name, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnumParameter(UPCGGraphInstance* GraphInstance, const FName Name, const UEnum* Enum, const uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDoubleParameter(UPCGGraphInstance* GraphInstance, const FName Name, const double Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetByteParameter(UPCGGraphInstance* GraphInstance, const FName Name, const uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolParameter(UPCGGraphInstance* GraphInstance, const FName Name, const bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOverridden(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVectorParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetTransformParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UObject> GetSoftObjectParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<UObject> GetSoftClassParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetRotatorParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FName GetNameParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetInt64Parameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetInt32Parameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static double GetDoubleParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetByteParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoolParameter(UPCGGraphInstance* GraphInstance, const FName Name);
    
};

