// урок2 задание 1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int b,n;
	std::cout<< "Vvedite chislo cm: \n";
	std::cin >> n;
	  b = 10* n;
	 std::cout<<" A vot v "<< n <<" cm="<< b << "mm\n";

	return 0;
}