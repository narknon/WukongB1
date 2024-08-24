#pragma once
#include "CoreMinimal.h"
#include "BMPS_Base.h"
#include "EquipAbpConfig.h"
#include "EquipMeshConfig.h"
#include "BMPS_Equip.generated.h"

class UMoviePipeline;

UCLASS(Blueprintable)
class UBMPS_Equip : public UBMPS_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipMeshConfig MeshConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipAbpConfig AbpConfig;
    
    UBMPS_Equip();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDisplayTextCS() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupForPipelineCS(UMoviePipeline* InPipeline);
    
};

