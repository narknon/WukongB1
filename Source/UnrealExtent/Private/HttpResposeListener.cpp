#include "HttpResposeListener.h"

UHttpResposeListener::UHttpResposeListener() {
}

void UHttpResposeListener::OnRequestProgress_Implementation(int32 sentBytes, int32 lReceivedBytes, int32 lTotalBytes) {
}

void UHttpResposeListener::OnReponseComplete_Implementation(bool bSuccess, int32 HttpCode, const TArray<uint8>& Content) {
}

bool UHttpResposeListener::IsNeedProgress_Implementation() const {
    return false;
}


