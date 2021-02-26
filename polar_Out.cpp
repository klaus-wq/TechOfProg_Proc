#include <fstream>
#include "polar_atd.h"
using namespace std;
namespace simple_numbers {
	// Вывод параметров полярных координат в поток
	void Out(polar* p, ofstream& ofst) {
		ofst << "It is polar: r = " << p->r << ", fi = " << p->fi << endl;
	}
} // end simple_numbers namespace