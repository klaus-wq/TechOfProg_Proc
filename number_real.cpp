#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	int Real(complex* c);
	int Real(simple* s);
	
	int Real(number &s)
	{
		switch (s.k) {
		case number::COMPLEX:
			return Real((complex*)s.obj);
		case number::SIMPLE:
			return Real((simple*)s.obj);
		default:
			return -1;
		}
	}

} // end simple_numbers namespace