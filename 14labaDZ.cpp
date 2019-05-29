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
size_t a;
size_t b;
int main()
{
  ifstream x("dz14_dune.txt",ios::in|ios::_Nocreate);
  string y;
  while(x >> y) ++a;
  cout <<"Slova dune"<< a << endl;
  HANDLE thread = CreateThread(NULL,0,thread2,NULL, 0, NULL);
  cout <<"Obshee kolichestvo slov "<< a+b << endl;
  _getch();
  return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
  std::ifstream x("dz14_karenina.txt",ios::in|ios::_Nocreate);
  std::string y;
  while(x >> y) ++b;
  cout <<"Slova katerina"<< b << endl;
  return 0;
}