#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "practice.h"

int main(void)
{
	setlocale(LC_CTYPE, "Ukr"); // зміна кодової таблиці символів
	int hour, min; // змінні для годин, хвилин
	const char* ending_arr[] = { "", "а", "и" }; // масив закінчень для годин та хвилин
	// ввод 
	do {
		printf("Введiть корректний час: ");
		scanf("%d %d", &hour, &min);
	} while (correct(hour, min) == ERRORRANGE); // перевірка діапазону
	// вивод
	printf("Введений час: ");
	printf("годин%c ", *ending_arr[convert(hour)]);  // | виклик функції, її вивод 
	printf("хвилин%c\n", *ending_arr[convert(min)]); // | та обрання потрібного закінчення
	// завершення функції
	return 0;
}