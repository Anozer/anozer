// 11zadaniezolotoeyayzo.cpp : Defines the entry point for the console application.
//гнкнрне ъижн

#include "stdafx.h"
#include "iostream"
#include "string"
#include "egg.h"

using namespace std;


class Human 
{
private:
	string name;
    int age;

public:
	void init (string name, int age);
	string getname();
	int getage();
	void say (string text);
	void try_break_egg (egg * some_egg);
};

void Human::init(string name, int age)
{
	this->name=name;
	this->age=age;
}

string Human::getname()
{
	return this->name;
}

int Human::getage()
{
	return this->age;
}

void Human::say (string text)
{
  cout << this->name << " \n say human " << text; 
  return;
}

void Human::try_break_egg (egg * some_egg)
{
	say(this->name + " bil bil ");
	bool result;
	result=some_egg->breaking(this->name);
	if (true==result)
	{
		this-> say (" razbil ") ;
	}
	else
	{
		this-> say (" ne razbil ") ;
	}

    return;
}


class animal 
{
private:
	string name;

public:
	void setname (string name);
	string getname();
	void say (string text);
	void try_break_egg (egg *some_egg);
	egg *create_egg();
};

void animal::setname (string name)
{
	this->name=name;
}

string animal::getname()
{
	return this->name;
}

void animal::say (string text)
{
  cout << this->name << "\n say anim " << text; 
  return;
}

void animal::try_break_egg (egg *some_egg)
{
	say(this->name + " sbezhala hvostikom mahnula ");
	bool result;
	result=some_egg->breaking(this->name);
	if (true==result)
	{
		this-> say (" egg upalo i razbilos ") ;
	}
	else
	{
		this-> say (" egg upalo i ne razbilos ") ;
	}
}

egg * animal::create_egg ()
{
   egg * retval;
   retval = new egg;
   retval->size=5;
   retval->weight=50;
   return (retval);
}





int _tmain(int argc, _TCHAR* argv[])
{

	Human ded, baba;
	ded.init("deda", 70);
	baba.init("baba", 60);

	animal mouse, chiken;
	mouse.setname("mouse");
	chiken.setname("chiken");

	egg * ckik;
	
	
	
	ckik=chiken.create_egg();
	cout << ckik->size << ckik->weight;

	ded.try_break_egg(ckik);
	baba.try_break_egg(ckik);
	mouse.try_break_egg(ckik);
	chiken.try_break_egg(ckik);



	system("pause");
	return 0;
}