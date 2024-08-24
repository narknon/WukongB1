#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_ProjectileContext.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_ProjectileContext : public UGSEQCBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileID;
    
    UGSEQC_ProjectileContext();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideActorsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

