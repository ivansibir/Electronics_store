#include "Tablet.h"
using namespace std;

Tablet::Tablet(int weight, int batteryLife, float OSAndroid) : Appliances(weight), Device(batteryLife), OSAndroid(OSAndroid)
{
}

void Tablet::ShowSpec()
{
	Appliances::ShowSpec();
	Device::ShowSpec();
	OSAndroid::ShowSpec();
	cout << "__________________________________________\n";
	cout << "\n";
}