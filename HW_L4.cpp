
#include <iostream>

using namespace std;


void Task1()
{
	int a, b;
	cout << "Введите 2 целых числа, для проверки принадлежности их суммы интервалу от [10 до 20]" << endl;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	a += b;
	if (a >= 10 && a <= 20) cout << "true";
	else cout << "false";
	cout << endl << endl;
}

void Task2()
{
	const int a = 10, b = 10;
	cout << "Две целочисленные константы, обе равны десяти сами по себе, либо их сумма равна десяти?" << endl;
	cout << "A = " << a << " B = " << b << endl;
	if (a == 10 && b == 10 || a + b == 10) cout << "true";
	else cout << "false";
	cout << endl << endl;
}

void Task3()
{
	size_t SIZE = 50;
	cout << "Cписок всех нечетных чисел он 1 до 50" << endl;
	cout << "Your numbers: ";
	for (size_t i = 1; i <= SIZE; i++)
	{
		if (i % 2 != 0) cout << i << " ";
	}
	cout << endl << endl;
}

void Task4()
{
	int a;
	cout << "Введите целое положительное число, для проверки на простоту?" << endl;
	cout << "A = ";
	cin >> a;
	for (size_t i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			cout << "не ";
			break;
		}
	}
	cout << "простое";
	cout << endl << endl;
}

void Task5()
{
	cout << "Проверка года на високосность" << endl;
	int year = 0;
	do
	{
		cout << "Введите год от 1 до 3000: " << endl;
		cin >> year;
	} while (year < 1 || year > 3000);

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) cout << "Високосный" << endl;
	else cout << "Не високосный" << endl;

	cout << endl;
}


int main()
{
	setlocale(LC_ALL, "RU");

	int taskNumber = 0;
	while (true)
	{
		do
		{
			cout << "Введите номер задачи от 1 до 5:" << endl;
			cin >> taskNumber;
		} while (taskNumber > 5 || taskNumber < 1);
		
		cout << endl;

		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		case 4: Task4();
			break;
		case 5: Task5();
			break;
		}
	}
}

