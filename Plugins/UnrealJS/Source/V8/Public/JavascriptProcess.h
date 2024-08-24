#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptProcess.generated.h"

class UJavascriptProcess;

UCLASS(Blueprintable)
class V8_API UJavascriptProcess : public UObject {
    GENERATED_BODY()
public:
    UJavascriptProcess();

    UFUNCTION(BlueprintCallable)
    bool WriteToPipe(const FString& Message, FString& OutWritten);
    
    UFUNCTION(BlueprintCallable)
    void Wait();
    
    UFUNCTION(BlueprintCallable)
    void Terminate(bool KillTree);
    
    UFUNCTION(BlueprintCallable)
    static void Sleep(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void SimulateKeypress(int32 KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnvironmentVar(const FString& VarName, const FString& VarValue);
    
    UFUNCTION(BlueprintCallable)
    FString ReadFromPipe();
    
    UFUNCTION(BlueprintCallable)
    bool ReadArrayFromPipe(TArray<uint8>& Array);
    
    UFUNCTION(BlueprintCallable)
    static UJavascriptProcess* Open_PID(int32 ProcessId);
    
    UFUNCTION(BlueprintCallable)
    static UJavascriptProcess* Open(const FString& ProcName);
    
    UFUNCTION(BlueprintCallable)
    static void LaunchURL(const FString& URL, const FString& Parms, FString& Error);
    
    UFUNCTION(BlueprintCallable)
    bool IsRunning();
    
    UFUNCTION(BlueprintCallable)
    static bool IsApplicationRunning_PID(int32 ProcessId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsApplicationRunning(const FString& ProcName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetString(const FString& Key, bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    bool GetReturnCode(int32& ReturnCode);
    
    UFUNCTION(BlueprintCallable)
    static FString GetEnvironmentVar(const FString& VarName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentProcessId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetApplicationName(int32 ProcessId);
    
    UFUNCTION(BlueprintCallable)
    static UJavascriptProcess* Create(const FString& URL, const FString& Parms, bool bLaunchDetached, bool bLaunchHidden, bool bLaunchReallyHidden, int32 PriorityModifier, const FString& OptionalWorkingDirectory, bool bUsePipe);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    static bool CanLaunchURL(const FString& URL);
    
};

