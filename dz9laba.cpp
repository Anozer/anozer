// dz9laba.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"


using namespace std;


class Money
{
private:
	long rubl;
	unsigned char kopeyki;

public:
       void set(long newR, unsigned char newK);
	   long getRubl();
	   unsigned char getKopeyki();
	   Money operator+(Money &plusMoney);
	   Money operator-(Money &minusMoney);
	   Money operator*(const int &mulMoney);
	   int min;
	   void print();
};

void Money::set(long newR, unsigned char newK)
{
	rubl=newR;
	kopeyki=newK;
}

long Money::getRubl()
{
	return rubl;
}

unsigned char Money::getKopeyki()
{
	return kopeyki;
}

Money Money::operator+(Money &plusMoney)
{
	Money result;
	result.rubl=rubl+plusMoney.rubl;
	result.kopeyki=kopeyki+plusMoney.kopeyki;
	if (result.kopeyki >= 100)
	{
		result.kopeyki=(result.kopeyki-100);
		result.rubl=(result.rubl+1);  
	}
	return result;
}

Money Money::operator-(Money &minusMoney)
{
	Money result;
	result.rubl=rubl-minusMoney.rubl;
	min=kopeyki-minusMoney.kopeyki;
	if (min < 0)
	{
		result.rubl=result.rubl-1;
		result.kopeyki=min+100;
	}
	else
	{
		result.kopeyki=kopeyki-minusMoney.kopeyki;
	}
	return result;
}

Money Money::operator*(const int &mulMoney)
{
	Money result;
	result.rubl=rubl*mulMoney;
	result.kopeyki=kopeyki*mulMoney;
	if (result.kopeyki >= 100)
	{
		result.kopeyki=(result.kopeyki-100);
		result.rubl=(result.rubl+1);  
	}
	return result;

}

 void Money::print()
 {
	 setlocale(LC_ALL, "Russian");
	 cout << rubl << " рублей " << (int)kopeyki <<" копеек " << endl;
 }


int _tmain(int argc, _TCHAR* argv[])
{
    Money x,y,z;
	x.set(5,30);
	y.set(3,70);
	z=x+y;
	z.print();
	x.set(2,30);
	y.set(1,40);
	z=x-y;
	z.print();
	x.set(2,30);
	int s =5;
	z=x*s;
	z.print();
	system("pause");	
}

