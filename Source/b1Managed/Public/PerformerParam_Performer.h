#pragma once
#include "CoreMinimal.h"
#include "PerformerParamBase.h"
#include "PerformerParam_Performer.generated.h"

class ABGUPerformerActorCS;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerParam_Performer : public UPerformerParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ABGUPerformerActorCS> Performer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PerformerGuid;
    
    UPerformerParam_Performer();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
};

