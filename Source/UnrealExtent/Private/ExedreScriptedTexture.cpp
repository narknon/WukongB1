#include "ExedreScriptedTexture.h"

UExedreScriptedTexture::UExedreScriptedTexture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseMipMaps = false;
    this->RTFormat = RTF_RGBA8;
    this->ScriptedTexture = NULL;
    this->RenderingWidget = NULL;
}


