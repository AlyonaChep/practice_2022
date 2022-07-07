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
	// ввод 
	printf("Введiть час: ");
	scanf("%i %i", &hour, &min);
	// вивод
	convert(hour);
	convert(min);
	printf("\n");

	return 0;
}