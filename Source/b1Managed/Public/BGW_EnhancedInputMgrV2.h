#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_EnhancedInputMgrV2.generated.h"

class UBGWDataAsset_CustomizedInputSetting;
class UBGWDataAsset_InputMappingContextConfigV2;
class UInputActionEventReceiver;

UCLASS(Blueprintable)
class UBGW_EnhancedInputMgrV2 : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_InputMappingContextConfigV2* InputMappingContextConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_CustomizedInputSetting* CustomizedInputSetting;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputActionEventReceiver* Receiver;
    
    UBGW_EnhancedInputMgrV2();

};

