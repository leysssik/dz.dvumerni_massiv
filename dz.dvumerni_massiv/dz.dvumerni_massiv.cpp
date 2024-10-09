#include <iostream>
#include <string>
using namespace std;
#include <windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[3][4] = { {1,-2,3,4}, {-5,-6,7,0}, {9,10,11,-12} };
	float sum = { 0.0 };
	float average = { 0.0 };
	int count = 0;

	//Задание 1(положит и отриц эл-ты)
	cout << "Положительные элементы:\n";
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr[i][j] >= 0)
			{
				cout << arr[i][j] << "\t";
			}
		}
		cout << endl;
	}
	cout << "\nОтрицательные элементы:\n";
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr[i][j] < 0)
			{
				cout << arr[i][j] << "\t";
			}
		}
		cout << endl;
	}

	//задание 2(чет\нечет эл-ты)
	cout << "\nЧётные элементы : \n";
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr[i][j] % 2 == 0)
			{
				cout << arr[i][j] << "\t";
			}
		}
		cout << endl;
	}
	cout << "\nНечётные элементы : \n";
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr[i][j] % 2 != 0)
			{
				cout << arr[i][j] << "\t";
			}
		}
		cout << endl;
	}

	//задание 3(суммирование и ср.зн-ие)
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "Сумма всех эл-тов массива = " << sum<<endl;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			arr[i][j];
			count++;
		}
	}
	average = sum / count;
	cout << "Ср.зн-ие всех эл-тов массива = " << average<<endl;
}
