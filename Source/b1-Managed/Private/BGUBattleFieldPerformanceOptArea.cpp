#include "BGUBattleFieldPerformanceOptArea.h"
#include "BUS_BattleFieldPerformanceOptAreaDataComp.h"

ABGUBattleFieldPerformanceOptArea::ABGUBattleFieldPerformanceOptArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_BattleFieldPerformanceOptAreaDataComp>(TEXT("DataComp"))) {
}


