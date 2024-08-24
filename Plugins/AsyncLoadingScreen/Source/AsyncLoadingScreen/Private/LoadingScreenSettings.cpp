#include "LoadingScreenSettings.h"

ULoadingScreenSettings::ULoadingScreenSettings() {
    this->LoadingScreenWidget = NULL;
    this->PlaybackType = MT_Normal;
    this->ChildWidgetFadeAwayTime = 0.00f;
    this->BackgroundFadeAwayTime = 0.00f;
    this->ToggleIconFadeInTime = 0.00f;
    this->SlideFadeInTime = 0.00f;
    this->ProtectSwitchSlideTime = 0.00f;
    this->PreviewAction = NULL;
    this->NextAction = NULL;
    this->ContinuePlayAction = NULL;
}


