#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BGUTamerBase.h"
#include "TamerHighLODRootMeshConfig.h"
#include "BUTamerActor.generated.h"

class ABGUCharacterCS;
class ABUTamerActor;
class UBGUDebugCircleComponent;
class UBGUDebugSectorComponent;
class UBUS_CharacterModularComp;
class UBUS_ConfigInfoComp;
class UBUS_ExtendConfigComp;
class UBUS_GuidComp;
class UClass;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABUTamerActor : public ABGUTamerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ConfigInfoComp* ConfigInfoComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_GuidComp* GuidComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUDebugSectorComponent* InteractRangeDebugComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUDebugSectorComponent* InteractRangeDebugComp2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUDebugSectorComponent* SightPerceptionDebugSector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUDebugCircleComponent* HearingPerceptionDebugCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WakeUpRangeCylinder;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ExtendConfigComp* ExtendConfigComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBUS_CharacterModularComp* CharacterModularComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABGUCharacterCS> MonsterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MonsterClassObj;
    
public:
    ABUTamerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABGUCharacterCS* GetMonster();
    
    UFUNCTION(BlueprintCallable)
    void CopyPropertiesFromUnit();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
public:
    UFUNCTION(BlueprintCallable)
    void CopyPropertiesFromUnitActor(ABGUCharacterCS* Unit);
    
    UFUNCTION(BlueprintCallable)
    void CopyPropertiesFromTamerActor(ABUTamerActor* TamerActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetActorGuidCS(FString& OutActorGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetHighLODMeshConfig(FTamerHighLODRootMeshConfig& OutMeshConfig);
    
};

