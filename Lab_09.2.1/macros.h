// macros.h
// заголовочний файл – макровизначення для обчислень та виведення
#pragma once
#include <iostream>

// Константа Z для умовної компіляції (змініть значення, щоб активувати іншу гілку)
#define Z 6

// Макроси математичних операцій (обов'язково беремо аргументи в дужки!)
#define SQR(a) ((a) * (a))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

// Макроси виведення значень та результатів
#define PRINTI(w) std::cout << "Control output: " << #w << " = " << (w) << std::endl
#define PRINTR(w) std::cout << "Result: " << #w << " = " << (double)(w) << std::endl