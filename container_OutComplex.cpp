#include "container_atd.h"
#include "number_atd.h"
#include <fstream>
using namespace std;
namespace simple_numbers {
	void Out(number& s, ofstream& ofst);
	int Real(number& s);

	void OutComplex(container& c, ofstream& ofst) {
		ofst << "Only complexes." << endl;
		node* curNode = c.head;
		int i = 0;

		while (curNode != NULL) {
			ofst << i << ": ";
			if (curNode->n->k == number::key::COMPLEX) {
				Out(*curNode->n, ofst);
			}
			else 
				ofst << endl;
				ofst << "Real = " << Real(*curNode->n) << endl;
				curNode = curNode->next;
				i++;
		}
	}
} // end simple_numbers namespace