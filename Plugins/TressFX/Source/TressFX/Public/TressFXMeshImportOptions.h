#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TressFXMeshImportOptions.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class TRESSFX_API UTressFXMeshImportOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Skeleton;
    
    UTressFXMeshImportOptions();

};

