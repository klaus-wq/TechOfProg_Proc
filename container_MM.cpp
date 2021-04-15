#include <fstream>
#include "container_atd.h"
#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций
	void Out(number& s, ofstream& ofst);

	struct node* get_node(struct node* head, int offset) {

		struct node* curNode = head;
		int i;

		for (i = 0; i < offset; i++) {
			curNode = curNode->next;
		}

		return curNode;
	}

	//Мультиметод
	void MultiMethod(container& c, ofstream& ofst) {
		int count = 1;
		ofst << "Multimethod." << endl;
		struct node* curNode;
		for (int i = 0; i < c.len - 1; i++) {
			for (int j = i + 1; j < c.len; j++) {
				curNode = get_node(c.head, i);
				switch (curNode->n->k) {
				case number::COMPLEX:
					curNode = get_node(c.head, j);
					switch (curNode->n->k) {
					case number::COMPLEX:
						ofst << count << "Complex and Complex." << endl;
						break;
					case number::SIMPLE:
						ofst << "Complex and Simple." << endl;
						break;
					case number::POLAR:
						ofst << "Complex and Polar." << endl;
						break;
					default:
						ofst << "Unknown type" << endl;
					}
					break;
				case number::SIMPLE:
					curNode = get_node(c.head, j);
					switch (curNode->n->k) {
					case number::COMPLEX:
						ofst << "Simple and Complex." << endl;
						break;
					case number::SIMPLE:
						ofst << "Simple and Simple." << endl;
						break;
					case number::POLAR:
						ofst << "Simple and Polar." << endl;
						break;
					default:
						ofst << "Unknown type" << endl;
					}
					break;
				case number::POLAR:
					curNode = get_node(c.head, j);
					switch (curNode->n->k) {
					case number::COMPLEX:
						ofst << "Polar and Complex." << endl;
						break;
					case number::SIMPLE:
						ofst << "Polar and Simple." << endl;
						break;
					case number::POLAR:
						ofst << "Polar and Polar." << endl;
						break;
					default:
						ofst << "Unknown type" << endl;
					}
					break;
				default:
					ofst << "Unknown type" << endl;
				}
				Out(*get_node(c.head, i)->n, ofst);
				Out(*get_node(c.head, j)->n, ofst);
			}
		}
	}
} // end simple_numbers namespace