#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ListViewDemoItemObject.generated.h"

UCLASS(Blueprintable)
class AListViewDemoItemObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString itemText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor itemColor;
    
    AListViewDemoItemObject(const FObjectInitializer& ObjectInitializer);

};

