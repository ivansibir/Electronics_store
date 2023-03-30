#pragma once

#include "Appliances.h"
#include "Device.h"
#include "OSAndroid.h"

class Vacuum_cleaner final : public Appliances, Device, OSAndroid
{
public:
	Vacuum_cleaner(int weight, int batteryLife, float OSversion);
	virtual void ShowSpec() override;
};