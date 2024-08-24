#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQTBase.h"
#include "GSEQT_HasProjectileInRange.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class UGSEQT_HasProjectileInRange : public UGSEQTBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckRangeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnly2DCheck: 1;
    
    UGSEQT_HasProjectileInRange();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ProcessItemCS(UWorld* World, const FVector& ItemLocation, AActor* ItemActor, AActor* Querier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreProcessItems(const TArray<AActor*>& ContextActors, const TArray<FVector>& ContextLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostProcessItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPrepareContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDescriptionTitleCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDescriptionDetailsCS() const;
    
};

