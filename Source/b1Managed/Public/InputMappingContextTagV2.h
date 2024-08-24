#pragma once
#include "CoreMinimal.h"
#include "InputMappingContextTagV2.generated.h"

UENUM(BlueprintType)
enum class InputMappingContextTagV2 : uint8 {
    None,
    Move,
    Camera,
    Skill,
    Chord,
    Interact,
    Ride,
    UI,
    GSUI_TOP,
    Battle_UI,
    Battle_UI_Release,
    Battle_UI_Skip,
    Replay,
    GM_Temp,
    Unfreeze,
    SprintAndDodge,
    SpellAndUseItem,
    LoadingScreen,
    Cloud,
    ShepherdDebug,
    InteractSkip,
    TakePhoto,
    CricketBattle,
    RemoteCamera,
    BattleTriggerUI,
    Vigor,
    GM,
};

