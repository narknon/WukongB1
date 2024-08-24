#pragma once
#include "CoreMinimal.h"
#include "BGUCharacterCS.h"
#include "BGU_CharacterAI.generated.h"

class UBUS_ConfigInfoComp;
class UBUS_ExtendConfigComp;
class UBUS_GuidComp;

UCLASS(Blueprintable)
class ABGU_CharacterAI : public ABGUCharacterCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_GuidComp* GuidComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ConfigInfoComp* ConfigInfoComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ExtendConfigComp* ExtendConfigComp;
    
    ABGU_CharacterAI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_PlayerStateCS();
    
};

