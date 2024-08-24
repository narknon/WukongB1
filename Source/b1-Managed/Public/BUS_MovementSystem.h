#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "DoNNavigationQueryData.h"
#include "DonNavigationDynamicCollisionPayload.h"
#include "ActorCompBaseUObj.h"
#include "BUS_MovementSystem.generated.h"

class APlayerCameraManager;
class UBGUCharacterMovementComponent;
class UBGUCrowdFollowingComponent;

UCLASS(Blueprintable)
class UBUS_MovementSystem : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* PlayerCameraManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUCharacterMovementComponent* CppCharacterMovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUCrowdFollowingComponent* CrowdFollowComp;
    
public:
    UBUS_MovementSystem();

    UFUNCTION(BlueprintCallable)
    void OnAIPathMoveModeMoveComplete(int32 MoveRequestID, EPathFollowingResult::Type Result);
    
    UFUNCTION(BlueprintCallable)
    void AIFlyPathMoveMode_Pathfinding_OnFinish(FDoNNavigationQueryData Data);
    
    UFUNCTION(BlueprintCallable)
    void AIFlyPathMoveMode_Pathfinding_OnDynamicCollisionAlert(FDonNavigationDynamicCollisionPayload Data);
    
};

