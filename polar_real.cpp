#include "polar_atd.h"
#include <cmath>
using namespace std;
namespace simple_numbers {
	// Приведение комплексного к действительному
	int Real(polar *p)
	{
		return sqrt(pow((p->r)*sin(p->fi), 2) + pow((p->r)*cos(p->fi), 2));
	}
} // end simple_numbers namespace