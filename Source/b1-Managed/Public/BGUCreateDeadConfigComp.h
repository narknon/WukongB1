#pragma once
#include "CoreMinimal.h"
#include "BaseActorComp.h"
#include "BGUCreateDeadConfigComp.generated.h"

class UBGWDataAsset_UnitDeathDispConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUCreateDeadConfigComp : public UBaseActorComp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_UnitDeathDispConfig* SmallSizeUDDConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_UnitDeathDispConfig* MediumSizeUDDConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_UnitDeathDispConfig* MediumBigSizeUDDConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_UnitDeathDispConfig* BigSizeUDDConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_UnitDeathDispConfig* HugeSizeUDDConfig;
    
    UBGUCreateDeadConfigComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
};

