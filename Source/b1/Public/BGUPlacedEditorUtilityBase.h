#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BGUPlacedEditorUtilityBase.generated.h"

class UWorld;

UCLASS(Blueprintable)
class B1_API ABGUPlacedEditorUtilityBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HelpText;
    
    ABGUPlacedEditorUtilityBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLevelViewportCameraInfo(FVector CameraLocation, FRotator CameraRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetActorSelectionState(AActor* Actor, bool bShouldBeSelected);
    
    UFUNCTION(BlueprintCallable)
    void SelectNothing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldCleanup(UWorld* World, bool SessionEnded, bool CleanupResources);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSelectionSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLevelViewportCameraInfo(FVector& CameraLocation, FRotator& CameraRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorReference(const FString& PathToActor);
    
    UFUNCTION(BlueprintCallable)
    void ClearActorSelectionSet();
    
};

