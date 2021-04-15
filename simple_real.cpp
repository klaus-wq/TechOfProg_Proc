#include "simple_atd.h"
#include <iostream>
using namespace std;
namespace simple_numbers {
	// Приведение простой дроби к действительному
	int Real(simple *s) {
		if (s->b == 0) {
			cout << "SimpleReal! Деление на 0!" << endl;
			return 0;
		}
		else {
			return (s->a) / (s->b);
		}
	}
} // end simple_numbers namespace