#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "BGUFunctionLibCollisionChannel.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class B1_API UBGUFunctionLibCollisionChannel : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFunctionLibCollisionChannel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCollisionProfileData(const UPrimitiveComponent* Comp, const FName& ProfileName, TEnumAsByte<ECollisionEnabled::Type>& OutCollisionEnabled, TEnumAsByte<ECollisionChannel>& OutObjectType, TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>>& OutResponseToChannels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ETraceTypeQuery> ConvertToTraceType(TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EObjectTypeQuery> ConvertToObjectType(TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionChannel> ConvertToCollisionChannelByTraceType(TEnumAsByte<ETraceTypeQuery> TraceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionChannel> ConvertToCollisionChannelByObjectType(TEnumAsByte<EObjectTypeQuery> ObjectType);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetCollisionResponseToChannels(UPrimitiveComponent* Comp, TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> ResponseToChannels);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUGetCollisionResponseToChannels(const UPrimitiveComponent* Comp, TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>>& OutResponseToChannels);
    
};

