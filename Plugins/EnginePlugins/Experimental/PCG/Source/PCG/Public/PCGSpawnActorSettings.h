#pragma once
#include "CoreMinimal.h"
#include "EPCGAttachOptions.h"
#include "EPCGSpawnActorGenerationTrigger.h"
#include "EPCGSpawnActorOption.h"
#include "PCGActorPropertyOverride.h"
#include "PCGBaseSubgraphSettings.h"
#include "Templates/SubclassOf.h"
#include "PCGSpawnActorSettings.generated.h"

class AActor;

UCLASS(Blueprintable)
class PCG_API UPCGSpawnActorSettings : public UPCGBaseSubgraphSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TemplateActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PostSpawnFunctionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSpawnActorOption Option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisableActorParsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSpawnActorGenerationTrigger GenerationTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInheritActorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TagsToAddOnActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTemplateActorEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    AActor* TemplateActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGActorPropertyOverride> ActorOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> RootActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttachOptions AttachOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnByAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnAttribute;
    
    UPCGSpawnActorSettings();

};

