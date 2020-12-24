// ConsoleApplication1.cpp : main project file.
/*
Realice un programa que permita dibujar un círculo con círculos concéntricos.*/

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>

using namespace std;
using namespace System;

void dibujacirculo(int &r,int &x, int &y)
{

	int x2, y2;

	for (int i = 0; i <= 360; i++)

	{
		x = r*cos(i) + 40;
		y = r*sin(i) + 12;
		Console::SetCursorPosition(x, y);
		cout << "*";

		
		x2 = (r-3)*cos(i) + 40;
		y2= (r-3)*sin(i) + 12;
		Console::SetCursorPosition(x2, y2);
		cout << "*";

	}

}

int main()
{
	
	int r=10 ;
	int x, y;
	dibujacirculo(r, x, y);
	_getch();

}
