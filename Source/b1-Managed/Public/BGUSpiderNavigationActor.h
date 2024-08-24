#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "GsSpiderNavPointInfo.h"
#include "BGUSpiderNavigationActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ABGUSpiderNavigationActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsSpiderNavPointInfo> NavPoints;
    
    ABGUSpiderNavigationActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowSpiderNavPoint();
    
    UFUNCTION(BlueprintCallable)
    void HideSpiderNavPoint();
    
    UFUNCTION(BlueprintCallable)
    void RecordSpiderNavPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
};

