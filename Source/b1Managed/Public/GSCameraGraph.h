#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GSCameraGraph.generated.h"

UCLASS(Blueprintable)
class UGSCameraGraph : public UObject {
    GENERATED_BODY()
public:
    UGSCameraGraph();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsG4Mode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TargetResIDEqual(int32 TargetResID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNoCameraInput(float DurationTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseGuiBeiCamera();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCameraGraphTick();
    
public:
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_G4(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TargetExtendIDEqual(int32 ExtendID);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_Dead(bool bEnable, float ArmLength, float ArmLengthSpeed, float CameraPitch, float CameraPitchSpeed);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_Lock(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_Giant(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_Curve(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_Player(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_AutoTrail(bool bEnable, float InCameraRotationRate, float InCameraRotationAccelerate, float InCameraRotationVelocityThreshold, float InFallingAdjustAngleLimit, float InFallingAdjustSpeedPercent);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_LockSkill(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_FixedParam(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_SplineMove(bool bEnable, float CameraPitchAdditive, float CameraYawAdditive);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_GiantSkill(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_AxisSmooth(bool bEnable, bool IsXAxisFixed, bool IsYAxisFixed, bool IsZAxisFixed, float SmoothSpeed, float CameraLagSpeed);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_PlayerSkill(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_GuiBeiCamera(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_ShootSuction(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_TraceVelocity(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_InverseCamera(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_CloudMoveLimit(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_LerpPostProcess(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CameraGraphNode_AutoMoveTrailCamera(bool bEnable);
    
};

