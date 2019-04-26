// 10labaDZ.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>


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
	   bool operator<(Money &a);
	   bool operator>(Money &a);
	   bool operator<=(Money &a);
	   bool operator>=(Money &a);
	   bool operator==(Money &a);
	   bool operator!=(Money &a);
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

bool Money::operator>(Money&a )
{
	if(this->rubl > a.rubl)
    return 1;
    else return 0;
}

bool Money::operator<(Money&a )
{
	if(this->rubl < a.rubl)
    return 1;
    else return 0;
}

bool Money::operator<=(Money&a )
{
	if(this->rubl <= a.rubl)
    return 1;
    else return 0;
}

bool Money::operator>=(Money&a )
{
	if(this->rubl >= a.rubl)
    return 1;
    else return 0;
}

bool Money::operator==(Money&a )
{
	if(this->rubl == a.rubl)
    return 1;
    else return 0;
}

bool Money::operator!=(Money&a )
{
	if(this->rubl != a.rubl)
    return 1;
    else return 0;
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

	Money a,d;
	a.set(5,30);
	d.set(3,70);
	bool iv = a<d;
	cout<<iv<<endl;
	a.set(2,30);
	d.set(1,70);
	bool iv1 = a>d;
	cout<<iv1<<endl;
	a.set(2,30);
	d.set(1,70);
	bool iv2 = a<=d;
	cout<<iv2<<endl;
	a.set(5,30);
	d.set(1,70);
	bool iv3 = a>=d;
	cout<<iv3<<endl;
	a.set(2,30);
	d.set(1,70);
	bool iv4 = a==d;
	cout<<iv4<<endl;
	a.set(6,30);
	d.set(5,70);
	bool iv5 = a!=d;
	cout<<iv5<<endl;
	system("pause");	
}
