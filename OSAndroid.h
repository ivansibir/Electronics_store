#pragma once

#include "OS.h"

class OSAndroid : public OS
{
public:
	OSAndroid (float OSversion);
	void ShowSpec() override;

protected:
	float _OSversion;
};