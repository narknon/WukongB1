#include "JavascriptGameViewport.h"
#include "Templates/SubclassOf.h"

UJavascriptGameViewport::UJavascriptGameViewport() {
}

AActor* UJavascriptGameViewport::Spawn(TSubclassOf<AActor> ActorClass) {
    return NULL;
}

void UJavascriptGameViewport::SetViewRotation(FRotator Rotation) {
}

void UJavascriptGameViewport::SetViewLocation(FVector Location) {
}

FRotator UJavascriptGameViewport::GetViewRotation() const {
    return FRotator{};
}

UWorld* UJavascriptGameViewport::GetViewportWorld() const {
    return NULL;
}

FVector UJavascriptGameViewport::GetViewLocation() const {
    return FVector{};
}


