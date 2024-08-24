#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "ResourceID_PreloadOutlaws.h"
#include "BGWDataAsset_PreloadOutlaws.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_PreloadOutlaws : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FResourceID_PreloadOutlaws> Outlaws;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FResourceID_PreloadOutlaws> CheckedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Outlaw_AbnormalState;
    
    UBGWDataAsset_PreloadOutlaws();

};

