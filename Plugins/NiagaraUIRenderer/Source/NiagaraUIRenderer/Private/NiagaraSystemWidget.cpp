#include "NiagaraSystemWidget.h"

UNiagaraSystemWidget::UNiagaraSystemWidget() {
    this->bIsVolatile = true;
    this->NiagaraSystemReference = NULL;
    this->AutoActivate = true;
    this->TickWhenPaused = false;
    this->FakeDepthScale = false;
    this->FakeDepthScaleDistance = 1000.00f;
    this->GSIsNeedWidgetSizeParam = false;
    this->NiagaraComponent = NULL;
}

void UNiagaraSystemWidget::UpdateTickWhenPaused(bool NewTickWhenPaused) {
}

void UNiagaraSystemWidget::UpdateNiagaraSystemReference(UNiagaraSystem* NewNiagaraSystem) {
}

void UNiagaraSystemWidget::SetGSVec4B(FVector4 InVec4) {
}

void UNiagaraSystemWidget::SetGSVec4A(FVector4 InVec4) {
}

void UNiagaraSystemWidget::SetGSColorB(FLinearColor InColor) {
}

void UNiagaraSystemWidget::SetGSColorA(FLinearColor InColor) {
}

void UNiagaraSystemWidget::ReInitSystem() {
}

void UNiagaraSystemWidget::GSStopFX(bool IsReset) {
}

void UNiagaraSystemWidget::GSSetNiagaraValVector4(const FString& InName, FVector4 InVal) {
}

void UNiagaraSystemWidget::GSSetNiagaraValVector2(const FString& InName, FVector2D InVal) {
}

void UNiagaraSystemWidget::GSSetNiagaraValVector(const FString& InName, FVector InVal) {
}

void UNiagaraSystemWidget::GSSetNiagaraValLinearColor(const FString& InName, FLinearColor InVal) {
}

void UNiagaraSystemWidget::GSSetNiagaraValInt(const FString& InName, int32 InVal) {
}

void UNiagaraSystemWidget::GSSetNiagaraValFloat(const FString& InName, float InVal) {
}

void UNiagaraSystemWidget::GSSetNiagaraValBool(const FString& InName, bool InVal) {
}

void UNiagaraSystemWidget::GSResumeFX() {
}

void UNiagaraSystemWidget::GSPlayFX(bool IsReset) {
}

void UNiagaraSystemWidget::GSPauseFX() {
}

void UNiagaraSystemWidget::GSDestoryFX() {
}

void UNiagaraSystemWidget::GSActiveFX(bool IsActive, bool IsReset) {
}

UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent() {
    return NULL;
}

void UNiagaraSystemWidget::DeactivateSystem() {
}

void UNiagaraSystemWidget::ActivateSystem(bool Reset) {
}


