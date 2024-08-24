#include "B1IpNetDriver.h"

UB1IpNetDriver::UB1IpNetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->ReplicationDriverClassName = TEXT("/Script/b1-Managed.B1ReplicationGraphOnline");
    this->ChannelDefinitions.AddDefaulted(4);
}


