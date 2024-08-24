#include "JavascriptHttpRequest.h"

UJavascriptHttpRequest::UJavascriptHttpRequest() {
}

void UJavascriptHttpRequest::SetVerb(const FString& Verb) {
}

void UJavascriptHttpRequest::SetURL(const FString& URL) {
}

void UJavascriptHttpRequest::SetHeader(const FString& HeaderName, const FString& HeaderValue) {
}

void UJavascriptHttpRequest::SetContentWithFiles(TArray<FString> FilePaths, const FString& Boundary, const FString& Content) {
}

void UJavascriptHttpRequest::SetContentFromMemory() {
}

void UJavascriptHttpRequest::SetContentAsString(const FString& ContentString) {
}

bool UJavascriptHttpRequest::ProcessRequest() {
    return false;
}

FString UJavascriptHttpRequest::GetVerb() {
    return TEXT("");
}

TEnumAsByte<EJavascriptHttpRequestStatus::Type> UJavascriptHttpRequest::GetStatus() {
    return EJavascriptHttpRequestStatus::NotStarted;
}

int32 UJavascriptHttpRequest::GetResponseCode() {
    return 0;
}

float UJavascriptHttpRequest::GetElapsedTime() {
    return 0.0f;
}

void UJavascriptHttpRequest::GetContentToMemory() {
}

int32 UJavascriptHttpRequest::GetContentLength() {
    return 0;
}

FString UJavascriptHttpRequest::GetContentAsString() {
    return TEXT("");
}

void UJavascriptHttpRequest::CancelRequest() {
}


