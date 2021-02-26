#pragma once
#ifndef __container_atd__
#define __container_atd__
namespace simple_numbers {
	// Ссылка на описание числа.
	// Знание структуры самой фигуры для представленной
	// реализации контейнера не требуется
	struct number;
	// Простейший контейнер на основе двунаправленного линейного списка
	struct node
	{
		number* n;
		node* next;
		node* prev;
	};
	struct container
	{
		node* head;
		node* tail;
		int len;
	};
} // end numbers namespace
#endif
