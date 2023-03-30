#pragma once

#include "Appliances.h"
#include "Device.h"

class Smart_lamp final : public Appliances, Device
{
public:
	Smart_lamp(int weight, int batteryLife);
	virtual void ShowSpec() override;
};