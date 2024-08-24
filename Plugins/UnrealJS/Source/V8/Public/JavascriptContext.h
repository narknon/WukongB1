#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptFunction.h"
#include "JavascriptContext.generated.h"

UCLASS(Blueprintable)
class V8_API UJavascriptContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Paths;
    
    UJavascriptContext();

    UFUNCTION(BlueprintCallable)
    bool WriteDTS(const FString& Target, bool bIncludingTooltip);
    
    UFUNCTION(BlueprintCallable)
    bool WriteAliases(const FString& Target);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterConsoleCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    void SetContextId(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString RunScript(const FString& Script, bool bOutput);
    
    UFUNCTION(BlueprintCallable)
    void RunFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void RequestV8GarbageCollection();
    
    UFUNCTION(BlueprintCallable)
    void RegisterConsoleCommand(const FString& Command, const FString& Help, FJavascriptFunction Function);
    
    UFUNCTION(BlueprintCallable)
    FString ReadScriptFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugContext() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetScriptFileFullPath(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void FindPathFile(const FString& TargetRootPath, const FString& TargetFileName, TArray<FString>& OutFiles);
    
    UFUNCTION(BlueprintCallable)
    void Expose(const FString& Name, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void DestroyInspector();
    
    UFUNCTION(BlueprintCallable)
    void CreateInspector(int32 Port);
    
};

