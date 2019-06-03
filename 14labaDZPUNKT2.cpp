// 14labaDZPUNKT2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>   
#include <windows.h> 
#include <conio.h>  
#include "string"

using namespace std;

DWORD WINAPI thread2(LPVOID);
size_t anozer;
size_t dor;
size_t dorShe;

int main()
{
  ifstream i("dz14_dune.txt",ios::in|ios::_Nocreate);
  string u;
  while(i>>u)
	 {
   ++dor;
   if (u=="She" || u=="she")
   ++dorShe;
     }
  cout <<"Slova dune She i she "<< dorShe << endl;
  HANDLE thread = CreateThread(NULL,0,thread2,NULL, 0, NULL);
  _getch();
  return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
  std::ifstream i("dz14_karenina.txt",ios::in|ios::_Nocreate);
  std::string u;
  while(i>>u)
	 {
   ++dor;
   if (u=="She" || u=="she")
   ++dorShe;
     }
  cout <<"Slova katerina She i she "<< dorShe << endl;
  return 0;
}

