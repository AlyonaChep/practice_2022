#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "practice.h"

int main(void)
{
	setlocale(LC_CTYPE, "Ukr"); // зміна кодової таблиці символів
	int hour, min; // година, хвилина
	const char* ending_arr[] = { "", "а", "и" }; // закінчення для годин та хвилин
	// ввод 
	do {
		printf("Введiть корректний час: ");
		scanf("%d %d", &hour, &min);
	} while (correct(hour, min) == ERRORRANGE); // перевірка діапазону
	// вивод
	printf("Введений час: ");
	printf("годин%c ", *ending_arr[convert(hour)]);
	printf("хвилин%c\n", *ending_arr[convert(min)]);
	return 0;
}