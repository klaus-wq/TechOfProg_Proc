#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций
	void Out(number& s, ofstream& ofst);
	int Real(number& s);
	// Вывод содержимого контейнера в указанный поток
	void Out(container& c, ofstream& ofst)
	{
		ofst << "Container contains " << c.len
			<< " elements." << endl;
		//ВЫВОДИМ СПИСОК С НАЧАЛА
		node* curNode = c.head;
		int i = 0;

		while (curNode != NULL)
		{
			ofst << i << ": ";

			Out(*curNode->n, ofst);
			ofst << "Real = " << Real(*curNode->n) << endl;
			curNode = curNode->next;

			i++;
		}
	}
} // end simple_numbers namespace
