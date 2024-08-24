#include "GSRichTextBlock.h"

UGSRichTextBlock::UGSRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->ForceCache = true;
    this->UseIndent = true;
    this->DefaultIndentSize = 0.00f;
}

void UGSRichTextBlock::SetUseIndent(bool InUseIndent) {
}

void UGSRichTextBlock::SetDefaultIndentSize(float InDefaultIndentSize) {
}

void UGSRichTextBlock::OnTextPrePaint_Implementation() {
}

void UGSRichTextBlock::NativeCheckText() {
}

void UGSRichTextBlock::MakeContentDirty() {
}

bool UGSRichTextBlock::GetUseIndent() const {
    return false;
}

float UGSRichTextBlock::GetDefaultIndentSize() const {
    return 0.0f;
}

FString UGSRichTextBlock::GetContent() const {
    return TEXT("");
}

void UGSRichTextBlock::ApplyText(FText InText) {
}


