#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPCGComponentGenerationTrigger.h"
#include "EPCGComponentInput.h"
#include "PCGDataCollection.h"
#include "PCGComponent.generated.h"

class AActor;
class UPCGData;
class UPCGGraphInstance;
class UPCGGraphInterface;
class UPCGManagedResource;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PCG_API UPCGComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGComponentInput InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParseActorComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivated;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsComponentPartitioned;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGComponentGenerationTrigger GenerationTrigger;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    bool bRuntimeGenerated;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PostGenerateFunctionNames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGGraphInstance* GraphInstance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 GenerationGridSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UPCGData* CachedPCGData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UPCGData* CachedInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UPCGData* CachedActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UPCGData* CachedLandscapeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    UPCGData* CachedLandscapeHeightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPCGManagedResource*> GeneratedResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LastGeneratedBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGDataCollection GeneratedGraphOutput;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FPCGDataCollection> PerPinGeneratedOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsComponentLocal;
    
public:
    UPCGComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetGraph(UPCGGraphInterface* InGraph);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPropertiesChangedFromBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPCGDataCollection GetGeneratedGraphOutput() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateLocal(bool bForce);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Generate(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    AActor* ClearPCGLink(UClass* TemplateActor);
    
    UFUNCTION(BlueprintCallable)
    void CleanupLocal(bool bRemoveComponents, bool bSave);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Cleanup(bool bRemoveComponents, bool bSave);
    
    UFUNCTION(BlueprintCallable)
    void AddToManagedResources(UPCGManagedResource* InResource);
    
};

