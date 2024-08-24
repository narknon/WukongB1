#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WwiseObjectInfo.h"
#include "WwiseObjectInfoLibrary.generated.h"

UCLASS(Blueprintable)
class WWISERESOURCELOADER_API UWwiseObjectInfoLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWwiseObjectInfoLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseObjectInfo SetWwiseShortId(const FWwiseObjectInfo& Ref, int32 WwiseShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseObjectInfo SetWwiseName(const FWwiseObjectInfo& Ref, const FString& WwiseName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseObjectInfo SetWwiseGuid(const FWwiseObjectInfo& Ref, const FGuid& WwiseGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseObjectInfo SetHardCodedSoundBankShortId(const FWwiseObjectInfo& Ref, int32 HardCodedSoundBankShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWwiseObjectInfo MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, const FString& WwiseName, int32 HardCodedSoundBankShortId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWwiseShortID(const FWwiseObjectInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWwiseName(const FWwiseObjectInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetWwiseGuid(const FWwiseObjectInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHardCodedSoundBankShortId(const FWwiseObjectInfo& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakStruct(FWwiseObjectInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, int32& OutHardCodedSoundBankShortId);
    
};

