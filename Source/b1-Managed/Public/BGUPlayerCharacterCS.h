#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BGU_CharacterAI.h"
#include "BGUPlayerCharacterCS.generated.h"

class AController;
class UBUS_CharacterModularComp;
class UBUS_ConfigInfoComp;
class UBUS_ExtendConfigComp;
class UBUS_ParkourMoveComp;
class UBUS_SpringArmComponent;
class UCameraComponent;
class UInputComponent;
class USphereComponent;

UCLASS(Blueprintable)
class ABGUPlayerCharacterCS : public ABGU_CharacterAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SpringArmComponent* CameraBoom1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ApproachNotifyComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* PlayerInputComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ParkourMoveComp* ParkourMoveComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ConfigInfoComp* PlayerConfigInfoComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ExtendConfigComp* PlayerExtendConfigComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBUS_CharacterModularComp* CharacterModularComp;
    
public:
    ABGUPlayerCharacterCS(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPossessedCS(AController* NewController);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayerCharacterCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_PlayerStateCS();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupPlayerInputComponentCS(UInputComponent* NewPlayerInputComponent);
    
};

