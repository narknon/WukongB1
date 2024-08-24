#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUTortoiseLevelStreamingMgrActor.generated.h"

class UBUS_TortoiseLevelStreamingConfigComp;

UCLASS(Blueprintable)
class ABGUTortoiseLevelStreamingMgrActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_TortoiseLevelStreamingConfigComp* TortoiseLevelStreamingConfigComp;
    
    ABGUTortoiseLevelStreamingMgrActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAllSetLevelsStateFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnSingleSetLevelsStateFinished(const FString& LevelKeyword, const FString& LevelState, int32 OperationID);
    
};

