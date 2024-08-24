#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "FindSceneItemWay.h"
#include "BGWDataAsset_TryFindSceneItemConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_TryFindSceneItemConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SceneActorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FindSceneItemWay FindSceneItemWay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedRemoveCurrentCatch: 1;
    
    UBGWDataAsset_TryFindSceneItemConfig();

};

