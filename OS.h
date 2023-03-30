#pragma once

#include <iostream>
using namespace std;

class OS
{
public:
    virtual void ShowSpec() = 0;
    virtual ~OS() = default;
};