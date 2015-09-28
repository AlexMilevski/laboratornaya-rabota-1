#include "lab1.h"
#include<iostream>
Vektor::Vektor(int a, int b, int c)
{
	g = a;
	gg = b;
	ggg = c;
}
int Vektor::getg(void)
{
	return g;
}
int Vektor::getgg(void)
{
	return gg;
}
int Vektor::getggg(void)
{
	return ggg;
}
int Vektor::mod(void)//описали метод класса
{
	return sqrt(pow(g, 2) + pow(gg, 2) + pow(ggg, 2));
}
int Vektor::proiz(int a,int b, int c)
{
	return g*a+gg*b+ggg*c;
}
void Vektor::sum(int a, int b, int c)
{
	std::cout << "Сумма: " << a + g << "  " << b + gg << "  " << c + ggg << std::endl;
}
void Vektor::vych(int a, int b, int c)
{
	std::cout << "Разность: " << g - a << "  " << gg -b << "  " << ggg-c << std::endl;
}
void Vektor::umn(int c)
{
	g = c*g;
	gg = c*gg;
	ggg = c*ggg;
}
void Vektor::print(void)
{
	std::cout << "координаты вектора:" << g << "   " << gg << "   " << ggg <<std:: endl;
}
void Vektor::funck(int a, int b, int c)
{
	if (proiz(a, b, c) == 0)
	{
		std::cout << "Вектора ортогональные" << std::endl;
	}
	else
	{
		std::cout << "Вектора не ортогональные" << std::endl;
	}
	
	if ((g / a == gg / b == ggg / c)||(a/g==b/gg==c/ggg))
	{
		std::cout << "Вектора коллинеарные" << std::endl;
	}
	else
	{
		std::cout << "Вектора не коллинеарные" << std::endl;
	}

}