#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EPrefabricatorConstructionSnapType.h"
#include "PCSnapConstraintFloor.h"
#include "PCSnapConstraintWall.h"
#include "PrefabricatorConstructionSnapComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CONSTRUCTIONSYSTEMRUNTIME_API UPrefabricatorConstructionSnapComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPrefabricatorConstructionSnapType SnapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCSnapConstraintFloor FloorConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCSnapConstraintWall WallConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignToGroundSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMaxGroundSlopeConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGroundPlacementSlope;
    
    UPrefabricatorConstructionSnapComponent(const FObjectInitializer& ObjectInitializer);

};

