#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BUC_ACharacterComponent.generated.h"

class ACharacter;
class AController;
class UBGUCharacterMovementComponent;
class UShapeComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class B1_API UBUC_ACharacterComponent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUCharacterMovementComponent* OwnerMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* OwnerShapeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainSkinMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* OwnerController;
    
    UBUC_ACharacterComponent();

};

