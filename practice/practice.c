#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "practice.h"

int correct(int hour, int min)
{
    return (hour >= 0 && hour < 24) && (min >= 0 && min < 60) ? 1 : ERRORRANGE;
}

int convert(int x, char* result)
{
    const char* units_arr[] = { "????", "????", "??i", "???", "??????", "?'???", "?i???", "?i?", "?i?i?", "???'???" }; // ????? 0-9
    const char* teens_arr[] = { "??????????", "??????????", "??????????", "????????????", "?'?????????", "?i?????????", "?i????????", "?i?i????????", "???'?????????" }; // ????? 11-19
    const char* tens_arr[] = { "??????", "????????", "????????", "?????", "?'???????" }; // ????? 10, 20, ..., 50
    int ending = 0; // ?????????? ??? ????? ?? ??????

    int tens = ((x / 10) % 10); // ???????
    int units = x % 10; // ???????

    switch (tens)
    {
        case 1:
            switch (units)
            {
                case 0: strcat(result, tens_arr[0]); break; // 10
                case 1: strcat(result, teens_arr[0]); break; // 11
                case 2: strcat(result, teens_arr[1]); break; // 12
                case 3: strcat(result, teens_arr[2]); break; // 13
                case 4: strcat(result, teens_arr[3]); break; // 14
                case 5: strcat(result, teens_arr[4]); break; // 15
                case 6: strcat(result, teens_arr[5]); break; // 16
                case 7: strcat(result, teens_arr[6]); break; // 17
                case 8: strcat(result, teens_arr[7]); break; // 18
                case 9: strcat(result, teens_arr[8]); break; // 19
                default: printf(""); break;
            } goto exit; break;
        case 2: strcat(result, tens_arr[1]); // 20
            if (!units) goto exit; // ?????? ??? ?????? ????? 
            strcat(result, " "); break;
        case 3: strcat(result, tens_arr[2]); // 30
            if (!units) goto exit; // ?????? ??? ?????? ????? 
            strcat(result, " "); break;      
        case 4: strcat(result, tens_arr[3]); // 40
            if (!units) goto exit; // ?????? ??? ?????? ????? 
            strcat(result, " "); break;
        case 5: strcat(result, tens_arr[4]); // 50
            if (!units) goto exit; // ?????? ??? ?????? ????? 
            strcat(result, " "); break;   
        default: printf(""); break;
    }
    switch (units)
    {
        case 0: strcat(result, units_arr[0]); break; // 0
        case 1: strcat(result, units_arr[1]); ending = 1; break; // 1
        case 2: strcat(result, units_arr[2]); ending = 2; break; // 2
        case 3: strcat(result, units_arr[3]); ending = 2; break; // 3
        case 4: strcat(result, units_arr[4]); ending = 2; break; // 4
        case 5: strcat(result, units_arr[5]); break; // 5
        case 6: strcat(result, units_arr[6]); break; // 6
        case 7: strcat(result, units_arr[7]); break; // 7
        case 8: strcat(result, units_arr[8]); break; // 8
        case 9: strcat(result, units_arr[9]); break; // 9
        default: printf(""); break;
    }
exit:
    return ending;
}