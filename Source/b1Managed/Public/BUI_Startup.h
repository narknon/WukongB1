#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "BUI_Widget.h"
#include "BUI_Startup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_Startup : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_Startup();

    UFUNCTION(BlueprintCallable)
    void OnSetInvisible(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoVSync(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClick_OpenLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoLockHP2(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleAllEnemyAI(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoToggleUI(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelAllEnemyCD(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnCMDTextCommitted(FText Text, ETextCommit::Type CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoLock60FPS(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoInvincible(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoLockStamina(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoLockEnemyHP(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeApplyByDefault(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSelectionChanged(const FString& SelectedItem, ESelectInfo::Type SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDoEnableEnemyBar(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeNeverShowStartupUI(bool bChecked);
    
};

