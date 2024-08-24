#include "MyTestHttpListener.h"

UMyTestHttpListener::UMyTestHttpListener() {
}

bool UMyTestHttpListener::IsNeedProgress_Implementation() const {
    return false;
}

void UMyTestHttpListener::OnReponseComplete_Implementation(bool bSuccess, int32 HttpCode, const TArray<uint8>& Content) {
}

void UMyTestHttpListener::OnRequestProgress_Implementation(int32 sentBytes, int32 lReceivedBytes, int32 lTotalBytes) {
}


