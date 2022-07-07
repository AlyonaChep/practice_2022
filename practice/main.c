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
	const char* ending_arr[] = { " ", "а ", "и " }; // закінчення для годин та хвилин
	// ввод 
	printf("Введiть час: ");
	scanf("%i %i", &hour, &min);
	// вивод
	printf("Введений час: ");
	printf("годин%c", *ending_arr[convert(hour)]);
	printf("хвилин%c", *ending_arr[convert(min)]);
	printf("\n");

	return 0;
}