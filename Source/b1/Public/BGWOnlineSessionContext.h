#pragma once
#include "CoreMinimal.h"
#include "BGWSessionSearchResult.h"
#include "BGWOnlineSessionContext.generated.h"

USTRUCT(BlueprintType)
struct FBGWOnlineSessionContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBGWSessionSearchResult> SearchResults;
    
    B1_API FBGWOnlineSessionContext();
};

