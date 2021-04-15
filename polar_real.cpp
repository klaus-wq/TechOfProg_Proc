#include "polar_atd.h"
#include <cmath>
#include <iostream>
using namespace std;
namespace simple_numbers {
	// ���������� �������� ��������� � ���������������
	int Real(polar *p)
	{
		if (pow((p->r) * sin(p->fi), 2) + pow((p->r) * cos(p->fi), 2) < 0)
		{
			cout << "PolarReal! ������ �� �������������� �����!" << endl;
			return 0;
		}
		else
		{
			return sqrt(pow((p->r) * sin(p->fi), 2) + pow((p->r) * cos(p->fi), 2));
		}
	}
} // end simple_numbers namespace