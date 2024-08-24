#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "ZBBPreviewConfig.h"
#include "BGUZBBCreatorActorBase.generated.h"

UCLASS(Blueprintable)
class ABGUZBBCreatorActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZBBPreviewConfig> ZBBConfigs;
    
    ABGUZBBCreatorActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
};

