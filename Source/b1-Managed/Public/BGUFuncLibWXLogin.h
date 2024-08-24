#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFuncLibWXLogin.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBGUFuncLibWXLogin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibWXLogin();

    UFUNCTION(BlueprintCallable)
    static FString GetIpList(UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> LoadUserInfo(UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable)
    static int32 SaveUserInfo(UObject* WorldCtx, const FString& Val);
    
    UFUNCTION(BlueprintCallable)
    static FString ReadLoginCookie(UObject* WorldCtx);
    
    UFUNCTION(BlueprintCallable)
    static int32 WriteLoginCookie(UObject* WorldCtx, const FString& Val);
    
    UFUNCTION(BlueprintCallable)
    static void QywxLoginSuccess(UObject* WorldCtx, TArray<FString> Params);
    
};

