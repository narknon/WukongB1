#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorFuncLibCommon.generated.h"

UCLASS(Blueprintable)
class GSENGINEEXTENT_API UEditorFuncLibCommon : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEditorFuncLibCommon();

    UFUNCTION(BlueprintCallable)
    static int32 UMGTemplate_GetLearnID(int32 UnitID, int32 LearnID);
    
};

