#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_DebugComm.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_DebugComm : public UBUI_Widget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
public:
    UBUI_DebugComm();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void Destruct();
    
};

