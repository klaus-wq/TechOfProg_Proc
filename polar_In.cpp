#include <fstream>
#include "polar_atd.h"
#include <iostream>
using namespace std;
namespace simple_numbers {
	// ¬вод параметров пол€рных координат из файла
	polar* InPolar(ifstream& ifst) {
		polar* p = new polar;
		ifst >> p->r >> p->fi;
		if (ifst.fail())
		{
			cout << "Wrong input of function InPolar!" << endl;
			exit(0);
		}
		return p;
	}
} // end simple_numbers namespace