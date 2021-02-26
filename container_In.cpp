#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций
	number* In(ifstream& ifdt);
		// Ввод содержимого контейнера из указанного потока
		void In(container & c, ifstream & ifst) {
		while (!ifst.eof()) {
			number* curNumber = In(ifst);
			if (curNumber != 0) {
				c.len++;
				node* curNode = new node;
				curNode->next = NULL; //изначально по след адресу пусто
				curNode->n = curNumber; //записываем значение в структуру
				if (c.head != NULL) { //если список не пуст
					curNode->prev = c.tail;
					c.tail->next = curNode;
					c.tail = curNode;
				}
				else {
					curNode->prev = NULL;
					c.head = c.tail = curNode; //Голова=Хвост=тот элемент, что сейчас добавили
				}
			}
		}
	}
} // end simple_numbers namespace
