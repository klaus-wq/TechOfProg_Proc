#include "container_atd.h"
#include "number_atd.h"
#ifndef NULL
#define NULL (0)
#endif
namespace simple_numbers {
	// Инициализация контейнера
	void Init(container& c) { c.len = 0; c.head = NULL; c.tail = NULL; }
	// Очистка контейнера от элементов
	// (освобождение памяти)
	void Clear(container& c)
	{
		node* curNode = c.head;

		while (curNode != NULL)
		{
			node* temp = curNode->next;
			delete curNode;
			curNode = temp;
		}
		c.head = NULL;
		c.tail = NULL;
		c.len = 0;
	}
} // end simple_numbers namespace
