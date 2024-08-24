#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "GSDispLib_PostProcessDebugger.generated.h"

class AGSDispLib_PostProcessActor;
class UBWS_DispLibImageProcessorConfig;
class UDispLib_PPEffectParameters;
class UDispLib_PostProcessConf;
class UGSDispLib_PostProcessContext;

UCLASS(Blueprintable)
class AGSDispLib_PostProcessDebugger : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDispLib_PostProcessConf* PPConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSDispLib_PostProcessContext* PPContext;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGSDispLib_PostProcessActor> PPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDispLib_PPEffectParameters* PPParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBWS_DispLibImageProcessorConfig* ImageProcessorConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AutoBegin: 1;
    
    AGSDispLib_PostProcessDebugger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopEffect();
    
    UFUNCTION(BlueprintCallable)
    void BeginEffect();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

