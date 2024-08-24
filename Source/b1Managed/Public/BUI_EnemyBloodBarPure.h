#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_EnemyBloodBarPure.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_EnemyBloodBarPure : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_EnemyBloodBarPure();

    UFUNCTION(BlueprintCallable)
    void DoShowIn(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void DoGSInit(AActor* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void DoShowOut();
    
    UFUNCTION(BlueprintCallable)
    void DoFreeOwner();
    
};

