#include "BAN_DispLibSimpleRibbonTrailsArray.h"

UBAN_DispLibSimpleRibbonTrailsArray::UBAN_DispLibSimpleRibbonTrailsArray() {
    this->EditorActive = false;
    this->Duration = 0.00f;
    this->DelayTimeAfterStop = 0.00f;
    this->ignoreRootBoneScale = false;
    this->TranslucentSortPriority = 0;
}

TArray<FSoftObjectPath> UBAN_DispLibSimpleRibbonTrailsArray::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}


