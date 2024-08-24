#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BGUPlacedEditorUtilityBase.h"
#include "DispLib_EditorDBCPreviewToolActor.generated.h"

class UWorld;

UCLASS(Blueprintable)
class ADispLib_EditorDBCPreviewToolActor : public ABGUPlacedEditorUtilityBase {
    GENERATED_BODY()
public:
    ADispLib_EditorDBCPreviewToolActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWorldCleanup(UWorld* World, bool SessionEnded, bool CleanupResources);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDestroyed();
    
};

