#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "practice.h"

int main(void)
{
	setlocale(LC_CTYPE, "Ukr"); // ���� ������ ������� �������
	int hour, min; // ������, �������
	// ���� 
	printf("����i�� ���: ");
	scanf("%i %i", &hour, &min);
	// �����
	convert(hour);
	convert(min);
	printf("\n");

	return 0;
}