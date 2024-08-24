#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPCGAttachOptions.h"
#include "PCGSettings.h"
#include "Templates/SubclassOf.h"
#include "PCGCreateTargetActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class PCG_API UPCGCreateTargetActor : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TemplateActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    AActor* TemplateActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTemplateActorEditing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttachOptions AttachOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> RootActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ActorPivot;
    
    UPCGCreateTargetActor();

};

