#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ComponentCurveSignatureDelegate.h"
#include "GSEDestructibleMeshGenComponent.generated.h"

class UBlueprint;
class UCurveFloat;
class UDestructibleComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSENGINEEXTENT_API UGSEDestructibleMeshGenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlueprint* TargetBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FolderPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDestructibleComponent*> DestructibleComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomCollisionToDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefreshPriviewObjectsOnAnimalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyInstance BodyInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentCurveSignature FloatCurveTick;
    
    UGSEDestructibleMeshGenComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetCollisionResponseToChannelByName(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse, UDestructibleComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionResponseToAllChannelsByName(TEnumAsByte<ECollisionResponse> NewResponse, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse, UDestructibleComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionObjectTypeByName(TEnumAsByte<ECollisionChannel> Channel, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel, UDestructibleComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionEnabledForceByName(TEnumAsByte<ECollisionEnabled::Type> NewType, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionEnabledForce(TEnumAsByte<ECollisionEnabled::Type> NewType, UDestructibleComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    bool SetAllCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    bool SetAllCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    bool SetAllCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintCallable)
    bool SetAllCollisionEnabledForce(TEnumAsByte<ECollisionEnabled::Type> NewType);
    
    UFUNCTION(BlueprintCallable)
    bool CallFloatCurve();
    
};

