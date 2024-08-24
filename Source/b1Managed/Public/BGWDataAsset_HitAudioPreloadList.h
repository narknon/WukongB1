#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_HitAudioPreloadList.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBGWDataAsset_HitAudioPreloadList : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> ObjMapping;
    
    UBGWDataAsset_HitAudioPreloadList();

    UFUNCTION(BlueprintCallable)
    void UpdateConfig();
    
};

