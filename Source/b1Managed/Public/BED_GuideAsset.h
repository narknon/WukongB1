#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeAssetBase.h"
#include "BED_GuideAsset.generated.h"

UCLASS(Blueprintable)
class UBED_GuideAsset : public UBED_CalliopeAssetBase {
    GENERATED_BODY()
public:
    UBED_GuideAsset();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECalliopeViewType GetViewType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetStartNodeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetRerouteNodeClass() const;
    
};

