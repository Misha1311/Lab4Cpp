#include <iostream>
#include <string.h>


using namespace std;

void task1()
{
	string  sentence;
	cout << "Введите предложение : ";
	cin >> sentence;
	int k = 0;
	int g = 0;

	for (int i = 0; i<strlen(&sentence[0]); ++i)
	{
		if (sentence[i] == '(')
			k++;
		else if (sentence[i] == ')')
			g++;
	}

	if (k > g)
	{
		cout << "\nКоличество открывающихся больше закрывающихся" << endl;
	}
	if (g > k)
	{
		cout << "\nКоличество закрывающихся больш открывающихся" << endl;
	}
	if (k == g)
	{
		cout << "\nКоличество открывающихся и закрывающихся совпадает" << endl;
	}
}


void task2()
{
	string str;
	cin >> str;

	for (int i = 0; i < strlen(&str[0]); i++)
	{
		cout << str[i] << ' ' << (int)str[i] << ' ';
	}
	cout << endl;
}


void task3()
{
	string sentence1;
	string sentence2;
	cout << "Введите 1 предложение : ";
	cin >> sentence1;
	cout << "Введите 2 предложение : ";
	cin >> sentence2;

	for (int i = 0; i < strlen(&sentence1[0]); i++)
	{
		for (int j = 0; j < strlen(&sentence2[0]); j++)
		{
			if (sentence1[i] != sentence2[j])
			{
				cout << sentence1[i];
			}
		}
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int num;


	while (true)
	{
		cout << "Выберите задание: 1)Низкий уровень 2)Средний уровень 3)Высокий уровень 0)Закрыть программу" << endl;

		while (!(cin >> num))
		{
			cout << "Некорректный ввод числового значения!" << endl;
			cin.clear();
			cin.ignore(65535, '\n');
		}

		switch (num)
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 0:
			return 0;
		}
	}
}

