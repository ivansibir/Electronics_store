#pragma once

#include <iostream>
using namespace std;

class Electronics
{
public:
    virtual void ShowSpec() = 0;
    virtual ~Electronics() = default;
};
