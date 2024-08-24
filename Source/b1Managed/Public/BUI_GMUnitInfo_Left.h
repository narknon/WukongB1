#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "Templates/SubclassOf.h"
#include "BUI_GMUnitInfo_Left.generated.h"

class ABGUCharacter;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GMUnitInfo_Left : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InfoTemp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUCharacter* PlayerCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUCharacter* Target;
    
    UBUI_GMUnitInfo_Left();

};

