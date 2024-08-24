#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGSurfaceData.h"
#include "PCGLandscapeData.generated.h"

class ALandscapeProxy;

UCLASS(Blueprintable)
class PCG_API UPCGLandscapeData : public UPCGSurfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ALandscapeProxy>> Landscapes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeightOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMetadata;
    
public:
    UPCGLandscapeData();

};

