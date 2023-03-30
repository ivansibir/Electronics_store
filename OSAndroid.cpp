#include "OSAndroid.h"
using namespace std;

OSAndroid::OSAndroid(float OSversion) : _OSversion(OSversion)
{
}

void OSAndroid::ShowSpec()
{
	cout << "Operating system: Android. Version: " << _OSversion << "." << endl;
}