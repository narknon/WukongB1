#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "Templates/SubclassOf.h"
#include "BUI_UnitDebugInfo.generated.h"

class ABGUCharacterCS;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_UnitDebugInfo : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InfoTemp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUCharacterCS* UnitSelf;
    
public:
    UBUI_UnitDebugInfo();

    UFUNCTION(BlueprintCallable)
    void OnRegistOwner(ABGUCharacterCS* UnitActor);
    
};

