#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "BGWOnWorldCleanupDelegate.h"
#include "BGWWorldSettings.generated.h"

UCLASS(Blueprintable)
class B1_API ABGWWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBGWOnWorldCleanup FBGWOnWorldCleanup;
    
    ABGWWorldSettings(const FObjectInitializer& ObjectInitializer);

};

