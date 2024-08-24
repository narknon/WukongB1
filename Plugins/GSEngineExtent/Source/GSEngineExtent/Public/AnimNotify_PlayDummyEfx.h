#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_DummyEfx.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_PlayDummyEfx.generated.h"

class AActor;
class UAnimSequence;

UCLASS(Blueprintable, CollapseCategories)
class GSENGINEEXTENT_API UAnimNotify_PlayDummyEfx : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DummyActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimNotify_DummyEfx> DummyEfxs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLifetime;
    
    UAnimNotify_PlayDummyEfx();

};

