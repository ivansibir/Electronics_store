#include "Smart_lamp.h"
using namespace std;

Smart_lamp::Smart_lamp(int weight, int batteryLife) : Appliances(weight), Device(batteryLife)
{
}

void Smart_lamp::ShowSpec()
{
	Appliances::ShowSpec();
	Device::ShowSpec();
	cout << "__________________________________________\n";
	cout << "\n";
}