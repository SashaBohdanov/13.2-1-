#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "math_operations.h"
#include <corecrt_math.h>


void main()
{
    printf("Lab 13.2. Using macros and preprocessing directive\n");
    int x, y, sumModuls, x_cube, x_plus_y, maxim, minim;
    char ch;
    float rad, s;



    printf("Define the maximum of two numbers\n");
    printf("Input 3 integer numbers\n");
    scanf("%d", &x);
    PRINTI(x);
    scanf("%d", &y);
    PRINTI(y);
#if (z > 1 && z < 3)
    {
        sumModuls = ABS(x) + ABS(y) + ABS(z);
        PRINTI(sumModuls);
        x_cube = CUBE(x);
        PRINTI(x_cube);
        maxim = MAX(sumModuls, x_cube);
        PRINTR(maxim);
    }
#else
    {
        int x_plus_y = PLUS(x, y);
        int y_minus_z = pow(MINUS(y, z), 2);
        minim = MIN(x_plus_y, y_minus_z);
        PRINTR(minim);

    }
    printf("Repeat?  y / n ");
    scanf(" %c", &ch);
#endif
}