#pragma once
#ifndef __number_atd__
#define __number_atd__
#include "complex_atd.h"
#include "simple_atd.h"
#include "polar_atd.h"
namespace simple_numbers {
	// структура, обобщающая все имеющиеся числа
	struct number {
		// значения ключей для каждого из числа
		enum key { COMPLEX, SIMPLE, POLAR };
		char measure[3];
		key k; // ключ
		// используемые альтернативы
		void* obj; //используем косвенное связывание
	};
} // end simple_numbers namespace
#endif
