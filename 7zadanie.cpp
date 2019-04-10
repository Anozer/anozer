// 7zadanie.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "string"

using namespace std;


class spell 
{
public:
	string name;
	int dhp;
	int dmp;
};


class mage
{
private:
    int hp;
    int mp;
    string name;

public:
       void init(int newhp , int newmp, string newname); 
	   string getname();
	   void say (string say);
	   int cast (spell & spl, mage & target);
	   void hit (spell & spl);
};

void mage::init(int newhp , int newmp, string newname)
{
	this->hp=newhp;
	this->mp=newmp;
	this->name=newname;
}

string mage::getname()
{
	return this->name;
}


void mage::say(string say)
{
  setlocale(LC_ALL, "Russian");
  cout << this->name << " Говорит " << say; 
  return;
}

int mage::cast(spell & spl, mage & target)
{
	setlocale(LC_ALL, "Russian");
	cout << this->name << " ударил " << spl.name << " ,отнимается жизнь у " << target.getname() << endl;
	target.hit(spl);
	return 0;
	
}

void mage::hit(spell & spl)
{
	setlocale(LC_ALL, "Russian");
	this->hp=this->hp - spl.dhp;
	if (hp < 0) this-> say (" проиграл ");
    return;
}



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	spell bolt, drain;
	bolt.dhp = 500;
	bolt.dmp = 100;
	bolt.name= " ударом Молнии";
	drain.dhp = 400;
	drain.dmp = 99;
	drain.name = "ударом Молота";

	mage vanya, boris;
	vanya.init(1000, 500, "Ваня");
	boris.init(1000, 600, "Борис");
	vanya.cast(bolt, boris);
	boris.cast(drain, vanya);
	vanya.cast(drain, boris);
	boris.cast(bolt, vanya);
	vanya.cast(drain, boris);
	boris.cast(bolt, vanya);


	system("pause");

	return 0;
}
