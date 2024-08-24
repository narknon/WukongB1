#include "B1NetDriverForStandAloneHookBase.h"

UB1NetDriverForStandAloneHookBase::UB1NetDriverForStandAloneHookBase() {
    this->ReplicationDriverClassName = TEXT("/Script/b1-Managed.B1ReplicationGraphForStandAloneHookCS");
    this->ChannelDefinitions.AddDefaulted(3);
}


