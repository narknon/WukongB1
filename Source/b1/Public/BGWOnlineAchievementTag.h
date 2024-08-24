#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineAchievementTag.generated.h"

USTRUCT(BlueprintType)
struct FBGWOnlineAchievementTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Progress;
    
    B1_API FBGWOnlineAchievementTag();
};

