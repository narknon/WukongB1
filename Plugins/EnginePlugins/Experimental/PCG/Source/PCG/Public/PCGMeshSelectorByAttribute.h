#pragma once
#include "CoreMinimal.h"
#include "ISMPartition/ISMComponentDescriptor.h"
#include "PCGMeshSelectorBase.h"
#include "PCGMeshSelectorByAttribute.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMeshSelectorByAttribute : public UPCGMeshSelectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftISMComponentDescriptor TemplateDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttributeMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaterialOverrideAttributes;
    
    UPCGMeshSelectorByAttribute();

};

