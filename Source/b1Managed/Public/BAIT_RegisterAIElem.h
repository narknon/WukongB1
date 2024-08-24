#pragma once
#include "CoreMinimal.h"
#include "EAIElemType.h"
#include "BAIT_Base.h"
#include "BAIT_RegisterAIElem.generated.h"

UCLASS(Blueprintable)
class UBAIT_RegisterAIElem : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIElemType ElemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UBAIT_RegisterAIElem();

};

