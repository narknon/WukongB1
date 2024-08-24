#include "AkAudioEvent.h"

UAkAudioEvent::UAkAudioEvent() {
    this->MaxAttenuationRadius = 0.00f;
    this->IsInfinite = false;
    this->MinimumDuration = 0.00f;
    this->MaximumDuration = 0.00f;
    this->RequiredBank = NULL;
}

int32 UAkAudioEvent::PostOnGameObjectAndWait(UAkGameObject* GameObject, const FLatentActionInfo LatentActionInfo) {
    return 0;
}

int32 UAkAudioEvent::PostOnGameObject(UAkGameObject* GameObject, const FOnAkPostEventCallback& Delegate, const int32 CallbackMask) {
    return 0;
}

int32 UAkAudioEvent::PostOnComponentAndWait(UAkComponent* Component, const bool bStopWhenAttachedObjectDestroyed, const FLatentActionInfo LatentActionInfo) {
    return 0;
}

int32 UAkAudioEvent::PostOnComponent(UAkComponent* Component, const FOnAkPostEventCallback& Delegate, const int32 CallbackMask, const bool bStopWhenAttachedObjectDestroyed) {
    return 0;
}

int32 UAkAudioEvent::PostOnActorAndWait(const AActor* Actor, const bool bStopWhenAttachedObjectDestroyed, const FLatentActionInfo LatentActionInfo) {
    return 0;
}

int32 UAkAudioEvent::PostOnActor(const AActor* Actor, const FOnAkPostEventCallback& Delegate, const int32 CallbackMask, const bool bStopWhenAttachedObjectDestroyed) {
    return 0;
}

int32 UAkAudioEvent::PostAtLocation(const FVector Location, const FRotator Orientation, const FOnAkPostEventCallback& Callback, const int32 CallbackMask, const UObject* WorldContextObject) {
    return 0;
}

int32 UAkAudioEvent::ExecuteAction(const AkActionOnEventType ActionType, const AActor* Actor, const int32 PlayingID, const int32 TransitionDuration, const EAkCurveInterpolation FadeCurve) {
    return 0;
}


