#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQTBase.h"
#include "EEQCType.h"
#include "GSEQT_CheckAngle.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class UGSEQT_CheckAngle : public UGSEQTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEQCType BaseContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEQCType TargetContext;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMax;
    
public:
    UGSEQT_CheckAngle();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ProcessItemCS(UWorld* World, const FVector& ItemLocation, AActor* ItemActor, AActor* Querier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPrepareContext() const;
    
};

