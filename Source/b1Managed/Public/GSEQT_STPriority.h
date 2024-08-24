#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQTBase.h"
#include "GSEQT_STPriority.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class UGSEQT_STPriority : public UGSEQTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ResIDPriority;
    
    UGSEQT_STPriority();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ProcessItemCS(UWorld* World, const FVector& ItemLocation, AActor* ItemActor, AActor* Querier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPrepareContext() const;
    
};

