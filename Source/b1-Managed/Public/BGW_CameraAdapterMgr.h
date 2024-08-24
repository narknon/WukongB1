#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_CameraAdapterMgr.generated.h"

class UGSViewPortHelper;

UCLASS(Blueprintable)
class UBGW_CameraAdapterMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSViewPortHelper* GSViewPortHelper;
    
    UBGW_CameraAdapterMgr();

    UFUNCTION(BlueprintCallable)
    void OnViewPortResized(int32 NewWidth, int32 NewHeight);
    
};

