#include "print.h"
#include <iostream>

using namespace printer;

int main(void)
{
    int testarray[5] {15, 5, 32, 500000000, 1000};
//	long testlong[5] {586941.658941,6985.416958241,698541.695841,65841.5841,65841.65841};
	float testfloat[5] {5.2,64.875,349.22222,0.27943,1000000.3168};
	double testdouble[5] {5489.357,25,2654.215,658.2,3597.486357};
	char testchar[5] {'m','f','d','t','y'};
	string teststring[5] {"test", "work", "for", "me", "please"};
	bool testbool[5] {0,0,1,1,0};

    printerclass::bubbleSort(testarray, sizeof(testarray));
//	printerclass::print(testlong, sizeof(testlong));
	printerclass::print(testfloat, sizeof(testfloat));
	printerclass::print(testdouble, sizeof(testdouble));
	printerclass::print(testchar, sizeof(testchar));
	printerclass::print(teststring, sizeof(teststring));
	printerclass::print(testbool, sizeof(testbool));

    return 0;
}
