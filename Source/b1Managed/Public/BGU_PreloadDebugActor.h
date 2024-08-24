#pragma once
#include "CoreMinimal.h"
#include "BGUActorBase.h"
#include "SkillTypeInfo.h"
#include "BGU_PreloadDebugActor.generated.h"

UCLASS(Blueprintable)
class ABGU_PreloadDebugActor : public ABGUActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Enablepreload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableHitSceneItemPerformPreload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableUnitTransPreloadPreload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> WhiteListPreloadTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSkillTypeInfo> WhiteListPreloadTypeInfoMap;
    
    ABGU_PreloadDebugActor(const FObjectInitializer& ObjectInitializer);

};

