#include "GSWCStreamingSourceActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GSWorldCompositionStreamingSourceComponent -FallbackName=GSWorldCompositionStreamingSourceComponent
#include "Components/SceneComponent.h"

AGSWCStreamingSourceActor::AGSWCStreamingSourceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    /*this->StreamingSorceComponent = CreateDefaultSubobject<UGSWorldCompositionStreamingSourceComponent>(TEXT("StreamingSorceComponent"));*/
}


