#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UDispLib_PostPorcessCommonConf.h"
#include "GSDispLib_PostProcessActor.generated.h"

class UDispLib_PPEffectParameters;
class UGSDispLib_PostProcessContext;
class UMaterialInstance;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class AGSDispLib_PostProcessActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSDispLib_PostProcessContext* PPContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUDispLib_PostPorcessCommonConf PPConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsAutoPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDispLib_PPEffectParameters* Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectID;
    
    AGSDispLib_PostProcessActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInit(UGSDispLib_PostProcessContext* Context, FUDispLib_PostPorcessCommonConf Conf);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndBegin(UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndFinish(UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectTick(float DeltaTime, float NewProgress, UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterBegin(UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterFinish(UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAlreadyBegin(UGSDispLib_PostProcessContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAlreadyFinish(UGSDispLib_PostProcessContext* Context);
    
};

