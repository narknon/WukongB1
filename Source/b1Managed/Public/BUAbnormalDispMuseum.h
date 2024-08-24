#pragma once
#include "CoreMinimal.h"
#include "AbnormalStateType.h"
#include "AbnromalDispActionType.h"
#include "AbnromalDispActionType_FreezeExt.h"
#include "BGUActorBaseCS.h"
#include "GridRow_ForAbnormalDisp.h"
#include "TamerInfo_ForAbnormal.h"
#include "Templates/SubclassOf.h"
#include "BUAbnormalDispMuseum.generated.h"

class AActor;
class ASkeletalMeshActor;
class USceneComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class ABUAbnormalDispMuseum : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> SKMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGridRow_ForAbnormalDisp> SKMeshActors_WithRowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTamerInfo_ForAbnormal> SKMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTamerInfo_ForAbnormal> SKMap_Conflict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString csvFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ImmueStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DebugNumerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackerDispID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AbnormalStateType AbnormalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AbnromalDispActionType> ActionTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AbnromalDispActionType_FreezeExt> ActionTypeList_FreezeExt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> CurSelectedActors;
    
    ABUAbnormalDispMuseum(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Preview();
    
    UFUNCTION(BlueprintCallable)
    void SpawnGrid();
    
    UFUNCTION(BlueprintCallable)
    void UpdateData();
    
    UFUNCTION(BlueprintCallable)
    void GenSKMuseumData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
};

