#include <fstream>
#include "simple_atd.h"
using namespace std;
namespace simple_numbers {
	// Вывод параметров простой дроби в поток
	void Out(simple* t, ofstream& ofst) {
		ofst << "It is simple fraction: a = " << t->a << ", b = " << t->b << endl;
	}
} // end simple_numbers namespace
