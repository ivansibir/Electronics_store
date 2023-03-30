#include "Vacuum_cleaner.h"
using namespace std;

Vacuum_cleaner::Vacuum_cleaner(int weight, int batteryLife, float OSAndroid) : Appliances(weight), Device(batteryLife), OSAndroid(OSAndroid)
{
}

void Vacuum_cleaner::ShowSpec()
{
	Appliances::ShowSpec();
	Device::ShowSpec();
	OSAndroid::ShowSpec();
	cout << "__________________________________________\n";
	cout << "\n";
}