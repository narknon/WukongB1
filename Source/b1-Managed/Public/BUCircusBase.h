#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "CircusCollector.h"
#include "BUCircusBase.generated.h"

UCLASS(Blueprintable)
class ABUCircusBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCircusCollector> FamilyTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AwakeSync: 1;
    
    ABUCircusBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CollectRelativeTamerData();
    
};

