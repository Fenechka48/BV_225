﻿//DataTypes
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << true << endl;	//endl - end line (переносит курсор в начало новой строки)
	//cout << false << endl;
	//0 - это false, а true - это все что НЕ 0
	cout << sizeof(short int) << endl;
	//МАКРООПРЕДЕЛЕНИЙ в Visual Studio
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << 0 << " ... " << UINT_MAX << endl;

	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;

	int a;
	double price;
	double price_of_coffee;//snake_case_style
	//case - региср
	//lower case - нижний регистр (маленькие(строчные) буквы)
	//upper case - верхний регистр (большие (заглавные) буквы)
	double 
}