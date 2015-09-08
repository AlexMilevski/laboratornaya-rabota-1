// laba1sem3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<windows.h>
#include "Sana.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Sana a;
	int k;
	a.sania();
	std::cout<<"sana vvedi chiclo!:";
	std::cin>>k;
	a.xx(k);
	return 0;
}

