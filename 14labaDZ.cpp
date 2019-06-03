// 14labaDZ.cpp: определяет точку входа для консольного приложения.
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
int main()
{
  ifstream i("dz14_dune.txt",ios::in|ios::_Nocreate);
  string u;
  while(i >> u) ++anozer;
  cout <<"Slova dune "<< anozer << endl;
  HANDLE thread = CreateThread(NULL,0,thread2,NULL, 0, NULL);
  _getch();
  return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
  std::ifstream i("dz14_karenina.txt",ios::in|ios::_Nocreate);
  std::string u;
  while(i >> u) ++dor;
  cout <<"Slova katerina "<< dor << endl;
  cout <<"Obshee kolichestvo slov "<<dor+anozer<< endl;
  return 0;
}