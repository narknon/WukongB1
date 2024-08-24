#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGData.h"
#include "PCGParamData.generated.h"

class UPCGMetadata;
class UPCGParamData;

UCLASS(Blueprintable)
class PCG_API UPCGParamData : public UPCGData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGMetadata* MetaData;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int64> NameMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCachedLastSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector CachedLastSelector;
    
public:
    UPCGParamData();

    UFUNCTION(BlueprintCallable)
    UPCGMetadata* MutableMetadata();
    
    UFUNCTION(BlueprintCallable)
    int64 FindOrAddMetadataKey(const FName& InName);
    
    UFUNCTION(BlueprintPure)
    int64 FindMetadataKey(const FName& InName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGParamData* FilterParamsByName(const FName& InName) const;
    
    UFUNCTION(BlueprintPure)
    UPCGParamData* FilterParamsByKey(int64 InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGMetadata* ConstMetadata() const;
    
};

