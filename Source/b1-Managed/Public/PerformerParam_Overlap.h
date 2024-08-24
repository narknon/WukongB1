#pragma once
#include "CoreMinimal.h"
#include "PerformerParamBase.h"
#include "PerformerParam_Overlap.generated.h"

class ABGUOverlapArea;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerParam_Overlap : public UPerformerParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ABGUOverlapArea> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorGuid;
    
    UPerformerParam_Overlap();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
};

