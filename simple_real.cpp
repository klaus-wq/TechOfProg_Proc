#include "simple_atd.h"
using namespace std;
namespace simple_numbers {
	// Приведение комплексного к действительному
	int Real(simple *s)
	{
		return (s->a)/(s->b);
	}
} // end simple_numbers namespace