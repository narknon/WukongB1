#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "DefaultCamArmMode.h"
#include "BUI_GMCameraPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GMCameraPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DefaultCamArmMode UnlockCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DefaultCamArmMode LockCameraMode;
    
    UBUI_GMCameraPanel();

    UFUNCTION(BlueprintCallable)
    void CheckBox_LockFar_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_LockMid_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_UnlockMid_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_UnlockFar_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_LockClose_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_UnlockFree_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_UnlockClose_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_LockDefault_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_CameraGroup02_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_CameraGroup03_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_UnlockDefault_OnCheckStateChanged(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void CheckBox_CameraGroup01_OnCheckStateChanged(bool bChecked);
    
};

