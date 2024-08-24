#include "JavascriptTextModel.h"

UJavascriptTextModel::UJavascriptTextModel() {
}

void UJavascriptTextModel::SetString(const FString& String) {
}

FString UJavascriptTextModel::GetString() {
    return TEXT("");
}

FJavascriptSlateTextRun UJavascriptTextModel::CreateRun(const FTextBlockStyle& MessageTextStyle, int32 BeginIndex, int32 EndIndex) {
    return FJavascriptSlateTextRun{};
}


