#pragma once

#include "Electronics.h"

class Device : virtual public Electronics
{
public:
    Device(int batteryLife);

    virtual void ShowSpec() override;

    virtual ~Device() = default;

protected:
    int _batteryLife;
};