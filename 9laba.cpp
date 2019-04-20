// 9laba.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"


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

 void Time::print()
 {
	 setlocale(LC_ALL, "Russian");
	 cout << hours << " часов " << (int)minutes <<" минут " << endl;
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
	x.setTime(2,30);
	int s =3;
	z=x*s;
	z.print();
	system("pause");	
}
	