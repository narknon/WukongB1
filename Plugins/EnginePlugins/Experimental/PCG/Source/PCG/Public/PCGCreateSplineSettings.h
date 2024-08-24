#pragma once
#include "CoreMinimal.h"
#include "EPCGAttachOptions.h"
#include "EPCGCreateSplineMode.h"
#include "PCGSettings.h"
#include "PCGCreateSplineSettings.generated.h"

class AActor;

UCLASS(Blueprintable)
class PCG_API UPCGCreateSplineSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCreateSplineMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClosedLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLinear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyCustomTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArriveTangentAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeaveTangentAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TargetActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttachOptions AttachOptions;
    
    UPCGCreateSplineSettings();

};

