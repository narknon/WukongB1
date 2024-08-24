#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "Templates/SubclassOf.h"
#include "BUI_GMUI.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GMUI : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ConfigTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> BtnTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CheckTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SliderTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EditableTemp;
    
    UBUI_GMUI();

    UFUNCTION(BlueprintCallable)
    void OnSetInvisible(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickDoFullHP();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDoFullMP();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDoLockHP();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoLockHP2(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoToggleUI(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleAllEnemyAI(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelAllEnemyCD(bool bCancel);
    
    UFUNCTION(BlueprintCallable)
    void OnClickDoSetConfigs();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDoInvincible();
    
    UFUNCTION(BlueprintCallable)
    void OnClickKillAllEnemy();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDoAddBuff100();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoInvincible(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoLockStamina(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoLockEnemyHP(bool IsChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClick999BloodBottle();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDoRemoveAllBuff();
    
    UFUNCTION(BlueprintCallable)
    void OnClickFullBloodBottle();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoEnableEnemyBar(bool IsChecked);
    
};

