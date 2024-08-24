#pragma once
#include "CoreMinimal.h"
#include "CalliopeGuid.h"
#include "GsSmartParamObject.h"
#include "Components/ActorComponent.h"
#include "EditorOnlyCompBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class B1_API UEditorOnlyCompBase : public UActorComponent, public IGsSmartParamObject {
    GENERATED_BODY()
public:
    UEditorOnlyCompBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreSaveCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPossibleParamsCS(const FString& ParentPropertyName, const FString& PropertyName, TArray<FCalliopeGuid>& OutParamArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetParamDisplayNameCS(const FString& PropertyName, const FCalliopeGuid& ConfigGuid);
    

    // Fix for true pure virtual functions not being implemented
};

