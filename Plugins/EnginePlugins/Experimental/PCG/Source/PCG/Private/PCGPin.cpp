#include "PCGPin.h"

UPCGPin::UPCGPin() {
    this->Node = NULL;
}

void UPCGPin::SetToolTip(const FText& InTooltip) {
}

FText UPCGPin::GetTooltip() const {
    return FText::GetEmpty();
}


