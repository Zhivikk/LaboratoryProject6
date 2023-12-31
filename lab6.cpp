// LaboratoryProject6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits.h>
using namespace std;

// Глобальні змінні
const int N = 50;
int arr[N];



// Прототипи функцій
void task1(void);
void task2(void);

void array_input(int in_arr[N], int& in_n);

void array_output(const int out_arr[], int out_n);



void array_input(int in_arr[N], int& in_n)
{
	cout << "Count of elements: ";
	cin >> in_n;
	if (in_n > N)
	{
		cout << "Wrong number! Maximum is 50." << endl;

	}
	else
	{
		for (int i = 0; i < in_n; i++)
		{
			cin >> in_arr[i];
		}
	}
}

void array_output(const int out_arr[], int out_n)
{
	cout << "Array elements: " << endl;
	for (int i = 0; i < out_n; i++)
	{
		cout << out_arr[i] << " ";
	}
	cout << endl;
}

void task1()
{
	// Декларація змінних

	int n;
	int i, j; 
	int index1 = 0; // індекси елементів з найбільшою різницею
	int index2 = 0; // індекси елементів з найбільшою різницею
	unsigned int difference = UINT_MAX;// різниця елементів
	array_input(arr, n); // Введення массиву
	array_output(arr, n); // Введення массиву
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i] != arr[j])
			{
				if ((abs(arr[j] - arr[i])) < difference)
				{
					difference = (abs(arr[j] - arr[i]));
					index1 = i;
					index2 = j;
				}
			}
		}
	}

	if (index1 > index2)
	{
		cout << "Smallest difference:" << index2 << " " << index1 << endl;
	}
	else
	{
		cout << "Smallest difference:" << index1 << " " << index2 << endl;
	}



	return;
}

void task2()
{
	// Декларація змінних

	int n, K, L;
	int i,j;
	array_input(arr, n); // Введення массиву
	restart:
	cout << "Enter K:"; // Введення K
	cin >> K;
	cout << endl;
	cout << "Enter L:"; // Введення :
	cin >> L;
	cout << endl;

	if ((K >= 1) && (K < L) && (L <= n))
	{

	}
	else
	{
		cout << "wrong number! Type Again." << endl;
		goto restart;
	}

	array_output(arr, n); // Виведення зміненного массиву

    for (i = K + 1, j = L - 1; i < j; i++, j--)
	{

		int temp;
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}

	array_output(arr, n); // Виведення зміненного массиву




	return;
}

void task3()
{
	exit(0);
	//return;
}

int main() 
{
	int menu;
	while (true)
	{

	
	cout << "Choose task:1,2 or 3(Exit Programm)";
	cin >> menu;
	switch (menu)
	{ // перемикання між завданнями
	    case 1: 
		{
			task1(); break; // Завдання 1
		}
	    case 2: 
		{
			task2(); break; // Завдання 2
		}
		case 3:
		{
			task3(); break; // Вихід з завданя
		}
	    default: cout << "Wrong task! (Only 1,2,3)" << endl; //повідомлення про помилку
	}
	system("pause");

	}	
	return 0;
}
