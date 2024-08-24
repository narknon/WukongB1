#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mesh.generated.h"

USTRUCT(BlueprintType)
struct FMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Indices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3f> Positions;
    
    UNREALEXTENT_API FMesh();
};

