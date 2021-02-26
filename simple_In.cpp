#include <fstream>
#include "simple_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод параметров простой дроби из потока
	simple* InSimple(ifstream& ifst)
	{
		simple* t = new simple;
		ifst >> t->a >> t->b;
		return t;
	}
} // end simple_numbers namespace
