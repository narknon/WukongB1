#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFuncLibMeshCS.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UBGUFuncLibMeshCS : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibMeshCS();

    UFUNCTION(BlueprintCallable)
    static int32 GetChildBones(USkeletalMeshComponent* SkeletalMeshComp, FName BaseBoneName, UPARAM(Ref) TArray<FName>& ChildBoneNames);
    
};

