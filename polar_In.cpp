#include <fstream>
#include "polar_atd.h"
using namespace std;
namespace simple_numbers {
	// ���� ���������� �������� ��������� �� �����
	polar* InPolar(ifstream& ifst) {
		polar* p = new polar;
		ifst >> p->r >> p->fi;
		return p;
	}
} // end simple_numbers namespace