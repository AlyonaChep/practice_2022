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
	const char* ending_arr[] = { " ", "� ", "� " }; // ��������� ��� ����� �� ������
	// ���� 
	printf("����i�� ���: ");
	scanf("%i %i", &hour, &min);
	// �����
	printf("�������� ���: ");
	printf("�����%c", *ending_arr[convert(hour)]);
	printf("������%c", *ending_arr[convert(min)]);
	printf("\n");

	return 0;
}