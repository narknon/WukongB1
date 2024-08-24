#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GCTestB.generated.h"

class UCSTestC;

UCLASS(Blueprintable)
class GSUMGEXT_API UGCTestB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestValueB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCSTestC* ObjTestC;
    
    UGCTestB();

    UFUNCTION(BlueprintCallable)
    void TestLog();
    
    UFUNCTION(BlueprintCallable)
    void TestInit();
    
};

