#pragma once
#include "CoreMinimal.h"
#include "BaseActorCompTickable.h"
#include "DispLib_DBCSimpleMaterialQualityManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDispLib_DBCSimpleMaterialQualityManager : public UBaseActorCompTickable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InitOver: 1;
    
    UDispLib_DBCSimpleMaterialQualityManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickComponentInCS(float DeltaTime);
    
};

