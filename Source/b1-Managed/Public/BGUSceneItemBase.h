#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUSceneItemBase.generated.h"

class UBUS_SceneItemCommComp;
class UBoxComponent;
class UCapsuleComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABGUSceneItemBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SceneItemCommComp* SceneItemCommComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleCollisionComp;
    
public:
    ABGUSceneItemBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
};

