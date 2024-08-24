#include "BGWGameInstance.h"

UBGWGameInstance::UBGWGameInstance() {
    this->MainActorWorld = NULL;
    this->VolumeMgr = NULL;
    this->Events = NULL;
    this->TickActor_PreAnimation = NULL;
    this->TickActor_PrePhysics = NULL;
    this->TickActor_BeforeStartPhysics = NULL;
    this->TickActor_DuringPhysics = NULL;
    this->TickActor_BeforePostPhysics = NULL;
    this->TickActor_PostPhysics = NULL;
    this->TickActor_BeforePostUpdateWork = NULL;
    this->TickActor_PostUpdateWork = NULL;
    this->TickActor_PrePhysics_EvenWhenPaused = NULL;
    this->TickActor_BeforePostUpdateWork_EvenWhenPaused = NULL;
    this->AssetLoader = NULL;
}

bool UBGWGameInstance::TravelURLHasOption(const FString& Option) {
    return false;
}

bool UBGWGameInstance::TravelURLHasHost() {
    return false;
}

void UBGWGameInstance::SwitchLoadingScreenThread(bool UseSlateThread) {
}


void UBGWGameInstance::RequestFadeAway() {
}

void UBGWGameInstance::RegisterLoadingTipsMask(UTexture2D* MaskTexture) {
}

void UBGWGameInstance::RegisterLoadingTipsInfo(FLoadingTipsInfo TipsInfo) {
}

void UBGWGameInstance::RegisterChapterInfo(FChapterInfo ChapterInfo) {
}




void UBGWGameInstance::PrepareFadeAway() {
}

void UBGWGameInstance::OpenLoadingScreen(bool UseSlateThread, EGSLoadingScreenType LoadingScreenType) {
}





bool UBGWGameInstance::IsToggleLoadingTipsFinish() {
    return false;
}

bool UBGWGameInstance::IsLoadingScreenFadeAwayFinish() {
    return false;
}

UWorld* UBGWGameInstance::GetWorldForCS() {
    return NULL;
}

FString UBGWGameInstance::GetTravelURLHost() {
    return TEXT("");
}

FString UBGWGameInstance::GetTravelURLForCS() {
    return TEXT("");
}

double UBGWGameInstance::GetTimeInMSSinceLoadingOpen() {
    return 0.0;
}


TArray<int32> UBGWGameInstance::GetLastUseTips() {
    return TArray<int32>();
}

ULocalPlayer* UBGWGameInstance::GetFirstGamePlayerForCS() {
    return NULL;
}

UBGW_EventCollection* UBGWGameInstance::GetEvents() {
    return NULL;
}

EGSLoadingScreenType UBGWGameInstance::GetCurLoadingScreenType() {
    return EGSLoadingScreenType::Unknown;
}

EGSLoadingScreenState UBGWGameInstance::GetCurLoadingScreenState() {
    return EGSLoadingScreenState::Idle;
}

void UBGWGameInstance::CloseLoadingScreen() {
}

bool UBGWGameInstance::CanFadeAway() {
    return false;
}

void UBGWGameInstance::BeginToggleLoadingTips(UGSInputComponent* InputComponent) {
}


