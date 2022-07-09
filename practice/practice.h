#ifndef PRACTICE_H
#define PRACTICE_H

#define PUBLIC
#define ERRORRANGE -1

/**
* Функція перевірки діапазону
*
* @param hour число, min число
* @return (hour >= 0 && hour < 24) && (min >= 0 && min < 60) значення виразу
*/
PUBLIC int correct(int hour, int min);

/**
* Функція конвертації чисел у текст
*
* @param х число
* @return ending число
*/
PUBLIC int convert(int x);

#endif