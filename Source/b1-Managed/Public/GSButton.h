#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Components/Button.h"
#include "GSButton.generated.h"

class UAkAudioEvent;
class UWidget;

UCLASS(Blueprintable)
class UGSButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* PressedMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HoveredWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* FocusedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* RootCon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ClickAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FocusAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HoveredAudioEvent;
    
    UGSButton();

    UFUNCTION(BlueprintCallable)
    void GSOnPressed();
    
    UFUNCTION(BlueprintCallable)
    void GSOnClicked();
    
    UFUNCTION(BlueprintCallable)
    void GSOnHovered();
    
    UFUNCTION(BlueprintCallable)
    void GSOnFocused(FFocusEvent FocusEvent);
    
    UFUNCTION(BlueprintCallable)
    void GSOnReleased();
    
    UFUNCTION(BlueprintCallable)
    void GSOnUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void GSOnConstruct();
    
    UFUNCTION(BlueprintCallable)
    void GSOnLostFocused(FFocusEvent FocusEvent);
    
};

