
#include "stdafx.h"
#include "iostream"
#include <iostream>
#include <algorithm>

using namespace std;


class Time
{
private:
	long hours;
	unsigned char minutes;

public:
       void setTime(long newHours, unsigned char newMinutes);
	   long getHours();
	   unsigned char getMinutes();
	   Time operator+(Time &plusTime);
	   Time operator-(Time &minusTime);
	   Time operator*(const int &mulTime);
	   bool operator<(Time &minusTime);
	   bool operator>(Time &minusTime);
	   int min;
	   void print();
	   
};

void Time::setTime(long newHours, unsigned char newMinutes)
{
	hours=newHours;
	minutes=newMinutes;
}

long Time::getHours()
{
	return hours;
}

unsigned char Time::getMinutes()
{
	return minutes;
}

Time Time::operator+(Time &plusTime)
{
	Time result;
	result.hours=hours+plusTime.hours;
	result.minutes=minutes+plusTime.minutes;
	if (result.minutes >= 60)
	{
		result.minutes=(result.minutes-60);
		result.hours=(result.hours+1);  
	}
	return result;
}

Time Time::operator-(Time &minusTime)
{
	Time result;
	result.hours=hours-minusTime.hours;
	min=minutes-minusTime.minutes;
	if (min < 0)
	{
		result.hours=result.hours-1;
		result.minutes=min+60;
	}
	else
	{
	   result.minutes=minutes-minusTime.minutes;
	}
	return result;
}

Time Time::operator*(const int &mulTime)
{
	Time result;
	result.hours=hours*mulTime;
	result.minutes=minutes*mulTime;
    if (result.minutes >= 60)
	{
		result.minutes=(result.minutes-60);
		result.hours=(result.hours+1);  
	}
	return result;

}

bool Time::operator>(Time&a )
{
	if(this->hours > a.hours)
    return 1;
    else return 0;
}

bool Time::operator<(Time&a )
{
	if(this->hours < a.hours)
    return 1;
    else return 0;
}

 void Time::print()
 {
	 setlocale(LC_ALL, "Russian");
	 cout << hours << " минут " << (int)minutes <<" часов " << endl;
 }


int _tmain(int argc, _TCHAR* argv[])
{
    Time x,y,z;

	x.setTime(2,30);
	y.setTime(2,30);
	z=x+y;
	z.print();
	x.setTime(2,30);
	y.setTime(0,40);
	z=x-y;
	z.print();
	x.setTime(2,3);
	int s =3;
	z=x*s;
	z.print();

	Time a, b;
	a.setTime(10,30);
	b.setTime(11,05);
    bool r=a>b;
	cout<<r<<endl;

	a.setTime(10,30);
	b.setTime(12,05);
    bool r1=a<b;
	cout<<r1<<endl;
	   
	// массив и сортировка методом пузырек
		Time *drn, ant;
		drn = new Time[10];
		drn[0].setTime(10,15);
		drn[1].setTime(8,02);
		drn[2].setTime(6,23);
		drn[3].setTime(4,14);
		drn[4].setTime(3,18);
		drn[5].setTime(2,30);
		drn[6].setTime(1,40);
		drn[7].setTime(16,50);
		drn[8].setTime(18,55);
		drn[9].setTime(20,03);

		for (int i = 0; i < 10 - 1; i++) 
		{
        for (int j = 0; j < 10 - i - 1; j++) 
		{
        if (drn[j] > drn[j + 1]) {
				ant = drn[j];
                drn[j] = drn[j + 1];
                drn[j + 1] = ant;
            }
        }
    }

        for (int i = 0; i < 10; i++) 
		{
		drn[i].print();
        }
	    system("pause");	

}
