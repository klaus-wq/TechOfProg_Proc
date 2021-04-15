#include "complex_atd.h"
#include <cmath>
#include <iostream>
using namespace std;
namespace simple_numbers {
	// ���������� ������������ � ���������������
	int Real(complex *c) {
		if (pow(c->x, 2) + pow(c->y, 2) < 0) {
			cout << "ComplexReal! ������ �� �������������� �����!" << endl;
			return 0;
		}
		else {
			return sqrt(pow(c->x, 2) + pow(c->y, 2));
		}
	}
} // end simple_numbers namespace