#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Engine/EngineTypes.h"
#include "SocketName.h"
#include "AnimNotifyState_GSTrailWithArray.generated.h"

class UAnimSequenceBase;
class UParticleSystem;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class B1_API UAnimNotifyState_GSTrailWithArray : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSocketName> SocketNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETrailWidthMode> WidthScaleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidthScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRecycleSpawnedSystems: 1;
    
    UAnimNotifyState_GSTrailWithArray();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UParticleSystem* OverridePSTemplate(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

