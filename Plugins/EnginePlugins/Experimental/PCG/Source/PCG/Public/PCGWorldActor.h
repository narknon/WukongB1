#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PCGWorldActor.generated.h"

class UPCGLandscapeCache;

UCLASS(Blueprintable, MinimalAPI, NotPlaceable, Config=Engine)
class APCGWorldActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PartitionGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGLandscapeCache* LandscapeCacheObject;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUse2DGrid;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FGuid> GridGuids;
    
public:
    APCGWorldActor(const FObjectInitializer& ObjectInitializer);

};

