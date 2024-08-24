#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "Templates/SubclassOf.h"
#include "PCGBlueprintSettings.generated.h"

class UPCGBlueprintElement;

UCLASS(Blueprintable)
class PCG_API UPCGBlueprintSettings : public UPCGSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPCGBlueprintElement> BlueprintElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGBlueprintElement* BlueprintElementInstance;
    
public:
    UPCGBlueprintSettings();

    UFUNCTION(BlueprintCallable)
    void SetElementType(TSubclassOf<UPCGBlueprintElement> InElementType, UPCGBlueprintElement*& ElementInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UPCGBlueprintElement> GetElementType() const;
    
};

