#include "BGUFunctionLibCollisionChannel.h"

UBGUFunctionLibCollisionChannel::UBGUFunctionLibCollisionChannel() {
}

bool UBGUFunctionLibCollisionChannel::GetCollisionProfileData(const UPrimitiveComponent* Comp, const FName& ProfileName, TEnumAsByte<ECollisionEnabled::Type>& OutCollisionEnabled, TEnumAsByte<ECollisionChannel>& OutObjectType, TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>>& OutResponseToChannels) {
    return false;
}

TEnumAsByte<ETraceTypeQuery> UBGUFunctionLibCollisionChannel::ConvertToTraceType(TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return TraceTypeQuery1;
}

TEnumAsByte<EObjectTypeQuery> UBGUFunctionLibCollisionChannel::ConvertToObjectType(TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return ObjectTypeQuery1;
}

TEnumAsByte<ECollisionChannel> UBGUFunctionLibCollisionChannel::ConvertToCollisionChannelByTraceType(TEnumAsByte<ETraceTypeQuery> TraceType) {
    return ECC_WorldStatic;
}

TEnumAsByte<ECollisionChannel> UBGUFunctionLibCollisionChannel::ConvertToCollisionChannelByObjectType(TEnumAsByte<EObjectTypeQuery> ObjectType) {
    return ECC_WorldStatic;
}

void UBGUFunctionLibCollisionChannel::BGUSetCollisionResponseToChannels(UPrimitiveComponent* Comp, TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> ResponseToChannels) {
}

bool UBGUFunctionLibCollisionChannel::BGUGetCollisionResponseToChannels(const UPrimitiveComponent* Comp, TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>>& OutResponseToChannels) {
    return false;
}


