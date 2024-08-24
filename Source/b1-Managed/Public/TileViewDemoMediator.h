#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileViewDemoMediator.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ATileViewDemoMediator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* tex0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* tex1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* tex2;
    
    ATileViewDemoMediator(const FObjectInitializer& ObjectInitializer);

};

