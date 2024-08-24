#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EConfigIniFileNames.h"
#include "GSE_ConfigFuncLib.generated.h"

UCLASS(Blueprintable)
class UGSE_ConfigFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_ConfigFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SetVector4(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FVector4& Vector4Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetVector2D(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FVector2D& Vector2DValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetVector(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FVector& VectorValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetText(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FText TextValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetString(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotator(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FRotator& RotatorValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const int32 IntValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloat(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const float FloatValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetColor(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const FColor& ColorValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetBool(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const bool BoolValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetArray(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, const TArray<FString>& ArrayValue);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 GetVector4(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetVector2D(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVector(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static FText GetText(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static FString GetString(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetRotator(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetInt(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloat(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static FColor GetColor(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBool(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetArray(EConfigIniFileNames ConfigFile, const FString& SectionName, const FString& PropertyName, bool& bWasFound);
    
    UFUNCTION(BlueprintCallable)
    static void Flush(EConfigIniFileNames ConfigFile, const bool bRefreshInConfigSystem);
    
};

