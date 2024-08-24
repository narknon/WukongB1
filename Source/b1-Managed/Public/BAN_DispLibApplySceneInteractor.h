#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BUC_DispLibDBC_ScenePhysicalInteractor.h"
#include "BAN_DispLibApplySceneInteractor.generated.h"

class UBUC_DispLibSceneInteractorData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_DispLibApplySceneInteractor : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBUC_DispLibSceneInteractorData* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUC_DispLibDBC_ScenePhysicalInteractor ConfigInfo;
    
    UBAN_DispLibApplySceneInteractor();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

