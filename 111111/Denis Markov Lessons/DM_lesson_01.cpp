// Урок1 Уроки по С++.1 урок.Как создать программу?
// C++ дениса Маркова https://www.youtube.com/watch?v=MOpF5lk3cLY&list=PLbmlzoDQrXVFC13GjpPrJxl6mzTiX65gs

/*//////////////////////////////
Author : Victor Yanushkevich ///
Name: output console 		 ///
*///////////////////////////////

/*
так выделяется многострочный
комментарий
*/


#include <conio.h>
#include <iostream>

using std::cout; //директива пространства имен, замест cout будет использовано std::cout
using std::endl;

// с данной фукции происходит вход в программу

int main()
{
	cout << "Hello World" << endl; //cout - оператов вывода в поток. endl - первод на новую строку
	cout << "Name: \tIhar\n";
	cout << "Name: \tYanushkevich\n";

	_getch(); //функиция которая ждет ввода символа

	return 0; //завершение программы (програама должна что-то вернуть, в данном случае возвращаем 0
}