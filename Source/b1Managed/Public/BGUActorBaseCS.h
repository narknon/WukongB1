#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BGUSimpleActorBaseCS.h"
#include "BGUActorBaseCS.generated.h"

class UBUS_ActorConfigInfoComp;
class UBUS_GuidComp;
class UBUS_SaveInitDataComp;

UCLASS(Blueprintable)
class ABGUActorBaseCS : public ABGUSimpleActorBaseCS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_GuidComp* GuidComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SaveInitDataComp* SaveInitDataComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ActorConfigInfoComp* ActorConfigInfoComp;
    
public:
    ABGUActorBaseCS(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetActorGuidCS(FString& OutActorGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
};

