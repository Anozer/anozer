// domzad8laba.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

class Money 
{
private:
	int long rubley;
	unsigned char kopeek;
   
public:
       void set(int newRubley, int newKopeek); 
	   int getRubley();
	   unsigned char getKopeek();
	   void addMoney(Money &someMoney);
	   void withdrawMoney(Money &someMoney);
	   void print();
};

void Money::set(int newRubley, int newKopeek)
{
	this->rubley=newRubley;
	this->kopeek=newKopeek;
}

int Money::getRubley()
{
	return this->rubley;
}

unsigned char Money::getKopeek()
{
	return this->kopeek;
}

void Money::addMoney(Money &someMoney)
{
	this->rubley+=someMoney.getRubley();
	this->kopeek+=someMoney.getKopeek();
}

void Money::withdrawMoney(Money &someMoney)
{
	this->rubley-=someMoney.getRubley();
	this->kopeek-=someMoney.getKopeek();
}

void Money::print()
{
	cout << rubley << "," << kopeek;
}



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	Money M, K;
	int x, y, z, s;
	cout<<"\nВведите a.монету': ";cin>>x;
	cout<<"Введите a.копеек': ";cin>>y;
	M.set(x,y);
	cout<<"Введите b.монету': ";cin>>z;
	cout<<"Введите b.копеек': ";cin>>s;
	K.set(z,s);
	cout << "\nСложение равно : " << M.getRubley()+K.getRubley()<< ","<< M.getKopeek()+K.getKopeek()<< endl;
	cout << "\nВычитание равно: " << M.getRubley()-K.getRubley()<< ","<< M.getKopeek()-K.getKopeek()<< endl;
	system ("pause");
	return 0;
}


