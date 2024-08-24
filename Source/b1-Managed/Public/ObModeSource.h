#pragma once
#include "CoreMinimal.h"
#include "ObModeSource.generated.h"

UENUM(BlueprintType)
enum class ObModeSource : uint8 {
    Null,
    Antique,
    Artifact,
    Item,
    MainEquip,
    EquipHead,
    EquipUpwear,
    EquipArm,
    EquipFoot,
    EquipHulu,
    EquipWeapon,
    EquipFabao,
    EquipAccessory,
    EquipSoul,
    SoakingMain,
    SoakingLiquor,
    SoakingConsume1,
    SoakingConsume2,
    SoakingConsume3,
    SoakingConsume4,
    Legacy,
    MedicineRecipe,
    Black,
    Spell,
    Ability,
    Setting,
    Manual,
    TravelNotesMain,
    LegacyEven,
    LegacyOdd,
    AbilitySwitch,
    SpellSwitch,
    EquipMainSwitch,
    ItemSwitch,
    TNMSwitch,
    ManualSwitch,
    SettingSwitch,
    LegacySwitch,
    EquipSoulSwitch,
    BlackSwitch,
    EquipFabaoSwitch,
    EquipAccessorySwitch,
    MedicineRecipeSwitch,
};
