// 14laba2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>   
#include <windows.h> 
#include <conio.h> 
#include <random>


using namespace std;

DWORD WINAPI city1(LPVOID);
DWORD WINAPI city2(LPVOID);
DWORD WINAPI city3(LPVOID);
DWORD WINAPI city4(LPVOID);
DWORD WINAPI city5(LPVOID);

int Putin,Medvedev,Sobchak;

int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE thread[5];
	Putin=0;
	Medvedev=0;
	Sobchak=0;	
	thread[0]	= CreateThread(NULL,0,city1,NULL, 0, NULL);
	thread[1]	= CreateThread(NULL,0,city2,NULL, 0, NULL);
	thread[2]	= CreateThread(NULL,0,city3,NULL, 0, NULL);
	thread[3]	= CreateThread(NULL,0,city4,NULL, 0, NULL);
	thread[4]	= CreateThread(NULL,0,city5,NULL, 0, NULL);
	WaitForMultipleObjects(5, thread,true,NULL);
    cout<< " Golosu za Putina "<<Putin<<endl;
	cout<< " Golosu za Medvedeva "<<Medvedev<<endl;
	cout<< " Golosu za Sobchaka "<<Sobchak<<endl;
	cout<<" Obshee kolichestvo golosov "<<Putin+Medvedev+Sobchak<<endl;
};


DWORD WINAPI city1(LPVOID a)
{
  for (int a=0; a<500; a++)
{
    int x;
    x = rand() % 3+1;
	if (x == 1)
	{
			Putin++;
	}
	if (x == 2)
	{
			Medvedev++;
	}
	if (x == 3)
	{
			Sobchak++;
	}
} 
  return 0;
}


DWORD WINAPI city2(LPVOID a)
{
	for (int a=0; a<500; a++)
{
    int x;
    x = rand() % 3+1;
	if (x == 1)
	{
			Putin++;
	}
	if (x == 2)
	{
			Medvedev++;
	}
	if (x == 3)
	{
			Sobchak++;
	}
} 
  return 0;
}


DWORD WINAPI city3(LPVOID a)
{
	for (int a=0; a<500; a++)
{
	int x;
    x = rand() % 3+1;
	if (x == 1)
	{
			Putin++;
	}
	if (x == 2)
	{
			Medvedev++;
	}
	if (x == 3)
	{
			Sobchak++;
	}
} 
  return 0;
}


DWORD WINAPI city4(LPVOID a)
{
	
     for (int a=0; a<500; a++)
{
	int x;
    x = rand() % 3+1;
	if (x == 1)
	{
			Putin++;
	}
	if (x == 2)
	{
			Medvedev++;
	}
	if (x == 3)
	{
			Sobchak++;
	}
} 
  return 0;
}

DWORD WINAPI city5(LPVOID a)
{
	
    for (int a=0; a<500; a++)
{
	int x;
    x = rand() % 3+1;
	if (x == 1)
	{
			Putin++;
	}
	if (x == 2)
	{
			Medvedev++;
	}
	if (x == 3)
	{
			Sobchak++;
	}
} 
  return 0;
}
