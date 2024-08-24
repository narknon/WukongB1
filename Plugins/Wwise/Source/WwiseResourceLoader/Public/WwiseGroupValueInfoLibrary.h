#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WwiseGroupValueInfo.h"
#include "WwiseGroupValueInfoLibrary.generated.h"

UCLASS(Blueprintable)
class WWISERESOURCELOADER_API UWwiseGroupValueInfoLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWwiseGroupValueInfoLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseGroupValueInfo SetWwiseShortId(const FWwiseGroupValueInfo& Ref, int32 WwiseShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseGroupValueInfo SetWwiseName(const FWwiseGroupValueInfo& Ref, const FString& WwiseName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseGroupValueInfo SetGroupShortId(const FWwiseGroupValueInfo& Ref, int32 GroupShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseGroupValueInfo SetAssetGuid(const FWwiseGroupValueInfo& Ref, const FGuid& AssetGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseGroupValueInfo MakeStruct(const FGuid& AssetGuid, int32 GroupShortId, int32 WwiseShortId, const FString& WwiseName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWwiseShortID(const FWwiseGroupValueInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWwiseName(const FWwiseGroupValueInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGroupShortId(const FWwiseGroupValueInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetAssetGuid(const FWwiseGroupValueInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakStruct(FWwiseGroupValueInfo Ref, FGuid& OutAssetGuid, int32& OutGroupShortId, int32& OutWwiseShortId, FString& OutWwiseName);
    
};

