#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BUC_DispLibDBC_ScenePhysicalInteractor.h"
#include "BUC_DispLibSceneInteractorData.generated.h"

UCLASS(Blueprintable)
class UBUC_DispLibSceneInteractorData : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_ScenePhysicalInteractor> ScenePhysicalInteractor;
    
    UBUC_DispLibSceneInteractorData();

};

