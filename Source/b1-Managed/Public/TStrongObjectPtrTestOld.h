#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TStrongObjectPtrTestOld.generated.h"

UCLASS(Blueprintable)
class UTStrongObjectPtrTestOld : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> B;
    
    UTStrongObjectPtrTestOld();

};

