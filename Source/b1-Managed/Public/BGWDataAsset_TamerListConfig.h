#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_TamerListConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_TamerListConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TamerList;
    
    UBGWDataAsset_TamerListConfig();

};

