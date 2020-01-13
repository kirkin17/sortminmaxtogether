#include <iostream>
#include <ctime>
using namespace std;

void downtoup(int*);
void uptodown(int*);


const int n = 10;
void main()
{
	setlocale(LC_ALL, "rus");
	int a[n];
	short int menu;


	//random
	while (1) {
		srand(time(NULL));
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 20;
		}
		//output
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << "\t";
		}
		cout << endl;

		cout << "Сортировка:\n";
		cout << "1. По возрастанию\n";
		cout << "2. По убыванию\n";
		cin >> menu;

		switch (menu)
		{
		case 1:
		{
			downtoup(a); break;
		}
		case 2:
		{
			uptodown(a); break;
		}
		}


		for (int i = 0; i < n; i++)
		{
			cout << a[i] << "\t";
		}
		cout << endl;
		system("pause");
		system("cls");
	}

}


//algorithm downtoup 
void downtoup(int *a_ptr)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a_ptr[j] < a_ptr[min])
				min = j;
		}
		if (min == i) continue;
		int tmp = a_ptr[i];
		a_ptr[i] = a_ptr[min];
		a_ptr[min] = tmp;
	}
}




//algorithm uptodown
void uptodown(int *a_ptr)
{
	for (int i = 0; i < n - 1; i++)
	{
		int max = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a_ptr[j] > a_ptr[max])
				max = j;
		}
		if (max == i) continue;
		int tmp = a_ptr[i];
		a_ptr[i] = a_ptr[max];
		a_ptr[max] = tmp;
	}
}