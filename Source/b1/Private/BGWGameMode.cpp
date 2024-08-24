#include "BGWGameMode.h"
#include "GameFramework/Pawn.h"

ABGWGameMode::ABGWGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultPawnClass = APawn::StaticClass();
    this->bUseSeamlessTravel = true;
}











bool ABGWGameMode::IsMovieRendering_Implementation() const {
    return false;
}










