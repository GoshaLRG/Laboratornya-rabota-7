/*
Лабораторная работа #6
Лямин Георгий
10 вариант
*/

#include <iostream>
#include "readFunc.hpp"
#include "coutFunc.hpp"
#include "findFunc.hpp"
#include "sortFunc.hpp"


int main()
{
    int matrix[100][100], i, j;

    setlocale(LC_ALL, "");
    printf("Задай порядрк матрицы ixj соответственно (не более 10х10): ");
    scanf_s("%d %d", &i, &j);
    printf("Введите матрицу поэлементно: ");
    gl::readFunc(i, j, matrix);
     
    if (gl::findFunc(i, j, matrix) == 0)
        gl::sortFunc(i, j, matrix);
     
    gl::coutFunc(i, j, matrix);
    
}
