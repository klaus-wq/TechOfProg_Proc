#include <fstream>
#include "simple_atd.h"
#include <iostream>
using namespace std;
namespace simple_numbers {
	// Ввод параметров простой дроби из потока
	simple* InSimple(ifstream& ifst) {
		simple* t = new simple;
		ifst >> t->a >> t->b;
		if (ifst.fail()) {
			cout << "Wrong input of function InSimple!" << endl;
			exit(0);
		}
		return t;
	}
} // end simple_numbers namespace
