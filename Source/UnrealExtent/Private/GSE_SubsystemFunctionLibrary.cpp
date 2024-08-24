#include "GSE_SubsystemFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UGSE_SubsystemFunctionLibrary::UGSE_SubsystemFunctionLibrary() {
}

UWorldSubsystem* UGSE_SubsystemFunctionLibrary::GetWorldSubsystem(UObject* ContextObject, TSubclassOf<UWorldSubsystem> Class) {
    return NULL;
}

ULocalPlayerSubsystem* UGSE_SubsystemFunctionLibrary::GetLocalPlayerSubSystemFromPlayerController(APlayerController* PlayerController, TSubclassOf<ULocalPlayerSubsystem> Class) {
    return NULL;
}

ULocalPlayerSubsystem* UGSE_SubsystemFunctionLibrary::GetLocalPlayerSubsystem(UObject* ContextObject, TSubclassOf<ULocalPlayerSubsystem> Class) {
    return NULL;
}

UGameInstanceSubsystem* UGSE_SubsystemFunctionLibrary::GetGameInstanceSubsystem(UObject* ContextObject, TSubclassOf<UGameInstanceSubsystem> Class) {
    return NULL;
}

UEngineSubsystem* UGSE_SubsystemFunctionLibrary::GetEngineSubsystem(TSubclassOf<UEngineSubsystem> Class) {
    return NULL;
}


