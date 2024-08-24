#include "GSTextBlock.h"

UGSTextBlock::UGSTextBlock() {
    this->ForceCache = true;
    this->UseIndent = true;
    this->DefaultIndentSize = 0.00f;
}

void UGSTextBlock::SetUseIndent(bool InUseIndent) {
}

void UGSTextBlock::SetDefaultIndentSize(float InDefaultIndentSize) {
}

void UGSTextBlock::OnTextPrePaint_Implementation() {
}

void UGSTextBlock::NativeCheckText() {
}

void UGSTextBlock::MakeContentDirty() {
}

bool UGSTextBlock::GetUseIndent() const {
    return false;
}

float UGSTextBlock::GetDefaultIndentSize() const {
    return 0.0f;
}

FString UGSTextBlock::GetContent() const {
    return TEXT("");
}

void UGSTextBlock::ApplyText(FText InText) {
}


