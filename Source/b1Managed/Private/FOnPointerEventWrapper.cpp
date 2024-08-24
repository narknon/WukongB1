#include "FOnPointerEventWrapper.h"

UFOnPointerEventWrapper::UFOnPointerEventWrapper() {
}

FEventReply UFOnPointerEventWrapper::Callback(FGeometry Geometry, FPointerEvent PointerEvent) {
    return FEventReply{};
}


