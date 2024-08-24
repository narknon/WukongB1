#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQTBase.h"
#include "GSEQT_STByResID.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class UGSEQT_STByResID : public UGSEQTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResID;
    
    UGSEQT_STByResID();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ProcessItemCS(UWorld* World, const FVector& ItemLocation, AActor* ItemActor, AActor* Querier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPrepareContext() const;
    
};

