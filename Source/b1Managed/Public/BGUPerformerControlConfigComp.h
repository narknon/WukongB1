#pragma once
#include "CoreMinimal.h"
#include "CalliopeGuid.h"
#include "ActorEditCompBase.h"
#include "BGUPerformerControlConfigComp.generated.h"

class UPerformerParamBase;
class UPerformerPhase;

UCLASS(Blueprintable, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUPerformerControlConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPerformerPhase*> Phases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPerformerParamBase*> Params;
    
    UBGUPerformerControlConfigComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPossibleParamsCS(const FString& ParentPropertyName, const FString& PropertyName, TArray<FCalliopeGuid>& OutParamArray);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetParamDisplayNameCS(const FString& PropertyName, const FCalliopeGuid& ConfigGuid);
    
};

