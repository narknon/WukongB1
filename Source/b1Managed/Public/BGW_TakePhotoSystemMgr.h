#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_TakePhotoSystemMgr.generated.h"

class UBGWDataAsset_TakePhotoSystemConfig;

UCLASS(Blueprintable)
class UBGW_TakePhotoSystemMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TakePhotoSystemConfig* TakePhotoSystemConfig;
    
    UBGW_TakePhotoSystemMgr();

};

