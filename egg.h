#ifndef _DLLTEST_H_
#define _DLLTEST_H_ 

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

 class egg
{
public:
	int size;
	int weight;

public:
__declspec(dllexport) bool breaking(string who);
__declspec(dllexport) void say (string text);

};

#endif
