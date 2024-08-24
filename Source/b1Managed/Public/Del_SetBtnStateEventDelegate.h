#pragma once
#include "CoreMinimal.h"
#include "ButtonUIStat.h"
#include "Del_SetBtnStateEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDel_SetBtnStateEvent, ButtonUIStat, BtnStat);

