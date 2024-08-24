#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/PlayerController.h"
#include "BGWPlayerController.generated.h"

UCLASS(Blueprintable)
class B1_API ABGWPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ABGWPlayerController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupInputComponentCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessPlayerInputCS(const float DeltaTime, const bool bGamePaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitCS();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetViewportClientMousePosition(FVector2D& MousePosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerInputTouchesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerInputTouch(int32 Idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BGWGetHitResultAtScreenPosition(const FVector2D ScreenPosition, const TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable)
    bool BGWDeprojectScreenToWorld(const FVector2D& ScreenPosition, FVector& RayOrigin, FVector& RayDirection);
    
};

