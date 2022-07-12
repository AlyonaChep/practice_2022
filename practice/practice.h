#ifndef PRACTICE_H
#define PRACTICE_H

#define PUBLIC
#define ERRORRANGE -1

/**
* Функція перевірки діапазону
*
* @param hour число, min число
* @return 1 або -1 залежно від значення виразу
*/
PUBLIC int correct(int hour, int min);

/**
* Функція конвертації чисел у текст
*
* @param х число
* @return ending число
*/
PUBLIC int convert(int x, char* result);

#endif