#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "practice.h"

int main(void)
{
	setlocale(LC_CTYPE, "Ukr"); // зміна кодової таблиці символів
	int hour, min; // змінні для годин, хвилин
	const char ending_arr[] = { '\0', 'а', 'и' }; // масив закінчень для годин та хвилин
	int ending = 0; // значення індексу
	char hour_res[20] = ""; // масив результату перетворення годин
	char min_res[20] = ""; // масив результату перетворення хвилин
	// ввод 
	do {
		printf("Введiть корректний час: ");
		scanf("%d %d", &hour, &min);
	} while (correct(hour, min) == ERRORRANGE); // перевірка діапазону
	// вивод
	printf("Введений час: ");
	// виклик функції, її вивод та обрання потрібного закінчення
	ending = convert(hour, hour_res);
	printf("%s годин%c ", hour_res, ending_arr[ending]);
	ending = convert(min, min_res);
	printf("%s хвилин%c \n", min_res, ending_arr[ending]);
	// завершення функції
	return 0;
}