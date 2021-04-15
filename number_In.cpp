#include <fstream>
#include "number_atd.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций
	complex* InComplex(ifstream& ist);
	simple* InSimple(ifstream& ist);
	polar* InPolar(ifstream& ist);
	// Ввод параметров обобщенного числа из файла
	number* In(ifstream& ifst) {
		number* nb;
		int k;
		ifst >> k;
		if (ifst.fail()) {
			cout << "Wrong input of k!" << endl;
			exit(0);
		}

		if ((k != 1) && (k != 2) && (k != 3)) {
			cout << "Wrong number of k!" << endl;
			exit(0);
		}

		switch (k) {
		case 1:
			nb = new number;
			nb->k = number::key::COMPLEX;
			nb->obj= (void*)InComplex(ifst);
			break;
		case 2:
			nb = new number;
			nb->k = number::key::SIMPLE;
			nb->obj = (void*)InSimple(ifst);
			break;
		case 3:
			nb = new number;
			nb->k = number::key::POLAR;
			nb->obj = (void*)InPolar(ifst);
			break;
		default:
			return 0;
		}
		ifst >> nb->measure;
		return nb;
	}
} // end simple_numbers namespace
