#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_LevelStreamingManger.generated.h"

UCLASS(Blueprintable)
class UBGW_LevelStreamingManger : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UBGW_LevelStreamingManger();

    UFUNCTION(BlueprintCallable)
    void OnLoadLevelStreamingFinish(int32 ActionID, int32 Linkage);
    
    UFUNCTION(BlueprintCallable)
    void OnUnloadLevelStreamingFinish(int32 ActionID, int32 Linkage);
    
};

