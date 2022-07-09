#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "practice.h"

int main(void)
{
	setlocale(LC_CTYPE, "Ukr"); // ���� ������ ������� �������
	int hour, min; // ���� ��� �����, ������
	const char* ending_arr[] = { "", "�", "�" }; // ����� �������� ��� ����� �� ������
	// ���� 
	do {
		printf("����i�� ���������� ���: ");
		scanf("%d %d", &hour, &min);
	} while (correct(hour, min) == ERRORRANGE); // �������� ��������
	// �����
	printf("�������� ���: ");
	printf("�����%c ", *ending_arr[convert(hour)]);  // | ������ �������, �� ����� 
	printf("������%c\n", *ending_arr[convert(min)]); // | �� ������� ��������� ���������
	// ���������� �������
	return 0;
}