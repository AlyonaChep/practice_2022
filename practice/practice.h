#ifndef PRACTICE_H
#define PRACTICE_H

#define PUBLIC
#define ERRORRANGE -1

/**
* ������� �������� ��������
*
* @param hour �����, min �����
* @return (hour >= 0 && hour < 24) && (min >= 0 && min < 60) �������� ������
*/
PUBLIC int correct(int hour, int min);

/**
* ������� ����������� ����� � �����
*
* @param � �����
* @return ending �����
*/
PUBLIC int convert(int x);

#endif