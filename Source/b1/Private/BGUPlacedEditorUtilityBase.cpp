#include "BGUPlacedEditorUtilityBase.h"
#include "Components/SceneComponent.h"

ABGUPlacedEditorUtilityBase::ABGUPlacedEditorUtilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->HelpText = TEXT("Please fill out the help text");
}

void ABGUPlacedEditorUtilityBase::SetLevelViewportCameraInfo(FVector CameraLocation, FRotator CameraRotation) {
}

void ABGUPlacedEditorUtilityBase::SetActorSelectionState(AActor* Actor, bool bShouldBeSelected) {
}

void ABGUPlacedEditorUtilityBase::SelectNothing() {
}


TArray<AActor*> ABGUPlacedEditorUtilityBase::GetSelectionSet() {
    return TArray<AActor*>();
}

bool ABGUPlacedEditorUtilityBase::GetLevelViewportCameraInfo(FVector& CameraLocation, FRotator& CameraRotation) {
    return false;
}

AActor* ABGUPlacedEditorUtilityBase::GetActorReference(const FString& PathToActor) {
    return NULL;
}

void ABGUPlacedEditorUtilityBase::ClearActorSelectionSet() {
}


