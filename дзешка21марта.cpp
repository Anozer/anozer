#include "stdafx.h"

#include <iostream>

using namespace std;
 
class Function {
private:
    long cel;
    double drob;
 
public:
 
    void getFunction() {
 
       cout << cel<<"."<<drob<<endl;
 
    }
 
    void setFunction() {
        cout << "Введите старшую часть = ";
        cin >> cel;
 
        cout << "Введите младшую часть = ";
        cin >> drob;
 
    }
 
 
    void inc(Function a) {
 
         Function b;

        b.cel = cel + a.cel;
		b.drob = drob + a.drob;
		b.getFunction(); 
 
    }
 
 
    void dec(Function a) {
 
        Function b;

        b.cel = cel - a.cel;
		b.drob = drob - a.drob;
		b.getFunction(); 
 
    
    }
 
 
    void ym(Function a) { // умножение
 
        Function b;

        b.cel = cel * a.cel;
		b.drob = drob * a.drob;
		b.getFunction(); 
    }
 
 
    void sravnenie(Function a) //сравнение

	{ 
		if(cel==a.cel && drob==a.drob)
            { 
                cout << "Равны" << endl;
            }
        else {
            if((cel-a.cel)>0){
                cout << "Число 1 > Число 2\n\n";
            }
            else {
                cout << "Число 1 < Число 2\n\n";
            }
        }
    }
 
};
 
 
int main() {
 
    setlocale(LC_ALL, "RUS");
 
    Function a;
	Function b;
	a.setFunction();
	b.setFunction();

    a.inc(b);
	a.dec(b);
	a.ym(b);
    a.sravnenie(b);
    system("pause");
}