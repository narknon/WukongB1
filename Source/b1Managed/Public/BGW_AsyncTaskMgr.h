#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_AsyncTaskMgr.generated.h"

class UUGSSdkHttpRequestCallbackListener;

UCLASS(Blueprintable)
class UBGW_AsyncTaskMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUGSSdkHttpRequestCallbackListener*> HttpRequestCallbackListeners;
    
    UBGW_AsyncTaskMgr();

};

