#pragma once
#include "CoreMinimal.h"
#include "BGWPlayerController.h"
#include "BGW_PlayerController_U3.generated.h"

class UBGW_PlayerInput_U3;

UCLASS(Blueprintable)
class ABGW_PlayerController_U3 : public ABGWPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGW_PlayerInput_U3* InputHandler;
    
    ABGW_PlayerController_U3(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAxisMoveForward(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void OnAxisMoveSideways(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void OnAxisMoveForwardGamepad(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void OnAxisMoveSidewaysGamepad(float AxisValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessPlayerInputCS(float DeltaTime, bool bGamePaused);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupInputComponentCS();
    
};

