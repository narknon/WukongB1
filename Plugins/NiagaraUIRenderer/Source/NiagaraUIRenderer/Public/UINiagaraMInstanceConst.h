#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialInstanceConstant.h"
#include "UINiagaraMInstanceConst.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class NIAGARAUIRENDERER_API UUINiagaraMInstanceConst : public UMaterialInstanceConstant {
    GENERATED_BODY()
public:
    UUINiagaraMInstanceConst();

};

