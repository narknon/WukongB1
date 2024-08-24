#pragma once
#include "CoreMinimal.h"
#include "SceneComponentTickable.h"
#include "BGUStaminaBarUIComp.generated.h"

class APlayerCameraManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUStaminaBarUIComp : public USceneComponentTickable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawDebug: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* PlayerCameraManager;
    
    UBGUStaminaBarUIComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGSEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayGS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickComponentGS(float DeltaTime);
    
};

