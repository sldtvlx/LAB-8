#include <iostream>
#include <string>
using namespace std;

struct Country
{
	string name;
	string capital;
	long int population;
	long int square;
};

int main()
{
	system("chcp 1251>nul");
	int i, numbercheck;
	long int populationcheck;

	Country N1 = { "Россия", "Москва", 146748590, 17098246 };
	Country N2 = { "Германия", "Берлин", 83149300, 357578 };
	Country N3 = { "США", "Вашингтон", 328239523, 9826675 };
	Country N4 = { "Китай", "Пекин", 1439323776, 9596961 };

	Country a[4] = { N4, N1, N2, N3 };
	for (i = 1; i < 4; i++)
		cout << " " << i << ") " << '\t' << "Название:\t" << a[i].name << endl << '\t' << "Столица:\t" << a[i].capital << endl << '\t' << "Население:\t" << a[i].population << endl << '\t' << "Площщадь:\t" << a[i].square << endl << endl;

	do
	{
		cout << "Введи минимальную численость населения "; cin >> populationcheck;
	} while (populationcheck < 1);
		
	do
	{
		cout << "Введи номер, после которого добавить элемент: "; cin >> numbercheck;
	} while (numbercheck < 1 || numbercheck > 3);
		
	cout << "Изменения:" << endl;
	i = 1;

	for (i = 1; i < 4; i++)
		if (i != numbercheck && a[i].population > populationcheck)
		{
			cout << "      " << '\t' << "Название:\t" << a[i].name << endl << '\t' << "Столица:\t" << a[i].capital << endl << '\t' << "Население:\t" << a[i].population << endl << '\t' << "Площщадь:\t" << a[i].square << endl << endl;
		}
		else if (i == numbercheck)
		{
			if (a[i].population < populationcheck)
			{
				cout << "      " << '\t' << "Название:\t" << a[0].name << endl << '\t' << "Столица:\t" << a[0].capital << endl << '\t' << "Население:\t" << a[0].population << endl << '\t' << "Площщадь:\t" << a[0].square << endl << endl;
			}
			else
			{
				cout << "      " << '\t' << "Название:\t" << a[i].name << endl << '\t' << "Столица:\t" << a[i].capital << endl << '\t' << "Население:\t" << a[i].population << endl << '\t' << "Площщадь:\t" << a[i].square << endl << endl;
				cout << "      " << '\t' << "Название:\t" << a[0].name << endl << '\t' << "Столица:\t" << a[0].capital << endl << '\t' << "Население:\t" << a[0].population << endl << '\t' << "Площщадь:\t" << a[0].square << endl << endl;
			}
		}
}