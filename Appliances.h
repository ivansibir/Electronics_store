#pragma once

#include "Electronics.h"

class Appliances : virtual public Electronics
{
public:
    Appliances (int weight);
    void ShowSpec() override;

protected:
    int _weight;
};
