// урок2 задание 1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int b,n;
	std::cout<< "Vvedite chisla: \n";
	std::cin >> n;
	  b = 10* n;
	 std::cout<< n <<" cm="<< b << "mm\n";
	pause;
	 
	return 0;
}
