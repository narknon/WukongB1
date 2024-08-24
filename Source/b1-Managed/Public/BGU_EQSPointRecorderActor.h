#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEnvNamedValue.h"
#include "BGUActorBaseCS.h"
#include "Templates/SubclassOf.h"
#include "BGU_EQSPointRecorderActor.generated.h"

class AActor;
class UEnvQuery;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ABGU_EQSPointRecorderActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LocalMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RelativeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* GeneratePointsEQSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSEnvNamedValue> QueryConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PreviewActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> CustomAddingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> EQSPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CustomPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> GeneratedEQSActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRunQueryWhenMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyUpdateWhenMoveFinish: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDebug: 1;
    
    ABGU_EQSPointRecorderActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ClearRecord();
    
    UFUNCTION(BlueprintCallable)
    void RunEQSQuery();
    
    UFUNCTION(BlueprintCallable)
    void RecordEQSPoints();
    
    UFUNCTION(BlueprintCallable)
    void ClearSpawnPoints();
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomPoints();
    
    UFUNCTION(BlueprintCallable)
    void RecordCustomPoints();
    
    UFUNCTION(BlueprintCallable)
    void PreviewCustomPoints();
    
    UFUNCTION(BlueprintCallable)
    void ClearGenerateEQSActors();
    
    UFUNCTION(BlueprintCallable)
    void PreviewRecordSpawnPoints();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostEditMove(bool bFinish);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDestroyed();
    
};

