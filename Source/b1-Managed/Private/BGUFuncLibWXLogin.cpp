#include "BGUFuncLibWXLogin.h"

UBGUFuncLibWXLogin::UBGUFuncLibWXLogin() {
}

FString UBGUFuncLibWXLogin::GetIpList(UObject* WorldCtx) {
    return TEXT("");
}

TArray<FString> UBGUFuncLibWXLogin::LoadUserInfo(UObject* WorldCtx) {
    return TArray<FString>();
}

int32 UBGUFuncLibWXLogin::SaveUserInfo(UObject* WorldCtx, const FString& Val) {
    return 0;
}

FString UBGUFuncLibWXLogin::ReadLoginCookie(UObject* WorldCtx) {
    return TEXT("");
}

int32 UBGUFuncLibWXLogin::WriteLoginCookie(UObject* WorldCtx, const FString& Val) {
    return 0;
}

void UBGUFuncLibWXLogin::QywxLoginSuccess(UObject* WorldCtx, TArray<FString> Params) {
}


