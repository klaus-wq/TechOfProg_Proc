#include <fstream>
#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод параметров комплексного числа из файла
	complex* InComplex(ifstream& ifst) {
		complex* r = new complex;
		ifst >> r->x >> r->y;
		return r;
	}
} // end simple_numbers namespace
