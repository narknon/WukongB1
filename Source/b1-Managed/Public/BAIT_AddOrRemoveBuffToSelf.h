#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_AddOrRemoveBuffToSelf.generated.h"

UCLASS(Blueprintable)
class UBAIT_AddOrRemoveBuffToSelf : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsAdd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffDurationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffLayer;
    
    UBAIT_AddOrRemoveBuffToSelf();

};

