#pragma once
#include "CoreMinimal.h"
#include "EWwiseLanguageRequirement.h"
#include "WwiseLanguageCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISEFILEHANDLER_API FWwiseLanguageCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LanguageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LanguageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseLanguageRequirement LanguageRequirement;
    
    FWwiseLanguageCookedData();
};
FORCEINLINE uint32 GetTypeHash(const FWwiseLanguageCookedData) { return 0; }

