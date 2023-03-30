#pragma once

#include "Appliances.h"
#include "Device.h"
#include "OSAndroid.h"

class Tablet final : public Appliances, Device, OSAndroid
{
public:
	Tablet (int weight, int batteryLife, float OSversion);
	virtual void ShowSpec() override;
};