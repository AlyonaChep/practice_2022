#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "practice.h"

int main(void)
{
	setlocale(LC_CTYPE, "Ukr"); // ���� ������ ������� �������
	int hour, min; // ���� ��� �����, ������
	const char ending_arr[] = { '\0', '�', '�' }; // ����� �������� ��� ����� �� ������
	int ending = 0; // �������� �������
	char hour_res[20] = ""; // ����� ���������� ������������ �����
	char min_res[20] = ""; // ����� ���������� ������������ ������
	// ���� 
	do {
		printf("����i�� ���������� ���: ");
		scanf("%d %d", &hour, &min);
	} while (correct(hour, min) == ERRORRANGE); // �������� ��������
	// �����
	printf("�������� ���: ");
	// ������ �������, �� ����� �� ������� ��������� ���������
	ending = convert(hour, hour_res);
	printf("%s �����%c ", hour_res, ending_arr[ending]);
	ending = convert(min, min_res);
	printf("%s ������%c \n", min_res, ending_arr[ending]);
	// ���������� �������
	return 0;
}