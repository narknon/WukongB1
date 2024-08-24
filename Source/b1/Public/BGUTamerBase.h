#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ETamerType.h"
#include "TamerHighLODRootMeshConfig.h"
#include "BGUTamerBase.generated.h"

class APlayerState;
class UCapsuleComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class B1_API ABGUTamerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBeginPlayFromLevelStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerState* SpawnedPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString SpawnedTamerGuid;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ETamerType TamerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableShowLODMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODMaxDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LowLODMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<USkeletalMeshComponent*> HighLODMeshComponents;
    
public:
    ABGUTamerBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetLODMeshVisible(bool invisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitializeComponentsCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostEditMove(bool bFisnish);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructionCS(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetHighLODMeshConfig(FTamerHighLODRootMeshConfig& OutMeshConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetActorGuidCS(FString& OutActorGuid) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActorGuid(FString& OutActorGuid) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceRefreshDetailView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyWorldOffsetCS(const FVector& InOffset, bool bWorldShift);
    
};

