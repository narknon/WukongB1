#pragma once
#include "CoreMinimal.h"
#include "ConstructionSystemTool.h"
#include "ConstructionSystemRemoveTool.generated.h"

class APrefabActor;

UCLASS(Blueprintable)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemRemoveTool : public UConstructionSystemTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APrefabActor> FocusedActor;
    
public:
    UConstructionSystemRemoveTool();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleInput_RemoveAtCursor();
    
};

