#include <fstream>
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций.
	void Out(complex* r, ofstream& ofst);
	void Out(simple* t, ofstream& ofst);
	void Out(polar* p, ofstream& ofst);
	// Вывод параметров текущего числа в поток
	void Out(number& s, ofstream& ofst) {
		switch (s.k) {
		case number::key::COMPLEX:
			Out((complex*)s.obj, ofst);
			break;
		case number::key::SIMPLE:
			Out((simple*)s.obj, ofst);
			break;
		case number::key::POLAR:
			Out((polar*)s.obj, ofst);
			break;
		default:
			ofst << "Incorrect number!" << endl;
		}
	}
} // end simple_numbers namespace
