// laba 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

class book
{
private:
   std::string name;
   int year;
public:
	void set_name(const char * new_name);
	void set_year(const int new_year);
	void get_info();
};
   void book::set_name(const char * new_name)
{
   this->name=new_name;
   return;
}

void book::set_year(const int new_year)
{
   this->year=new_year;
   return;
}
void book::get_info()
{
   cout<< this->name << "(" << this->year <<")"<<endl;
   return;
}

class Reader
{
private:
	string name;
	int age;
public:
	book anton;
	void set_name(const char * new_name);
	void set_age(const int new_age);
	void get_info();
};

void Reader::set_name(const char * new_name)
{
   this->name=new_name;
   return;
}

void Reader::set_age(const int new_age)
{
   this->age=new_age;
   return;
}
void Reader::get_info()
{
   cout<< this->name << "(" << this->age<<")";
   anton.get_info();
   return;
}



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	class book a, b, c;
	a.set_name (" Война и мир ");
	a.set_year (1869);
	a.get_info ();
	b.set_name (" Властелин колец");
	b.set_year (2005);
	b.get_info ();
	c.set_name (" Гарри Поттер и философский камень");
	c.set_year (2010);
	c.get_info ();

	Reader a1, a2, a3;
	a1.set_name ("Aнтон");
	a1.set_age (24);
	a1.anton = a;
	a1.get_info();
	a2.set_name ("Галя");
	a2.set_age (18);
	a2.anton = b;
	a2.get_info();
	a3.set_name ("Катя");
	a3.set_age (26);
	a3.anton = c;
	a3.get_info();


	system("pause");
}

