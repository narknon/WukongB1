#pragma once
#include "CoreMinimal.h"
#include "BaseActorCompTickable.h"
#include "BaseEditorTickableActorComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class B1_API UBaseEditorTickableActorComp : public UBaseActorCompTickable {
    GENERATED_BODY()
public:
    UBaseEditorTickableActorComp(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
};

