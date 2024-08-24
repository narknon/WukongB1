#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUStoryArea.generated.h"

UCLASS(Blueprintable)
class ABGUStoryArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Pority;
    
    ABGUStoryArea(const FObjectInitializer& ObjectInitializer);

};

