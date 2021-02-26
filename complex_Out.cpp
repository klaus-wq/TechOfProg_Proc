#include <fstream>
#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// Вывод параметров комплексного числа в поток
	void Out(complex* r, ofstream& ofst) {
		ofst << "It is complex: Re = " << r->x << ", In = " << r->y << endl;
	}
} // end simple_numbers namespace
