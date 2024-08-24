#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WorldActorContainer.generated.h"

class AActor;
class APlayerController;
class UActorCompContainer;

UCLASS(Blueprintable)
class B1_API UWorldActorContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllocID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UActorCompContainer*> ActorCompsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AActor*> ActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, APlayerController*> PlayerCtrlMap;
    
public:
    UWorldActorContainer();

};

