// С++2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <istream>
#include <string.h>
#include <string>
#include <stdlib.h>

using namespace std;



struct DATE
{
	string d;
	string m;
	string y;
};

struct ADDRESS
{
	string postIndex;
	string country;
	string countryArea;
	string cityArea;
	string city;
	string street;
	string house;
	string apartments;
};

struct SCHOOL
{
	string title;
	string classs;
};

struct SCHOOLBOY
{
	string lastName;
	string firstName;
	string middleName;
	string sex;
	string nationality;
	string height;
	string numberOfMobile;
	DATE birthday;	
	ADDRESS homeAddress;
	SCHOOL school;
};

SCHOOLBOY* InitArray(int sz)
{
	int flag = 0;
	cout << endl;
	SCHOOLBOY* array = new SCHOOLBOY[sz];
	for (int i = 0; i < sz; i++)
	{
		cout << "Введите данные для " << i + 1 << " школьника" << endl << endl;
		cout << "Введите фамилию" << endl << endl;
		getline(cin, array[i].lastName);
		if (array[i].lastName.empty())
		{
			array[i].lastName = "NoName";

		}
		cout << endl;


		cout << "Введите имя" << endl << endl;
		getline(cin, array[i].firstName);
		if (array[i].firstName.empty())
		{
			array[i].firstName = "NoName";
		}
		cout << endl;


		cout << "Введите отчество" << endl << endl;
		getline(cin, array[i].middleName);
		if (array[i].middleName.empty())
		{
			array[i].middleName = "NoName";
		}
		cout << endl;


		cout << "Введите пол" << endl << endl;
		getline(cin, array[i].sex);
		cout << endl;


		cout << "Введите национальность" << endl << endl;
		getline(cin, array[i].nationality);
		cout << endl;


		bool flag = false;
		do
		{
			cout << "Введите рост";
			try
			{
				cin >> array[i].height;
				flag = true;
			}
			catch (string e)
			{
				cout << "Не верные данные о росте!" << endl;
			}			
		} while (flag != true); // Ввод роста и проверка на правильность ввода
		cout << endl;

		
		flag = false;
		do
		{
			cout << "Введите номер мобильного(без +)" << endl;
			try
			{
				getline(cin, array[i].numberOfMobile);
				flag = true;
			}
			catch (string e)
			{
				cout << "Такой номер не существует!" << endl;
			}
		} while (flag != true); // Ввод номера и проверка на правильность ввода
		cout << endl;

		
		cout << "Введите день рождения" << endl << endl;
		getline(cin, array[i].birthday.d);
		cout << endl;


		cout << "Введите месяц рождения" << endl << endl;
		getline(cin, array[i].birthday.m);
		cout << endl;


		cout << "Введите год рождения" << endl << endl;
		getline(cin, array[i].birthday.y);
		cout << endl;

		
		cout << "Введите почтовый индекс" << endl << endl;
		getline(cin, array[i].homeAddress.postIndex);
		cout << endl;


		cout << "Введите страну" << endl << endl;
		getline(cin, array[i].homeAddress.country);
		cout << endl;


		cout << "Введите область" << endl << endl;
		getline(cin, array[i].homeAddress.countryArea);
		cout << endl;


		cout << "Введите город" << endl << endl;
		getline(cin, array[i].homeAddress.city);
		cout << endl;


		cout << "Введите район" << endl << endl;
		getline(cin, array[i].homeAddress.cityArea);
		cout << endl;


		cout << "Введите улицу" << endl << endl;
		getline(cin, array[i].homeAddress.street);
		cout << endl;


		cout << "Введите номер дома" << endl << endl;
		getline(cin, array[i].homeAddress.house);
		cout << endl;


		cout << "Введите номер квартиры" << endl << endl;
		getline(cin, array[i].homeAddress.apartments);
		cout << endl;


		cout << "Введите название школы" << endl << endl;
		getline(cin, array[i].school.title);
		cout << endl;


		cout << "Введите номер класса" << endl << endl;
		getline(cin, array[i].school.classs);
		cout << endl;
	}
		
	return array;
}

void GetInfo(SCHOOLBOY *a, int sz)
{	
	for (int i = 0; i < sz; i++)
	{
		cout << "1.  Ученик:" << endl << endl << a[i].lastName << " " << a[i].firstName << " " << a[i].middleName << endl << endl;

		cout << "2.  Пол: " << a[i].sex << "         " << "Национальность: " << a[i].nationality << "          " << "Рост: " << a[i].height << endl << endl;

		cout << "3.  Номер телефона: " << a[i].numberOfMobile << endl << endl;

		cout << "4.  День рождения: " << a[i].birthday.d << "." << a[i].birthday.m << "." << a[i].birthday.y << endl << endl;

		cout << "5.  Адресс" << endl << endl << endl;

		cout << "          " << "5.1.  Почтовый индекс: " << a[i].homeAddress.postIndex << endl << endl;
		
		cout << "          " << "5.2  Страна: " << a[i].homeAddress.country << endl << endl;
		
		cout << "          " << "5.3 Область: " << "*НЕ УКАЗАНО*" << endl << endl;		

		cout << "          " << "5.4  Город: " << a[i].homeAddress.city << endl << endl;

		cout << "          " << "5.5  Район: " << a[i].homeAddress.cityArea << endl << endl;

		cout << "          " << "5.6  Улица: " << a[i].homeAddress.street << endl << endl;

		cout << "          " << "5.7  Дом: " << a[i].homeAddress.house << endl << endl;

		cout << "          " << "5.8  Квартира: " << a[i].homeAddress.apartments << endl << endl;

		cout << "6.  Школа: " << a[i].school.title << "         " << "Класс: " << a[i].school.classs << endl << endl;			
	}
} 

void GetInfo1(SCHOOLBOY *a, int i)
{
	cout << "1.  Ученик:" << endl << endl << a[i].lastName << " " << a[i].firstName << " " << a[i].middleName << endl << endl;

	cout << "2.  Пол: " << a[i].sex << "         " << "Национальность: " << a[i].nationality << "          " << "Рост: " << a[i].height << endl << endl;

	cout << "3.  Номер телефона: " << a[i].numberOfMobile << endl << endl;

	cout << "4.  День рождения: " << a[i].birthday.d << "." << a[i].birthday.m << "." << a[i].birthday.y << endl << endl;

	cout << "5.  Адресс" << endl << endl << endl;

	cout << "          " << "5.1.  Почтовый индекс: " << a[i].homeAddress.postIndex << endl << endl;

	cout << "          " << "5.2  Страна: " << a[i].homeAddress.country << endl << endl;

	cout << "          " << "5.3 Область: " << "*НЕ УКАЗАНО*" << endl << endl;

	cout << "          " << "5.4  Город: " << a[i].homeAddress.city << endl << endl;

	cout << "          " << "5.5  Район: " << a[i].homeAddress.cityArea << endl << endl;

	cout << "          " << "5.6  Улица: " << a[i].homeAddress.street << endl << endl;

	cout << "          " << "5.7  Дом: " << a[i].homeAddress.house << endl << endl;

	cout << "          " << "5.8  Квартира: " << a[i].homeAddress.apartments << endl << endl;

	cout << "6.  Школа: " << a[i].school.title << "         " << "Класс: " << a[i].school.classs << endl << endl;
} 

SCHOOLBOY* IncreaseArray(SCHOOLBOY *a, int sz)
{
	SCHOOLBOY* array = new SCHOOLBOY[sz];
	*array = *a;
	

	
	cout << "Введите фамилию" << endl << endl;
	getline(cin, array[sz - 1].lastName);
	if (array[sz - 1].lastName.empty())
	{
		array[sz - 1].lastName = "NoName";

	}
	cout << endl;


	cout << "Введите имя" << endl << endl;
	getline(cin, array[sz - 1].firstName);
	if (array[sz - 1].firstName.empty())
	{
		array[sz - 1].firstName = "NoName";
	}
	cout << endl;


	cout << "Введите отчество" << endl << endl;
	getline(cin, array[sz - 1].middleName);
	if (array[sz - 1].middleName.empty())
	{
		array[sz - 1].middleName = "NoName";
	}
	cout << endl;


	cout << "Введите пол" << endl << endl;
	getline(cin, array[sz - 1].sex);
	cout << endl;


	cout << "Введите национальность" << endl << endl;
	getline(cin, array[sz - 1].nationality);
	cout << endl;


	bool flag = false;
	do
	{
		cout << "Введите рост";
		try
		{
			cin >> array[sz - 1].height;
			flag = true;
		}
		catch (string e)
		{
			cout << "Не верные данные о росте!" << endl;
		}
	} while (flag != true); // Ввод роста и проверка на правильность ввода
	cout << endl;


	flag = false;
	do
	{
		cout << "Введите номер мобильного(без +)" << endl;
		try
		{
			getline(cin, array[sz - 1].numberOfMobile);
			flag = true;
		}
		catch (string e)
		{
			cout << "Такой номер не существует!" << endl;
		}
	} while (flag != true); // Ввод номера и проверка на правильность ввода
	cout << endl;


	cout << "Введите день рождения" << endl << endl;
	getline(cin, array[sz - 1].birthday.d);
	cout << endl;


	cout << "Введите месяц рождения" << endl << endl;
	getline(cin, array[sz - 1].birthday.m);
	cout << endl;


	cout << "Введите год рождения" << endl << endl;
	getline(cin, array[sz - 1].birthday.y);
	cout << endl;


	cout << "Введите почтовый индекс" << endl << endl;
	getline(cin, array[sz - 1].homeAddress.postIndex);
	cout << endl;


	cout << "Введите страну" << endl << endl;
	getline(cin, array[sz - 1].homeAddress.country);
	cout << endl;


	cout << "Введите область" << endl << endl;
	getline(cin, array[sz - 1].homeAddress.countryArea);
	cout << endl;


	cout << "Введите город" << endl << endl;
	getline(cin, array[sz - 1].homeAddress.city);
	cout << endl;


	cout << "Введите район" << endl << endl;
	getline(cin, array[sz - 1].homeAddress.cityArea);
	cout << endl;


	cout << "Введите улицу" << endl << endl;
	getline(cin, array[sz - 1].homeAddress.street);
	cout << endl;


	cout << "Введите номер дома" << endl << endl;
	getline(cin, array[sz - 1].homeAddress.house);
	cout << endl;


	cout << "Введите номер квартиры" << endl << endl;
	getline(cin, array[sz - 1].homeAddress.apartments);
	cout << endl;


	cout << "Введите название школы" << endl << endl;
	getline(cin, array[sz - 1].school.title);
	cout << endl;


	cout << "Введите номер класса" << endl << endl;
	getline(cin, array[sz - 1].school.classs);
	cout << endl;

	return array;
}

void Search(SCHOOLBOY *a, int sz, int flag, string search)
{
	if (flag == 1)
	{
		for (int i = 0; i < sz; i++)
			if (a[i].lastName == search)
			{
				cout << "Результаты поиска" << endl << endl;
				GetInfo1(a, i);
				cout << "-------------------------------------------------------------------------------------" << endl << endl;
			}
		
	}
	if (flag == 2) 
	{
		for (int i = 0; i < sz; i++)
			if (a[i].firstName == search)
			{
				cout << "Результаты поиска" << endl << endl;
				GetInfo1(a, i);
				cout << "-------------------------------------------------------------------------------------" << endl << endl;
			}

	}
	if (flag == 3)
	{
		for (int i = 0; i < sz; i++)
			if (a[i].middleName == search)
			{
				cout << "Результаты поиска" << endl << endl;
				GetInfo1(a, i);
				cout << "-------------------------------------------------------------------------------------" << endl << endl;
			}

	}
	if (flag == 4)
	{
		for (int i = 0; i < sz; i++)
			if (a[i].sex == search)
			{
				cout << "Результаты поиска" << endl << endl;
				GetInfo1(a, i);
				cout << "-------------------------------------------------------------------------------------" << endl << endl;
			}
	}
	if (flag == 5)
	{
		for (int i = 0; i < sz; i++)
			if (a[i].nationality == search)
			{
				cout << "Результаты поиска" << endl << endl;
				GetInfo1(a, i);
				cout << "-------------------------------------------------------------------------------------" << endl << endl;
			}

	}
	if (flag == 6)
	{
		for (int i = 0; i < sz; i++)
			if (a[i].height == search)
			{
				cout << "Результаты поиска" << endl << endl;
				GetInfo1(a, i);
				cout << "-------------------------------------------------------------------------------------" << endl << endl;
			}

	}
	if (flag == 7)
	{
		for (int i = 0; i < sz; i++)
			if (a[i].numberOfMobile == search)
			{
				cout << "Результаты поиска" << endl << endl;
				GetInfo1(a, i);
				cout << "-------------------------------------------------------------------------------------" << endl << endl;
			}

	}
	if (flag == 8)
	{
		for (int i = 0; i < sz; i++)
			if (a[i].birthday.d == search)
			{
				cout << "Результаты поиска" << endl << endl;
				GetInfo1(a, i);
				cout << "-------------------------------------------------------------------------------------" << endl << endl;
			}

	}
	if (flag == 9)
	{
		for (int i = 0; i < sz; i++)
			if (a[i].birthday.m == search)
			{
				cout << "Результаты поиска" << endl << endl;
				GetInfo1(a, i);
				cout << "-------------------------------------------------------------------------------------" << endl << endl;
			}

	}
	if (flag == 10)
	{
		for (int i = 0; i < sz; i++)
			if (a[i].birthday.y == search)
			{
				cout << "Результаты поиска" << endl << endl;
				GetInfo1(a, i);
				cout << "-------------------------------------------------------------------------------------" << endl << endl;
			}

	}
	
}

void SortArray(SCHOOLBOY *a, int sz, int flag)
{
	SCHOOLBOY b;
	int c = 255;
	if (flag == 0)
	{
		for (int i = 0; i < sz - 1; i++)
		{
			if ((int)a[i].lastName[i] < (int)a[i + 1].lastName[i])
			{
				b = a[i];
				a[i] = a[i + 1];
				a[i + 1] = b;
			}
		}
	}
	if (flag == 1)
	{
		for (int i = 0; i < sz - 1; i++)
		{
			if ( stoi(a[i].birthday.y) < stoi(a[i + 1].birthday.y))
			{
				b = a[i];
				a[i] = a[i + 1];
				a[i + 1] = b;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int size;
	cout << "Введите количество школьников" << endl << endl;
	cin >> size;
	SCHOOLBOY *a = InitArray(size);

	
	int flag = -1;
	do 
	{
		cout << "Выберите действие(для этого введите номер пункта): " << endl << endl << "0 - Выйти" << "        " << "1 - Просмотреть базу данных" << "          " << "2 - Добавить ученика" << "         " <<  "3 - Отсортировать базу данных"  << "          " << "4 - Найти ученика" << endl << endl;
		cin >> flag;

		if (flag == 1)
		{
			GetInfo(a, size);
		}
		if (flag == 2)
		{			
			a = IncreaseArray(a, ++size);
		}
		if (flag == 3)
		{
			int flag1 = -1;
			cout << "Выберите действие(для этого введите номер пункта):" << endl << endl << "0 - Отсортировать по фамилиям в алфавитном порядке" << "          " << "1 - Отсортировать по году рождения" << endl << endl;
			cin >> flag1;
			SortArray(a, size, flag1);
		}
		if (flag == 4)
		{
			int flag1 = -1;
			cout << "Выберите действие(для этого введите номер пункта):" << endl << endl << "1 - Поиск по фамилии" << "          " << "2 - Поиск по имени" << "          " << "3 - Поиск по отчеству" << "          " << "4 - поиск по полу" << "          " << "5 - Поиск по национальности" << "          " << "6 - Поиск по росту" << "          " << "7 - Поиск по телефону" << "          " << "8 - По дню рождения" << "          " << "9 - Поиск по месяцу рождения" << "          " << "10 - Поиск по году рождения" << endl << endl;
			cin >> flag1;
			cout << "Введите критерий для поиска" << endl << endl;
			string str;
			cin >> str;
			Search(a, size, flag1, str);
		}
	} while (flag != 0);	
	system("pause");
}