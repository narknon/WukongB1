#include "ChartWebBrowser.h"

UChartWebBrowser::UChartWebBrowser() {
    this->InitialURL = TEXT("google.com");
    this->bSupportsTransparency = false;
    this->bSupportIEM = false;
}

void UChartWebBrowser::LoadURL(const FString& NewURL) {
}

void UChartWebBrowser::LoadString(const FString& Contents, const FString& DummyURL) {
}

FString UChartWebBrowser::GetUrl() const {
    return TEXT("");
}

FText UChartWebBrowser::GetTitleText() const {
    return FText::GetEmpty();
}

void UChartWebBrowser::ExecuteJavascript(const FString& ScriptText) {
}


