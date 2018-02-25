// lesson9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout<<"Введите числа\n";
	int a, b;
	cin>>a>>b;
	int nod;
	if(a > b)
	{
		nod=b;
	}
	else
	{
		nod=a;
	}
	while(a % nod !=0 || b % nod !=0)
	{
		nod--;
	}
	cout<<"НОД:"<< nod <<"\n";
	system("pause");
	return 0;
}
