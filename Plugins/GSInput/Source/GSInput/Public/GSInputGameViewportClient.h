#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "GSInputGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class GSINPUT_API UGSInputGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UGSInputGameViewportClient();

};

