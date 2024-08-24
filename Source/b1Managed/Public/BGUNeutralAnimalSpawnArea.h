#pragma once
#include "CoreMinimal.h"
#include "GSEnvNamedValue.h"
#include "BGUAreaBase.h"
#include "NeutralAnimalTerritoryInfo.h"
#include "Templates/SubclassOf.h"
#include "BGUNeutralAnimalSpawnArea.generated.h"

class AActor;
class UBUS_NeutralAnimalAreaConfigInfoComp;
class UEnvQuery;

UCLASS(Blueprintable)
class ABGUNeutralAnimalSpawnArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_NeutralAnimalAreaConfigInfoComp* NeutralAnimalAreaConfigInfoComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FNeutralAnimalTerritoryInfo> TerritoryInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PreviewActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* PresetPoints_EQS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSEnvNamedValue> QueryConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> GeneratedEQSActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> CustomAddingActors;
    
    ABGUNeutralAnimalSpawnArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDestroyed();
    
};

