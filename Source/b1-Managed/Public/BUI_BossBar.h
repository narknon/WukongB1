#pragma once
#include "CoreMinimal.h"
#include "BUI_EnemyBloodBarPure.h"
#include "BUI_BossBar.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_BossBar : public UBUI_EnemyBloodBarPure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerCharacter;
    
    UBUI_BossBar();

    UFUNCTION(BlueprintCallable)
    void GSInit(AActor* InOwnerCharacter);
    
};

