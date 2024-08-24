#pragma once
#include "CoreMinimal.h"
#include "BGWAssetLoaderRequest.h"
#include "BGWAssetLoaderRequestCS.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBGWAssetLoaderRequestCS : public UBGWAssetLoaderRequest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> loadedObjHolder;
    
public:
    UBGWAssetLoaderRequestCS();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteCS() const;
    
};

