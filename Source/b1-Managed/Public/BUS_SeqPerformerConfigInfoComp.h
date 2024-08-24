#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BoneUseForDispMap.h"
#include "BUS_SeqPerformerConfigInfoComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SeqPerformerConfigInfoComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBoneUseForDispMap> DispInteractBoneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseCustomBodyPartCollision: 1;
    
    UBUS_SeqPerformerConfigInfoComp(const FObjectInitializer& ObjectInitializer);

};

