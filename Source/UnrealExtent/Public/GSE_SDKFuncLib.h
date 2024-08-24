#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBGWNATType.h"
#include "GSE_SDKFuncLib.generated.h"

class UHttpResposeListener;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_SDKFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_SDKFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool TestCallAndroidFunc(const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static bool StartHttpRawDataRequest(const FString& URL, const FString& Method, TMap<FString, FString> ExHeaders, const TArray<uint8> PostRawData, UHttpResposeListener* Listener, int32 RequestTimeout);
    
    UFUNCTION(BlueprintCallable)
    static bool StartHttpBase64DataRequest(const FString& URL, const FString& Method, TMap<FString, FString> ExHeaders, const FString& Base64PostData, UHttpResposeListener* Listener, int32 RequestTimeout);
    
    UFUNCTION(BlueprintCallable)
    static void SetCrashReportClientEnable(int32 bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBuglyUserMap(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetAppIsAutoTestingMode(int32 bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SentryCrashReporterSetUser(const FString& UserKey, const FString& UserValue);
    
    UFUNCTION(BlueprintCallable)
    static void SentryCrashReporterSetTag(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SentryCrashReporterSetRoot(const FString& RootKey, const FString& RootValue);
    
    UFUNCTION(BlueprintCallable)
    static void SentryCrashReporterSetContext(const FString& Key, TMap<FString, FString> ContextValues);
    
    UFUNCTION(BlueprintCallable)
    static void PrintCachedEntitlements();
    
    UFUNCTION(BlueprintCallable)
    static bool PostExceptionSample(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static bool PostException(int32 Type, const FString& Name, const FString& Message, const FString& StackTrace);
    
    UFUNCTION(BlueprintCallable)
    static int32 NonGameThreadStartHttpRawDataRequestWithBlockMode(const FString& URL, const FString& Method, TMap<FString, FString> ExHeaders, const TArray<uint8> PostRawData, int32 RequestTimeout, TMap<FString, FString>& OutResponse);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPureVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCleanVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool HttpPostFileList(const FString& PostUrl, TMap<FString, FString> ExHeaders, const TArray<FString>& FilePathList, UHttpResposeListener* Listener);
    
    UFUNCTION(BlueprintCallable)
    static bool HttpPostFileContent(const FString& PostUrl, TMap<FString, FString> ExHeaders, const FString& Filename, const TArray<uint8> FileContentData, UHttpResposeListener* Listener);
    
    UFUNCTION(BlueprintCallable)
    static bool HttpPostFile(const FString& PostUrl, TMap<FString, FString> ExHeaders, const FString& FilePath, UHttpResposeListener* Listener);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPS5UserDefinedParam(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FString GetPS5UserAccountRegionCode();
    
    UFUNCTION(BlueprintCallable)
    static EBGWNATType GetNatInfo();
    
    UFUNCTION(BlueprintCallable)
    static FString GetIOSDocumentPath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetIOSBundlePath();
    
    UFUNCTION(BlueprintCallable)
    static void GetGameRunEnvContext(TMap<FString, FString>& OutContext);
    
    UFUNCTION(BlueprintCallable)
    static FString FCommandLine_Get();
    
    UFUNCTION(BlueprintCallable)
    static void FCommandLine_AddArg(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    static bool AddCrashUserData(const FString& Key, const FString& Value);
    
};

