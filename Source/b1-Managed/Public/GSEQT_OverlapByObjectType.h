#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQTBase.h"
#include "EnvOverlapByObjectTypeData.h"
#include "GSEQT_OverlapByObjectType.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class UGSEQT_OverlapByObjectType : public UGSEQTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvOverlapByObjectTypeData OverlapData;
    
    UGSEQT_OverlapByObjectType();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ProcessItemCS(UWorld* World, const FVector& ItemLocation, AActor* ItemActor, AActor* Querier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPrepareContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDescriptionTitleCS() const;
    
};

