#ifndef PRACTICE_H
#define PRACTICE_H

#define PUBLIC
#define ERRORRANGE -1

/**
* ������� �������� ��������
*
* @param hour �����, min �����
* @return 1 ��� -1 ������� �� �������� ������
*/
PUBLIC int correct(int hour, int min);

/**
* ������� ����������� ����� � �����
*
* @param � �����
* @return ending �����
*/
PUBLIC int convert(int x, char* result);

#endif