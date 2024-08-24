#include "BAN_GSSetCustomDepthStencil.h"

UBAN_GSSetCustomDepthStencil::UBAN_GSSetCustomDepthStencil() {
    this->RenderCustomDepth = true;
    this->CustomDepthStencilValue = 0;
}

void UBAN_GSSetCustomDepthStencil::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


