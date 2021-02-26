#include <fstream>
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций
	complex* InComplex(ifstream& ist);
	simple* InSimple(ifstream& ist);
	// Ввод параметров обобщенного числа из файла
	number* In(ifstream& ifst)
	{
		number* nb;
		int k;
		ifst >> k;
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
		default:
			return 0;
		}
		ifst >> nb->measure;
		return nb;
	}
} // end simple_numbers namespace
