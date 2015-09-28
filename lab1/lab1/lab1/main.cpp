#include <iostream>
#include "lab1.h"
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	Vektor A = Vektor(4, 2, 11);
	Vektor B = Vektor(3,5,-7);
	A.umn(4);
	A.print();
	cout << A.mod() << endl;
	cout << B.proiz(A.getg(),A.getgg(),A.getggg()) << endl;
	B.sum(A.getg(), A.getgg(), A.getggg());
	B.vych(A.getg(), A.getgg(), A.getggg());
	B.funck(A.getg(), A.getgg(), A.getggg());
	Vektor mass[4] = { Vektor(5, 9, 12), Vektor(-10,2,12), Vektor(5,6,3), Vektor(-8,6,13) };
	cout << "Введите модуль: " << endl<<endl;
	int n;
	cin >> n;
	for (int i = 0; i < 4; i++)
	{
		if (mass[i].mod() == n)
		{
			mass[i].print();
		}
	}
	int min = mass[0].getg() + mass[0].getgg() + mass[0].getggg();
	int mins = 0;
	int i=0;
	cout << "Минимальная сумма: ";
	for (i = 1; i < 4; i++)
	{
		if ((mass[i].getg() + mass[i].getgg() + mass[i].getggg()) < min)
		{
			min = mass[i].getg() + mass[i].getgg() + mass[i].getggg();
			mins = i;
		}
	}
	mass[mins].print();
	int max = mass[0].getg() + mass[0].getgg() + mass[0].getggg();
	int maxs = 0;
	int k = 0;
	cout << "максимальная сумма: ";
	for (k = 1; k < 4; k++)
	{
		if ((mass[k].getg() + mass[k].getgg() + mass[k].getggg()) >max)
		{
			max = mass[k].getg() + mass[k].getgg() + mass[k].getggg();
			maxs = k;
		}
	}
	mass[maxs].print();
	system ("pause");
}