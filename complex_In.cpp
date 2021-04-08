#include <fstream>
#include "complex_atd.h"
#include <iostream>
using namespace std;
namespace simple_numbers {
	// Ввод параметров комплексного числа из файла
	complex* InComplex(ifstream& ifst) {
		complex* r = new complex;
		ifst >> r->x >> r->y;
		if (ifst.fail())
		{
			cout << "Wrong input of function InComplex!" << endl;
			exit(0);
		}
		return r;
	}
} // end simple_numbers namespace
