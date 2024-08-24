#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BUC_DispLibDBC_ChangeMaterial.h"
#include "BUC_DispLibDBC_CustomEvent.h"
#include "BUC_DispLibDBC_ModifyMaterial.h"
#include "BUC_DispLibDBC_ModifyMaterialParameterCollection.h"
#include "BUC_DispLibDBC_ModifyNiagaraParams.h"
#include "BUC_DispLibDBC_PlayAdvanceNiagara.h"
#include "BUC_DispLibDBC_PlayArtFresnel.h"
#include "BUC_DispLibDBC_PlayAudio.h"
#include "BUC_DispLibDBC_PlayCameraShake.h"
#include "BUC_DispLibDBC_PlayCascade.h"
#include "BUC_DispLibDBC_PlayCustomCameraShake.h"
#include "BUC_DispLibDBC_PlayNiagara.h"
#include "BUC_DispLibDBC_ScenePhysicalInteractor.h"
#include "BUC_DispLibDBC_SpawnSimpleActor.h"
#include "BUC_DispLibDBC_WEFMWind.h"
#include "BUC_DispLibDispBaseConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class UBUC_DispLibDispBaseConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_PlayCascade> PlayCascade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_PlayNiagara> PlayNiagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_PlayAdvanceNiagara> PlayAdvanceNiagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_PlayArtFresnel> PlayArtFresnel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_PlayCameraShake> PlayCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_PlayCustomCameraShake> PlayCustomCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_PlayAudio> PlayAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_SpawnSimpleActor> SpawnSimpleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_WEFMWind> WEFMWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_ScenePhysicalInteractor> ScenePhysicalInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_ChangeMaterial> ChangeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_ModifyMaterial> ModifyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_ModifyNiagaraParams> ModifyNiagaraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_ModifyMaterialParameterCollection> ModifyMPCParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBUC_DispLibDBC_CustomEvent> CustomEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MetaString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayDestroyTime;
    
    UBUC_DispLibDispBaseConfigDataAsset();

};

