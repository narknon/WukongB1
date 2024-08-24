#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_CookRef.generated.h"

class UBGWPreloadDataAsset;

UCLASS(Blueprintable)
class UBGWDataAsset_CookRef : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBGWPreloadDataAsset*> PreloadDAList;
    
    UBGWDataAsset_CookRef();

};

