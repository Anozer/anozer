#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

class Employee;

     class Department 
{
private:
	string name;
    Employee *head;

public:
       void setName(string newname); 
	   string getname();
	   void setHead (Employee *newHead );
	   Employee *getHead();
	   void print();
};

    void Department::setName(string newname)
{
	this->name=newname;
}

    string Department::getname()
{
	return this->name;
}

    void Department::setHead(Employee *newHead)
{
	this->head=newHead;
}

    Employee* Department::getHead()
{
	return head;
}


    class idCard
{
private:
	int number;
	string dateExpire;
public:
       void setNumber(int newNumber); 
	   int getNumber();
	   void setDateExpire (string newDateExpire);
	   string getDateExpire();
	   void print();
};

void idCard::setNumber(int newNumber)
{
	this->number=newNumber;
}

int idCard::getNumber()
{
	return this->number;
}

void idCard::setDateExpire(string newDateExpire)
{
	this->dateExpire=newDateExpire;
}


string idCard::getDateExpire()
{
	return this->dateExpire;
}

void idCard::print()
{
	cout<<" idCard: "<<this->number;

}


     class Employee 
{
private:
	string position;
    idCard *card;
	int room;
	Department *deparnment;

public:
	   string name;
       void setPosition(string newPosition); 
	   string getPosition();
	   void setidCard (idCard *newidCard);
	   idCard *getidCard();
	   void setRoom (int newRoom);
	   int getRoom();
	   void setDepartment (Department *newDepartment);
	   Department *getDepartment();
	   void print();
};


    void Employee::setPosition(string newPosition)
{
	this->position=newPosition;
}

    string Employee::getPosition()
{
	return this->position;
}

    void Employee::setidCard (idCard *newidCard)
{
	card=newidCard;
	return;
}

    idCard* Employee::getidCard()
{
	return card;
}

    void Employee::setRoom (int newRoom)
{
	room=newRoom;
	return;
}

    int Employee::getRoom ()
{
	return room;
}

    void Employee::setDepartment (Department *newDepartment)
{
	deparnment=newDepartment;
	return;
}

    Department* Employee::getDepartment()
{
	return deparnment;
}


    void Employee::print()
{
	setlocale(LC_ALL, "Russian");
	cout <<" ���: "<<this->name<<endl;
	cout<<" ���������: "<<this->position;
	cout<<"\n �������: "<<this->room<<endl;
	
}

void Department::print()
{
	setlocale(LC_ALL, "Russian");
	cout<<"�����������: "<<this->name<<endl;
	this->head->print();
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	Department Raz, Admin;
	Employee Ivan, Petr, Sidor, Mikhail, Alexsandra, Evgeniya;
	Raz.setName("����������� ���������� ");
	Raz.setHead(&Ivan);
	Admin.setName("������������ ������������� ");
	Admin.setHead(&Mikhail);

	Ivan.name = "����";
	Ivan.setPosition("����� ������������");
	Ivan.setDepartment(&Raz);
	Ivan.setRoom(101);

	Petr.name = "����";
	Petr.setPosition("������� �����������");
	Petr.setDepartment(&Raz);
	Petr.setRoom(102);

	Sidor.name = "�����";
	Sidor.setPosition("�����������");
	Sidor.setDepartment(&Raz);
	Sidor.setRoom(102);

	Mikhail.name= "������";
	Mikhail.setPosition("��������");
    Mikhail.setDepartment(&Admin);
	Mikhail.setRoom(201);

	Alexsandra.name = "����������";
	Alexsandra.setPosition("����������� ���������");
    Alexsandra.setDepartment(&Admin);
	Alexsandra.setRoom(201);

	Evgeniya.name = "�������";
	Evgeniya.setPosition("������� ���������");
    Evgeniya.setDepartment(&Admin);
	Evgeniya.setRoom(201);

	Raz.print();
	Petr.print();
	Sidor.print();

	Admin.print();
	Alexsandra.print();
	Evgeniya.print();

	system  ("pause");


	return 0;
}