#include "BGW_WorldSettings.h"

ABGW_WorldSettings::ABGW_WorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultGroupAIMgrConfigDataAsset = NULL;
    this->DefaultGroupAIBattleHotZoneConfigDataAsset = NULL;
    this->DefaultEnvironmentSurfaceEffectID = 0;
    this->DefaultWeatherType = EWeatherType::None;
    this->EnterLevelEvent = NULL;
    this->ExitLevelEvent = NULL;
    this->bShowListener = false;
    this->bShowMaxAttentionRadius = false;
    this->bShowObjectDirectionAxis = true;
    this->AxisLength = 100.00f;
    this->GameObjectRefreshInterval = 1.00f;
    this->ShowObjectRangeMeter = 200.00f;
    this->RootQuestGraph = NULL;
    this->QuestRunDelaySeconds = 1.00f;
    this->EnableLevelOverride = false;
    this->TamerSettingConfigDataAsset = NULL;
}

void ABGW_WorldSettings::OnLevelPreSave(ULevel* Level, UWorld* World) {
}

void ABGW_WorldSettings::ReceiveDestroyed_Implementation() {
}


