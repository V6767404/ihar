// lesson5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h" 
#include <iostream>

using namespace std;

// циклы for

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	cout<<"Введие число\n";
	int n;
	cin>> n;
	cout<<" Вы ввели число "<<n<<"\n";
	system("pause");

	for(int i = 0; i < 5 ; i++ )
	{
	//	cout<<i;
		cout<<"Значение i= "<<i<<"\n"; // это строка
	}
	system("pause");
	return 0;
}

