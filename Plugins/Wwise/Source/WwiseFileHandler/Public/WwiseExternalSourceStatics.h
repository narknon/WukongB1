#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AkUniqueID.h"
#include "WwiseExternalSourceStatics.generated.h"

UCLASS(Blueprintable)
class WWISEFILEHANDLER_API UWwiseExternalSourceStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWwiseExternalSourceStatics();

    UFUNCTION(BlueprintCallable)
    static void SetExternalSourceMediaWithIds(const FAkUniqueID ExternalSourceCookie, const int32 MediaId);
    
    UFUNCTION(BlueprintCallable)
    static void SetExternalSourceMediaByName(const FString& ExternalSourceName, const FString& MediaName);
    
    UFUNCTION(BlueprintCallable)
    static void SetExternalSourceMediaById(const FString& ExternalSourceName, const int32 MediaId);
    
};

