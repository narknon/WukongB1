#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "AssetDataArray.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UAssetDataArray : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetData> AssetDataArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveIdx;
    
    UAssetDataArray();

    UFUNCTION(BlueprintCallable)
    void SetActiveIdx(int32 Idx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAssetDataCount();
    
};

