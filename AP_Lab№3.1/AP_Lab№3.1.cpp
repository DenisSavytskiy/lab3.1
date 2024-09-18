// Lab_03_1.cpp 
// < Савицький Денис > 
// Лабораторна робота № 3.1 
// Розгалуження, задане формулою: функція однієї змінної. 
// Варіант 27
#include <iostream> 
#define _USE_MATH_DEFINES
#include <cmath> 
#include <math.h>

using namespace std;
int main()
{
	double x; // вхідний параметр 
	double y; // результат обчислення виразу 
	double A; // проміжний результат - функціонально стала частина виразу 
	double B; // проміжний результат - функціонально змінна частина виразу  
	cout << "x = "; cin >> x;
	A = abs(9 * (x * x * x) + 2);
	// спосіб 1: розгалуження в скороченій формі  
	if (x < 4)  B = 3 * pow(x, 5) - pow(x, 3) + 2 * x - 1;
	if (x >= 4 && x < 7)  B = atan((x - 2) / 3);
	if (x >= 7)  B = log10(2 * pow(x, -1) + pow(M_E, (3 * x + 1)));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі  
	if (x < 4) B = 3 * pow(x, 5) - pow(x, 3) + 2 * x - 1;
	else if (x >= 7)  B = log10(2 * pow(x, -1) + pow(M_E, (3 * x + 1)));
	else B = atan((x - 2) / 3);
	y = A + B;
	cout << "2) y = " << y << endl;
	return 0;
}
