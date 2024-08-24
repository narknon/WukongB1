#include "BUI_Menu.h"

UBUI_Menu::UBUI_Menu() {
    this->MenuUIStat = MenuUIStat::None;
    this->MenuSwitchType = MenuSwitchType::Normal;
    this->InteractActionType = InteractActionType::Normal;
    this->UseLeftRightAction = false;
    this->Parent = NULL;
    this->SelectedIdx = 0;
    this->CacheSelectedIdx = 0;
    this->ActivedIdx = 0;
    this->UseNavLoop = false;
}


