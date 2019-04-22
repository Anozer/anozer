// domzad8laba.cpp : Defines the entry point for the console application.
//
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
	cout<<"\nÂâåäèòå a.ìîíåòó': ";cin>>x;
	cout<<"Ââåäèòå a.êîïååê': ";cin>>y;
	M.set(x,y);
	cout<<"Ââåäèòå b.ìîíåòó': ";cin>>z;
	cout<<"Ââåäèòå b.êîïååê': ";cin>>s;
	K.set(z,s);
	cout << "\nÑëîæåíèå ðàâíî : " << M.getRubley()+K.getRubley()<< ","<< M.getKopeek()+K.getKopeek()<< endl;
	cout << "\nÂû÷èòàíèå ðàâíî: " << M.getRubley()-K.getRubley()<< ","<< M.getKopeek()-K.getKopeek()<< endl;
	system ("pause");
	return 0;
}


